// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCTEXTSTREAM_H
#define VCTEXTSTREAM_H

@class NSString;
@protocol VCTextSender, VCTextReceiverDelegate;


#import "VCMediaStream.h"
#import "VCTextReceiver.h"
#import "VCTextTransmitter.h"

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate>

 {
    VCTextReceiver *_textReceiver;
    VCTextTransmitter *_textTransmitter;
    id<VCTextReceiverDelegate> *_receiveDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastReceivedRTCPPacketTime;
@property (readonly, nonatomic) CGFloat lastReceivedRTPPacketTime;
@property (nonatomic) NSObject<VCTextReceiverDelegate> *receiveDelegate;
@property (readonly) Class superclass;


-(BOOL)onConfigureStreamWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupTextReceiverWithError:(*id)arg0 ;
-(CGFloat)rtcpHeartbeatLeeway;
-(id)init;
-(id)supportedPayloads;
-(void)dealloc;
-(void)didReceiveCharacter:(unsigned short)arg0 ;
-(void)didReceiveText:(id)arg0 ;
-(void)onCallIDChanged;
-(void)onPauseWithCompletionHandler:(id)arg0 ;
-(void)onRTCPTimeout;
-(void)onRTPTimeout;
-(void)onResumeWithCompletionHandler:(id)arg0 ;
-(void)onSendRTCPPacket;
-(void)onStartWithCompletionHandler:(id)arg0 ;
-(void)onStopWithCompletionHandler:(id)arg0 ;
-(void)sendCharacter:(unsigned short)arg0 ;
-(void)sendText:(id)arg0 ;
-(void)setupTextTransmitter;


@end


#endif