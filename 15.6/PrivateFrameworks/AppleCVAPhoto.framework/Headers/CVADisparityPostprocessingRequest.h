// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVADISPARITYPOSTPROCESSINGREQUEST_H
#define CVADISPARITYPOSTPROCESSINGREQUEST_H

@class NSDictionary, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface CVADisparityPostprocessingRequest : NSObject

@property (readonly) float currentFocusPosition; // ivar: _currentFocusPosition
@property (readonly) *__CVBuffer destinationDisparityPixelBuffer; // ivar: _destinationDisparityPixelBuffer
@property (readonly) float disparityNormalizationMultiplier; // ivar: _disparityNormalizationMultiplier
@property (readonly) float disparityNormalizationOffset; // ivar: _disparityNormalizationOffset
@property (readonly) NSDictionary *faceModel; // ivar: _faceModel
@property (readonly) NSArray *facesArray; // ivar: _facesArray
@property (readonly) *__CVBuffer fixedPointDisparityPixelBuffer; // ivar: _fixedPointDisparityPixelBuffer
@property (readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; // ivar: _focusDistanceToMaxAllowedFocusDistanceRatio
@property (readonly) unsigned short focusMapHeight; // ivar: _focusMapHeight
@property (readonly) unsigned short focusMapWidth; // ivar: _focusMapWidth
@property (readonly) NSArray *focusRegion; // ivar: _focusRegion
@property (readonly) int focusRegionType; // ivar: _focusRegionType
@property (readonly) NSData *focusTileData; // ivar: _focusTileData
@property (readonly) unsigned short focusTileHeight; // ivar: _focusTileHeight
@property (readonly) unsigned short focusTileWidth; // ivar: _focusTileWidth
@property (readonly) short focusTileXOffset; // ivar: _focusTileXOffset
@property (readonly) short focusTileYOffset; // ivar: _focusTileYOffset
@property (readonly) BOOL isFocalPlaneLocked; // ivar: _isFocalPlaneLocked
@property (readonly) *__CVBuffer networkDisparityPixelBuffer; // ivar: _networkDisparityPixelBuffer
@property (readonly) float phaseToBlurFactor; // ivar: _phaseToBlurFactor
@property (readonly) *__CVBuffer segmentationPixelBuffer; // ivar: _segmentationPixelBuffer
@property (readonly) *__CVBuffer sourceColorPixelBuffer; // ivar: _sourceColorPixelBuffer
@property (readonly) CVAVector sourceColorPixelBufferGlobalMotion; // ivar: _sourceColorPixelBufferGlobalMotion
@property (readonly) CVAVector sourceColorPixelBufferGravity; // ivar: _sourceColorPixelBufferGravity
@property (readonly) CVAQuaternion sourceColorPixelBufferOrientation; // ivar: _sourceColorPixelBufferOrientation
@property (readonly) unsigned short totalSensorCropHeight; // ivar: _totalSensorCropHeight
@property (readonly) unsigned short totalSensorCropWidth; // ivar: _totalSensorCropWidth
@property (readonly) short totalSensorCropXOffset; // ivar: _totalSensorCropXOffset
@property (readonly) short totalSensorCropYOffset; // ivar: _totalSensorCropYOffset


-(id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg0 fixedPointDisparityPixelBuffer:(struct __CVBuffer *)arg1 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg2 focusRegion:(id)arg3 focusRegionType:(int)arg4 currentFocusPosition:(float)arg5 lockFocalPlane:(BOOL)arg6 sourceColorPixelBufferOrientation:(struct CVAQuaternion )arg7 sourceColorPixelBufferGravity:(struct CVAVector )arg8 sourceColorPixelBufferGlobalMotion:(struct CVAVector )arg9 facesArray:(id)arg10 disparityNormalizationMultiplier:(float)arg11 disparityNormalizationOffset:(float)arg12 ;
-(id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 focusTileData:(id)arg2 focusTileXOffset:(float)arg3 focusTileYOffset:(float)arg4 focusTileWidth:(float)arg5 focusTileHeight:(float)arg6 phaseToBlurFactor:(float)arg7 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg8 focusRegion:(id)arg9 focusRegionType:(int)arg10 currentFocusPosition:(float)arg11 lockFocalPlane:(BOOL)arg12 sourceColorPixelBufferOrientation:(struct CVAQuaternion )arg13 sourceColorPixelBufferGravity:(struct CVAVector )arg14 sourceColorPixelBufferGlobalMotion:(struct CVAVector )arg15 facesArray:(id)arg16 ;
-(id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 focusTileData:(id)arg2 focusTileXOffset:(short)arg3 focusTileYOffset:(short)arg4 focusTileWidth:(unsigned short)arg5 focusTileHeight:(unsigned short)arg6 focusMapWidth:(unsigned short)arg7 focusMapHeight:(unsigned short)arg8 totalSensorCropXOffset:(short)arg9 totalSensorCropYOffset:(short)arg10 totalSensorCropWidth:(unsigned short)arg11 totalSensorCropHeight:(unsigned short)arg12 phaseToBlurFactor:(float)arg13 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg14 focusRegion:(id)arg15 focusRegionType:(int)arg16 currentFocusPosition:(float)arg17 lockFocalPlane:(BOOL)arg18 focusDistanceToMaxAllowedFocusDistanceRatio:(float)arg19 sourceColorPixelBufferOrientation:(struct CVAQuaternion )arg20 sourceColorPixelBufferGravity:(struct CVAVector )arg21 sourceColorPixelBufferGlobalMotion:(struct CVAVector )arg22 facesArray:(id)arg23 ;
-(id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 focusTileData:(id)arg2 focusTileXOffset:(short)arg3 focusTileYOffset:(short)arg4 focusTileWidth:(unsigned short)arg5 focusTileHeight:(unsigned short)arg6 focusMapWidth:(unsigned short)arg7 focusMapHeight:(unsigned short)arg8 totalSensorCropXOffset:(short)arg9 totalSensorCropYOffset:(short)arg10 totalSensorCropWidth:(unsigned short)arg11 totalSensorCropHeight:(unsigned short)arg12 phaseToBlurFactor:(float)arg13 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg14 focusRegion:(id)arg15 focusRegionType:(int)arg16 currentFocusPosition:(float)arg17 lockFocalPlane:(BOOL)arg18 sourceColorPixelBufferOrientation:(struct CVAQuaternion )arg19 sourceColorPixelBufferGravity:(struct CVAVector )arg20 sourceColorPixelBufferGlobalMotion:(struct CVAVector )arg21 facesArray:(id)arg22 ;
-(id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg0 segmentationPixelBuffer:(struct __CVBuffer *)arg1 networkDisparityPixelBuffer:(struct __CVBuffer *)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(BOOL)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion )arg8 sourceColorPixelBufferGravity:(struct CVAVector )arg9 sourceColorPixelBufferGlobalMotion:(struct CVAVector )arg10 facesArray:(id)arg11 disparityNormalizationMultiplier:(float)arg12 disparityNormalizationOffset:(float)arg13 ;
-(void)dealloc;


@end


#endif