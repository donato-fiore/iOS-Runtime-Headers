// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNSTATENODE_H
#define MPSNNSTATENODE_H

@protocol MPSHandle;

#import <Foundation/Foundation.h>

#import "MPSNNFilterNode.h"

@interface MPSNNStateNode : NSObject {
    MPSNNFilterNode *_parent;
    NSUInteger _clientCount;
    BOOL _initializedWithParent;
}


@property (nonatomic) BOOL exportFromGraph; // ivar: _exportFromGraph
@property (retain, nonatomic) NSObject<MPSHandle> *handle; // ivar: _handle
@property (nonatomic) BOOL synchronizeResource; // ivar: _synchronize


-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)initWithParent:(id)arg0 ;
-(void)dealloc;


@end


#endif