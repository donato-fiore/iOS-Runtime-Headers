// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWBOUNDINGBOXINFERENCECONFIGURATION_H
#define BWBOUNDINGBOXINFERENCECONFIGURATION_H



#import "BWInferenceConfiguration.h"
#import "FigCaptureLogSmartCameraGating.h"

@interface BWBoundingBoxInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) float angularOffsetExponentialSmoothing; // ivar: _angularOffsetExponentialSmoothing
@property (nonatomic) BWSmartCameraScene confidenceFilterSettings; // ivar: _confidenceFilterSettings
@property (nonatomic) float fontSizeStartReportingThreshold; // ivar: _fontSizeStartReportingThreshold
@property (nonatomic) float fontSizeStopReportingThreshold; // ivar: _fontSizeStopReportingThreshold
@property (nonatomic) BOOL inferenceInputUsesPortraitOrientation; // ivar: _inferenceInputUsesPortraitOrientation
@property (nonatomic) BOOL interiorSuppression; // ivar: _interiorSuppression
@property (nonatomic) float interiorSuppressionPadding; // ivar: _interiorSuppressionPadding
@property (retain, nonatomic) FigCaptureLogSmartCameraGating *logger; // ivar: _logger
@property (nonatomic) float maxMatchCost; // ivar: _maxMatchCost
@property (nonatomic) float trackingThreshold; // ivar: _trackingThreshold


+(void)initialize;
-(void)dealloc;


@end


#endif