// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIDEPTHADJUSTMENTCONTROLLER_H
#define PIDEPTHADJUSTMENTCONTROLLER_H

@class NSDictionary, NSNumber;


#import "PIAdjustmentController.h"

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic) CGFloat aperture;
@property (copy, nonatomic) NSDictionary *depthInfo;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;


-(BOOL)canRenderDepth;
-(id)capturedAperture;
-(id)initWithAdjustment:(id)arg0 ;


@end


#endif