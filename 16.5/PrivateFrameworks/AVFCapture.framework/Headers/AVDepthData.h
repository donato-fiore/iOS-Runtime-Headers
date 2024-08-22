// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDEPTHDATA_H
#define AVDEPTHDATA_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVDepthDataInternal.h"
#import "AVCameraCalibrationData.h"

@interface AVDepthData : NSObject {
    AVDepthDataInternal *_internal;
}


@property (readonly) NSArray *availableDepthDataTypes;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NSInteger depthDataAccuracy;
@property (readonly, getter=isDepthDataFiltered) BOOL depthDataFiltered;
@property (readonly) *__CVBuffer depthDataMap;
@property (readonly) NSInteger depthDataQuality;
@property (readonly) unsigned int depthDataType;


+(id)_allSupportedDepthDataPixelFormatTypes;
+(id)depthDataFromDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)portraitScoreIsHigh;
-(float)depthBlurEffectSimulatedAperture;
-(float)portraitLightingEffectStrength;
-(float)portraitScore;
-(id)debugDescription;
-(id)depthBlurEffectRenderingParameters;
-(id)depthDataByApplyingExifOrientation:(unsigned int)arg0 ;
-(id)depthDataByConvertingToDepthDataType:(unsigned int)arg0 ;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)description;
-(id)dictionaryRepresentationForAuxiliaryDataType:(*id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 auxiliaryMetadata:(struct CGImageMetadata *)arg1 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 depthMetadataDictionary:(id)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(struct CGImageMetadata *)copyAuxiliaryMetadata;
-(struct __CFString *)auxiliaryImageType;
-(struct __CVBuffer *)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif