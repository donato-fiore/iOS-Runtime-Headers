// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCAPTIONSSTREAM_H
#define VCCAPTIONSSTREAM_H

@class NSString;
@protocol VCCaptionsReceiverDelegate, VCCaptionsSource, VCCaptionsSourceDelegate;


#import "VCVideoStream.h"
#import "VCCaptionsReceiver.h"

@interface VCCaptionsStream : VCVideoStream <VCCaptionsReceiverDelegate, VCCaptionsSource>

 {
    VCCaptionsReceiver *_captionsReceiver;
    id<VCCaptionsSourceDelegate> *_captionsDelegate;
    BOOL _enabled;
}


@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly, nonatomic) BOOL captionsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)vcVideoReceiver:(id)arg0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isFirstFrame:(BOOL)arg2 ;
-(id)captionsDelegate;
-(id)dataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)init;
-(id)initWithTransportSessionID:(unsigned int)arg0 idsParticipantID:(NSUInteger)arg1 ssrc:(unsigned int)arg2 streamToken:(NSInteger)arg3 ;
-(void)dealloc;
-(void)didReceiveCaptions:(id)arg0 ;
-(void)enableCaptions:(BOOL)arg0 ;
-(void)onStartWithCompletionHandler:(id)arg0 ;
-(void)onStopWithCompletionHandler:(id)arg0 ;
-(void)registerCaptionsEventDelegate:(id)arg0 ;
-(void)setCaptionsLocale:(id)arg0 ;


@end


#endif