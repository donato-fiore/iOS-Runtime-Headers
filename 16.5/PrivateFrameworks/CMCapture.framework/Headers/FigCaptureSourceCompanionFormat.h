// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESOURCECOMPANIONFORMAT_H
#define FIGCAPTURESOURCECOMPANIONFORMAT_H


#import <Foundation/Foundation.h>


@interface FigCaptureSourceCompanionFormat : NSObject

@property (readonly) ? fesDimensions; // ivar: _fesDimensions
@property (readonly) ? fesInputCropDimensions; // ivar: _fesInputCropDimensions
@property (readonly) int formatIndex; // ivar: _formatIndex
@property (readonly) ? geometricDistortionCorrectedNativeDimensions; // ivar: _geometricDistortionCorrectedNativeDimensions
@property (readonly) ? highQualitySensorDimensions; // ivar: _highQualitySensorDimensions
@property (readonly) ? outputCropDimensionsWhenFesIsEnabled; // ivar: _outputCropDimensionsWhenFesIsEnabled
@property (readonly) ? postGDCCropDimensions; // ivar: _postGDCCropDimensions
@property (readonly) ? sensorCropDimensions; // ivar: _sensorCropDimensions
@property (readonly) ? sensorDimensions; // ivar: _sensorDimensions
@property (readonly) BOOL sifrEnabled; // ivar: _sifrEnabled


-(id)description;
-(id)initWithCompanionFormatDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif