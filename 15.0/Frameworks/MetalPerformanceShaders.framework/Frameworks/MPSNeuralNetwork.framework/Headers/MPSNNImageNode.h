// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNIMAGENODE_H
#define MPSNNIMAGENODE_H

@protocol MPSHandle, MPSImageAllocator;

#import <Foundation/Foundation.h>

#import "MPSNNFilterNode.h"

@interface MPSNNImageNode : NSObject {
    MPSNNFilterNode *_parent;
    NSUInteger _clientCount;
    BOOL _initializedWithParent;
}


@property (nonatomic) BOOL exportFromGraph; // ivar: _exportFromGraph
@property (nonatomic) NSUInteger format; // ivar: _format
@property (retain, nonatomic) NSObject<MPSHandle> *handle; // ivar: _handle
@property (retain, nonatomic) NSObject<MPSImageAllocator> *imageAllocator; // ivar: _imageAllocator
@property (nonatomic) BOOL stopGradient; // ivar: _stopGradient
@property (nonatomic) BOOL synchronizeResource; // ivar: _synchronize


+(id)exportedNodeWithHandle:(id)arg0 ;
+(id)nodeWithHandle:(id)arg0 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithParent:(id)arg0 ;
-(void)dealloc;


@end


#endif