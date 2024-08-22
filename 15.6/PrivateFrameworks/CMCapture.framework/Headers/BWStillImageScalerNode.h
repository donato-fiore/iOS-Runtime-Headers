// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGESCALERNODE_H
#define BWSTILLIMAGESCALERNODE_H

@class NSMutableDictionary;


#import "BWNode.h"
#import "BWVideoFormat.h"
#import "BWPixelBufferPool.h"

@interface BWStillImageScalerNode : BWNode {
    BWVideoFormat *_outputFormat;
    *opaqueCMFormatDescription _outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool *_pool;
    *OpaqueVTPixelTransferSession _scalingSession;
    BOOL _blackFillingRequired;
    NSMutableDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    NSMutableDictionary *_preparedVideoFormatByAttachedMediaKey;
    *OpaqueVTPixelTransferSession _attachedMediaScalingSession;
    ? _resizedOutputDimensions;
}


@property (nonatomic) ? resizedOutputDimensions;


+(void)initialize;
-(BOOL)_decompressionRequiredWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(BOOL)_updateDNGDictionaryForZoomInSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 sourceDimensions:(struct ? )arg1 denormalizedCropRect:(struct CGRect )arg2 destDimensions:(struct ? )arg3 ;
-(BOOL)blackFillingRequired;
-(id)_attachedMediaKeysThatRequireDifferentScalingThanPrimaryMediaSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 primaryMediaNormalizedInputCropRect:(struct CGRect )arg1 primaryMediaRequestedOutputWidth:(NSUInteger)arg2 primaryMediaRequestedOutputHeight:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithPoolCapacity:(int)arg0 ;
-(id)mainImageDownscalingFactorByAttachedMediaKey;
-(id)nodeSubType;
-(id)nodeType;
-(int)_blackenBorderAttachedMediasOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 normalizedInputCropRect:(struct CGRect )arg1 requestedSettings:(id)arg2 ;
-(int)_buildPrimaryFormatScalingSession;
-(int)_rebuildPrimaryFormatBufferPoolWithRequestedWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(int)_removeUnmodifiedAttachedMedias:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_resolveScalerModeWithSettings:(id)arg0 normalizedInputCropRect:(struct CGRect )arg1 attachedMediaThatRequiresDifferentScalingThanPrimaryMedia:(id)arg2 stillImageScalerModeOut:(*int)arg3 scaledDenormalizedInputCropRectOut:(struct CGRect *)arg4 mediaToProcessOut:(*id)arg5 ;
-(int)_zoomAttachedMedia:(id)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedSettings:(id)arg2 ;
-(void)_buildAttacedMediaScalingSession;
-(void)_purgeResourcesLeavingThemForMediaToProcess:(id)arg0 ;
-(void)_rebuildBufferPoolForAttachedMediaToProcess:(id)arg0 primaryFormatWidth:(NSUInteger)arg1 primaryFormatHeight:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBlackFillingRequired:(BOOL)arg0 ;
-(void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg0 ;


@end


#endif