// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGSTILLIMAGESHAREDPROCESSINGRESOURCES_H
#define FIGSTILLIMAGESHAREDPROCESSINGRESOURCES_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "FigWiredMemory.h"

@interface FigStillImageSharedProcessingResources : NSObject {
    BOOL _resourcesAllocated;
    int _resourceAllocationError;
    id<MTLBuffer> *_sharedMetalBuffer;
    FigWiredMemory *_sharedRegWarpBuffer;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *sharedMetalBuffer;
@property (readonly, nonatomic) NSUInteger sharedMetalBufferLengthInMB; // ivar: _sharedMetalBufferLengthInMB
@property (readonly, nonatomic) FigWiredMemory *sharedRegWarpBuffer;
@property (readonly, nonatomic) NSUInteger sharedRegWarpBufferLengthInMB; // ivar: _sharedRegWarpBufferLengthInMB


+(void)initialize;
-(id)description;
-(id)initWithSharedMetalBufferLengthInMB:(NSUInteger)arg0 sharedRegWarpBufferLengthInMB:(NSUInteger)arg1 ;
-(int)ensureAllocatedSync;
-(void)dealloc;


@end


#endif