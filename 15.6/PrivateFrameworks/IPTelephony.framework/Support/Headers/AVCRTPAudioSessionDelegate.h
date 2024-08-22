// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRTPAUDIOSESSIONDELEGATE_H
#define AVCRTPAUDIOSESSIONDELEGATE_H

@class NSString;
@protocol AVCAudioStreamDelegate;

#import <Foundation/Foundation.h>


@interface AVCRTPAudioSessionDelegate : NSObject <AVCAudioStreamDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) weak_ptr<AVCRTPAudioSession> owner; // ivar: owner
@property (nonatomic) shared_ptr<AVCRTPStackController> stackController; // ivar: stackController
@property (readonly) Class superclass;


-(?)initWithOwnerandStackController;
-(void)handleRTCPPacketWithBlock:(id)arg0 ;
-(void)stream:(id)arg0 didPause:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didReceiveDTMFEventWithDigit:(char)arg1 ;
-(void)stream:(id)arg0 didReceiveRTCPPackets:(id)arg1 ;
-(void)stream:(id)arg0 didResume:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 updateInputFrequencyLevel:(id)arg1 ;
-(void)stream:(id)arg0 updateOutputFrequencyLevel:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif