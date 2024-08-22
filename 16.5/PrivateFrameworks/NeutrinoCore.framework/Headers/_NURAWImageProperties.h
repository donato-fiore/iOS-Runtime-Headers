// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NURAWIMAGEPROPERTIES_H
#define _NURAWIMAGEPROPERTIES_H

@class NSArray, NSString, CIFilter;
@protocol NURAWImageProperties, NURAWNoiseReductionProperties;

#import <Foundation/Foundation.h>

#import "_NURAWCameraSpaceProperties.h"
#import "_NURAWToneCurveProperties.h"

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>



@property (retain) NSArray *availableDecoderVersions; // ivar: _availableDecoderVersions
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *decoderVersion; // ivar: _decoderVersion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isAppleProRaw; // ivar: _isAppleProRaw
@property BOOL isDeepFusion; // ivar: _isDeepFusion
@property BOOL isSensorRawCapture; // ivar: _isSensorRawCapture
@property BOOL isUnifiedBracketingHDRCapture; // ivar: _isUnifiedBracketingHDRCapture
@property (retain) NSObject<NURAWNoiseReductionProperties> *noiseReductionProperties; // ivar: _noiseReductionProperties
@property (retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties; // ivar: _rawCameraSpaceProperties
@property (retain) CIFilter *rawConvert; // ivar: _rawConvert
@property (retain) _NURAWToneCurveProperties *rawToneCurveProperties; // ivar: _rawToneCurveProperties
@property (readonly) Class superclass;
@property CGFloat temperature; // ivar: _temperature
@property CGFloat tint; // ivar: _tint


-(id)inputNeutralXYFromRGB:(*CGFloat)arg0 ;


@end


#endif