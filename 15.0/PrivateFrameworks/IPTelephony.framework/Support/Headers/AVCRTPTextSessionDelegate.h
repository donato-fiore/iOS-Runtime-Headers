// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCRTPTEXTSESSIONDELEGATE_H
#define AVCRTPTEXTSESSIONDELEGATE_H

@class NSString;
@protocol AVCTextStreamDelegate;

#import <Foundation/Foundation.h>


@interface AVCRTPTextSessionDelegate : NSObject <AVCTextStreamDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) weak_ptr<AVCRTPRTTSession> owner; // ivar: owner
@property (nonatomic) shared_ptr<AVCRTPStackController> stackController; // ivar: stackController
@property (readonly) Class superclass;


-(?)initWithOwnerandStackController;
-(void)stream:(id)arg0 didPause:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didReceiveRTCPPackets:(id)arg1 ;
-(void)stream:(id)arg0 didResume:(BOOL)arg1 error:(id)arg2 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif