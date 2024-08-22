// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMOTIONATTACHMENTSNODE_H
#define BWMOTIONATTACHMENTSNODE_H

@class NSDictionary;


#import "BWNode.h"
#import "BWLimitedGMErrorLogger.h"
#import "BWNodeOutput.h"

@interface BWMotionAttachmentsNode : BWNode {
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSDictionary *_optionsDict;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}


@property (nonatomic) BOOL adjustsValidBufferRectForDarkShade; // ivar: _adjustsValidBufferRectForDarkShade
@property (readonly, nonatomic) BWNodeOutput *offlineVISMotionDataOutput; // ivar: _offlineVISMotionDataOutput
@property (readonly, nonatomic) BWNodeOutput *sourceVideoWithMotionAttachmentsOutput; // ivar: _sourceVideoWithMotionAttachmentsOutput


+(void)initialize;
-(id)initWithSensorIDDictionaryByPortType:(id)arg0 cameraModuleInfoByPortType:(id)arg1 tuningParameters:(id)arg2 activePortTypes:(id)arg3 horizontalSensorBinningFactor:(int)arg4 verticalSensorBinningFactor:(int)arg5 maxSupportedFrameRate:(float)arg6 motionAttachmentsMode:(int)arg7 motionAttachmentsSource:(int)arg8 motionCallbackThreadPriority:(unsigned int)arg9 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg10 provideOfflineVISMotionDataOutput:(BOOL)arg11 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_setupSampleBufferProcessor;
-(void)_flushIfRequiredForMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif