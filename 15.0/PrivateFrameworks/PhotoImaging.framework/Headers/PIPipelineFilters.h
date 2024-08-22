// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPIPELINEFILTERS_H
#define PIPIPELINEFILTERS_H


#import <Foundation/Foundation.h>


@interface PIPipelineFilters : NSObject



+(id)applyOrientationFilter;
+(id)autoCropFilter;
+(id)autoloopStabilizedVideoFilter;
+(id)exifOrientationAndCropStraightenOnly;
+(id)inputToCropFilter;
+(id)iosCropToolFilter;
+(id)noCropFilter;
+(id)noGeometryFilter;
+(id)noMuteFilter;
+(id)noOrientationFilter;
+(id)noRedEyeFilter;
+(id)noTrimFilter;
+(id)oneShotPortraitV2ExportFilter;
+(id)orientationAsMetaDataFilter;
+(id)overcaptureSourceFilter;
+(id)perspectiveStraightenWithoutCropFilter;
+(id)postGeometryFilter;
+(id)preGeometryFilter;
+(id)primarySourceFilter;
+(id)rawFaceBalanceFilter;
+(id)rawSourceFilterIncludingOrientation;
+(id)socPseudoColorFilter;
+(id)sourceFilterNoOrientation;
+(id)spatialOvercaptureVideoSourceFilter;
+(id)stopAtTagIncludeGeometryFilter:(id)arg0 ;
+(id)stopAtTagIncludeOrientationFilter:(id)arg0 ;
+(id)stripAllTimeAdjustmentsFilter;
+(id)sushiLevel1Filter;


@end


#endif