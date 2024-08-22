// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLRESOURCEBINDING_H
#define SCNMTLRESOURCEBINDING_H

@class NSMutableArray, MTLArgument, NSString;
@protocol MTLArgumentEncoder;

#import <Foundation/Foundation.h>


@interface SCNMTLResourceBinding : NSObject {
    BOOL _needsRenderResource;
    ? _indices;
    ? _samplerIndices;
    NSMutableArray *_usedResources;
}


@property (retain, nonatomic) MTLArgument *argument; // ivar: _argument
@property (retain, nonatomic) NSObject<MTLArgumentEncoder> *argumentEncoder; // ivar: _argumentEncoder
@property (copy, nonatomic) id *bindBlock; // ivar: _bindBlock
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needsRenderResource;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) NSMutableArray *usedResources;


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif