// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEFOCUSPIXELDISPARITYNODE_H
#define BWSTILLIMAGEFOCUSPIXELDISPARITYNODE_H

@class FigFocusPixelDisparityGenerator;


#import "BWNode.h"
#import "BWStillImageNodeConfiguration.h"
#import "BWSensorConfiguration.h"

@interface BWStillImageFocusPixelDisparityNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWSensorConfiguration *_sensorConfiguration;
    FigFocusPixelDisparityGenerator *_focusPixelDisparityGenerator;
    *opaqueCMFormatDescription _disparityFormatDescription;
    ? _identityExtrinsicMatrix;
    float _pixelSizeInMm;
    BOOL _depthIsAlwaysHighQuality;
}




+(void)initialize;
-(id)initWithNodeConfiguration:(id)arg0 sensorConfiguration:(id)arg1 disparityMapWidth:(NSUInteger)arg2 disparityMapHeight:(NSUInteger)arg3 depthIsAlwaysHighQuality:(BOOL)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)processorOptionsForProcessorVersion:(int)arg0 ;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_attachDepthMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_processDisparityForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_removeConsumedAttachedMediaFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif