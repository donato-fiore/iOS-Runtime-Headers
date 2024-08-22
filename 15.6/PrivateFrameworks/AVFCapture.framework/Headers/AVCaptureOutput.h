// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREOUTPUT_H
#define AVCAPTUREOUTPUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureOutputInternal.h"

@interface AVCaptureOutput : NSObject {
    AVCaptureOutputInternal *_outputInternal;
}


@property (readonly, nonatomic) NSArray *connections;


+(NSInteger)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)allOutputSubclasses;
+(id)availableVideoCodecTypesForSourceDevice:(id)arg0 sourceFormat:(id)arg1 outputDimensions:(struct ? )arg2 fileType:(id)arg3 videoCodecTypesAllowList:(id)arg4 ;
+(id)supportedProResCodecTypes;
+(void)initialize;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg0 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg0 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg0 ;
-(BOOL)updateVideoSettingsForConnection:(id)arg0 ;
-(id)_inputForConnection:(id)arg0 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg0 sourceSettings:(id)arg1 fileType:(id)arg2 ;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg0 sourceSettings:(id)arg1 videoCodec:(id)arg2 isIris:(BOOL)arg3 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)connectionMediaTypes;
-(id)connectionWithMediaType:(id)arg0 ;
-(id)firstEnabledConnectionForMediaType:(id)arg0 ;
-(id)initSubclass;
-(id)liveConnections;
-(id)recommendedOutputSettingsForConnection:(id)arg0 sourceSettings:(id)arg1 videoCodecType:(id)arg2 fileType:(id)arg3 isIris:(BOOL)arg4 ;
-(id)session;
-(id)sinkID;
-(id)transformedMetadataObjectForMetadataObject:(id)arg0 connection:(id)arg1 ;
-(int)changeSeed;
-(struct CGRect )metadataOutputRectOfInterestForRect:(struct CGRect )arg0 ;
-(struct CGRect )rectForMetadataOutputRectOfInterest:(struct CGRect )arg0 ;
-(struct CGSize )outputSizeForSourceFormat:(id)arg0 ;
-(unsigned int)requiredOutputFormatForConnection:(id)arg0 ;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)bumpChangeSeed;
-(void)dealloc;
-(void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)handleBackgroundBlurActiveChangedForDevice:(id)arg0 ;
-(void)handleCenterStageActiveChangedForDevice:(id)arg0 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)performBlockOnSessionNotifyingThread:(id)arg0 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)setSession:(id)arg0 ;
-(void)setSinkID:(id)arg0 ;
-(void)updateMetadataTransformForSourceFormat:(id)arg0 ;


@end


#endif