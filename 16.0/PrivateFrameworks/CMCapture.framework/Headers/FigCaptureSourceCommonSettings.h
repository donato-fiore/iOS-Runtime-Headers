// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESOURCECOMMONSETTINGS_H
#define FIGCAPTURESOURCECOMMONSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FigCaptureSourceCommonSettings : NSObject

@property (readonly, nonatomic) BOOL RGBIRStereoFusionThresholdsEnabled; // ivar: _RGBIRStereoFusionThresholdsEnabled
@property (readonly, nonatomic) BOOL flashMitigationRequired; // ivar: _flashMitigationRequired
@property (readonly, nonatomic) int initialMemoryPoolSizeMB; // ivar: _initialMemoryPoolSizeMB
@property (readonly, nonatomic) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride; // ivar: _livePhotoJPEGIntermediateCompressionRatioDefaultOverride
@property (readonly, nonatomic) BOOL livePhotoVitalityScoringSupported; // ivar: _livePhotoVitalityScoringSupported
@property (readonly, nonatomic) NSDictionary *photoProcessingTimeRangesInMS; // ivar: _photoProcessingTimeRangesInMS
@property (readonly, nonatomic) int previewRegistrationType; // ivar: _previewRegistrationType


-(void)dealloc;


@end


#endif