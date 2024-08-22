// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTNORMALESTIMATION_H
#define PTNORMALESTIMATION_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PTNormalEstimation : NSObject {
    id<MTLComputePipelineState> *_estimateNormalsFromDisparity;
}




-(id)initWithDevice:(id)arg0 ;
-(void)estimateNormalsFromDisparity:(id)arg0 inDiparity:(id)arg1 outNormal:(id)arg2 sensorWidth:(float)arg3 focalLength:(float)arg4 ;


@end


#endif