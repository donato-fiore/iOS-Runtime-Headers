// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(BOOL)blackFillingRequired;
-(id)init;
-(id)initWithPoolCapacity:(int)arg0 ;
-(id)mainImageDownscalingFactorByAttachedMediaKey;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBlackFillingRequired:(BOOL)arg0 ;
-(void)setMainImageDownscalingFactorByAttachedMediaKey:(id)arg0 ;


@end


#endif