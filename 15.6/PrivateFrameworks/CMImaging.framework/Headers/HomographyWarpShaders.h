// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMOGRAPHYWARPSHADERS_H
#define HOMOGRAPHYWARPSHADERS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface HomographyWarpShaders : NSObject {
    id<MTLComputePipelineState> *warpComputePipeline;
}




-(id)initWithMetal:(id)arg0 ;


@end


#endif