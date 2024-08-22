// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWADAPTIVECORRECTIONPREVIEWREGISTRATIONTUNINGPARAMETERS_H
#define BWADAPTIVECORRECTIONPREVIEWREGISTRATIONTUNINGPARAMETERS_H


#import <Foundation/Foundation.h>


@interface BWAdaptiveCorrectionPreviewRegistrationTuningParameters : NSObject {
    AdaptiveCorrectionConfig _adaptiveCorrectionConfigs;
}


@property (readonly, nonatomic) *AdaptiveCorrectionConfig adaptiveCorrectionConfigsPtr; // ivar: _adaptiveCorrectionConfigsPtr
@property (readonly, nonatomic) unsigned int configuredNumKeypoints; // ivar: _configuredNumKeypoints
@property (readonly, nonatomic) CGFloat epipolarWeightFalloffDistance; // ivar: _epipolarWeightFalloffDistance
@property (readonly, nonatomic) float keypointsMinSelectionScore; // ivar: _keypointsMinSelectionScore
@property (readonly, nonatomic) CGFloat macroDepthWeightFalloffDistance; // ivar: _macroDepthWeightFalloffDistance
@property (readonly, nonatomic) BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig regToolBoxConfig; // ivar: _regToolBoxConfig


+(void)initialize;
-(id)init;
-(id)initWithTuningDictionary:(id)arg0 ;


@end


#endif