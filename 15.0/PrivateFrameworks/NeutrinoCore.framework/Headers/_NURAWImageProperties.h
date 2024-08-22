// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NURAWIMAGEPROPERTIES_H
#define _NURAWIMAGEPROPERTIES_H

@class NSArray, NSString, CIFilter;
@protocol NURAWImageProperties, NURAWNoiseReductionProperties;

#import <Foundation/Foundation.h>

#import "_NURAWCameraSpaceProperties.h"

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>



@property (retain) NSArray *availableDecoderVersions; // ivar: _availableDecoderVersions
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *decoderVersion; // ivar: _decoderVersion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NURAWNoiseReductionProperties> *noiseReductionProperties; // ivar: _noiseReductionProperties
@property (retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties; // ivar: _rawCameraSpaceProperties
@property (retain) CIFilter *rawConvert; // ivar: _rawConvert
@property (readonly) Class superclass;
@property CGFloat temperature; // ivar: _temperature
@property CGFloat tint; // ivar: _tint


-(id)inputNeutralXYFromRGB:(*CGFloat)arg0 ;


@end


#endif