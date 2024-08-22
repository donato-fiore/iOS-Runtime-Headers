// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGESAMPLEBUFFERSINKNODE_H
#define BWSTILLIMAGESAMPLEBUFFERSINKNODE_H

@class NSArray;


#import "BWSinkNode.h"
#import "BWStillImageSampleBufferSinkNodeAnalyticsConfiguration.h"
#import "BWStillImageCaptureAnalyticsPayload.h"

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    NSInteger _lastCaptureRequestTime;
    NSInteger _lastReportedSettingsID;
    BWStillImageCaptureAnalyticsPayload *_cachedAnalyticsPayloadForPortraitFailures;
}


@property (copy, nonatomic) id *sampleBufferAvailableHandler; // ivar: _sampleBufferAvailableHandler


+(void)initialize;
-(BOOL)captureTimePhotosCurationSupported;
-(BOOL)clientIsCameraOrDerivative;
-(id)analyticsConfiguration;
-(id)initWithInputMediaType:(unsigned int)arg0 sinkID:(id)arg1 ;
-(id)initWithSinkID:(id)arg0 ;
-(id)nodeSubType;
-(id)propagatedAttachedMediaKeys;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAnalyticsConfiguration:(id)arg0 ;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg0 ;
-(void)setClientIsCameraOrDerivative:(BOOL)arg0 ;
-(void)setPropagatedAttachedMediaKeys:(id)arg0 ;


@end


#endif