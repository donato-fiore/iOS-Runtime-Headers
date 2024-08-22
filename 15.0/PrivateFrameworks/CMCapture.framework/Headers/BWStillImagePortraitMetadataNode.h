// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEPORTRAITMETADATANODE_H
#define BWSTILLIMAGEPORTRAITMETADATANODE_H

@class NSDictionary, FigSDOFRenderingTuningParameters;


#import "BWNode.h"

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    FigSDOFRenderingTuningParameters *_sdofTuningParams;
    int _renderingVersion;
}




+(void)initialize;
-(id)initWithNodeConfiguration:(id)arg0 sensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(int)_loadAndConfigureSDOFRenderering;
-(void)_attachPortraitLightingEffectMetadataToDepthMetadata:(id)arg0 ;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif