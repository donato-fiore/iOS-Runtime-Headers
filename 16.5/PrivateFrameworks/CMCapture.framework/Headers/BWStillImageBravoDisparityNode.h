// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEBRAVODISPARITYNODE_H
#define BWSTILLIMAGEBRAVODISPARITYNODE_H

@class NSDictionary, FigDisparityGenerator;


#import "BWNode.h"
#import "BWStillImageSettings.h"
#import "BWNodeError.h"
#import "BWStillImageNodeConfiguration.h"
#import "BWNodeInput.h"

@interface BWStillImageBravoDisparityNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    FigDisparityGenerator *_disparityGenerator;
    NSUInteger _disparityMapWidth;
    NSUInteger _disparityMapHeight;
    *opaqueCMFormatDescription _disparityFormatDescription;
    BWStillImageSettings *_currentStillImageSettings;
    int _expectedDisparityCount;
    int _deliveredDisparityCount;
    int _processingMode;
    *opaqueCMSampleBuffer _teleSbuf;
    *opaqueCMSampleBuffer _wideSbuf;
    BOOL _emitTeleFrame;
    BOOL _emitWideFrame;
    BWNodeError *_errorForWide;
    BWNodeError *_errorForTele;
    BOOL _shouldComputeDisparityWhenCalibrationFails;
    BOOL _disparityInputIsRaw;
    BWStillImageNodeConfiguration *_nodeConfiguration;
}


@property (readonly, nonatomic) BWNodeInput *telephotoInput; // ivar: _telephotoInput
@property (readonly, nonatomic) BWNodeInput *wideInput; // ivar: _wideInput


+(void)initialize;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(id)initWithNodeConfiguration:(id)arg0 sensorConfigurationsByPortType:(id)arg1 disparityMapWidth:(NSUInteger)arg2 disparityMapHeight:(NSUInteger)arg3 outputDisparityBufferCount:(int)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg0 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg0 ;


@end


#endif