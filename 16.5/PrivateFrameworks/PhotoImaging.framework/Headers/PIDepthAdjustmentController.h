// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIDEPTHADJUSTMENTCONTROLLER_H
#define PIDEPTHADJUSTMENTCONTROLLER_H

@class NSDictionary, NSNumber;


#import "PIAdjustmentController.h"

@interface PIDepthAdjustmentController : PIAdjustmentController

@property (nonatomic) CGFloat aperture;
@property (copy, nonatomic) NSDictionary *depthInfo;
@property (copy, nonatomic) NSNumber *glassesMatteAllowed;


-(BOOL)canAdjustApertureValue;
-(BOOL)canRenderDepth;
-(CGFloat)maximumAperture;
-(CGFloat)minimumAperture;
-(id)capturedAperture;
-(id)initWithAdjustment:(id)arg0 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif