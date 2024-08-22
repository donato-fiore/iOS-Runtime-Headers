// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIGITALCARKEYHANDLER_H
#define DIGITALCARKEYHANDLER_H

@class NFDigitalCarKeySession, NSString;
@protocol NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate;


#import "STSTransactionHandler.h"

@interface DigitalCarKeyHandler : STSTransactionHandler <NFDigitalCarKeySessionDelegate, NFDigitalCarKeySessionPassthroughDelegate>

 {
    NFDigitalCarKeySession *_nfSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)setActiveCredential:(id)arg0 ;
-(id)startNFSessionWithCompletion:(id)arg0 ;
-(id)startTransactionWithAuthorization:(id)arg0 options:(NSUInteger)arg1 ;
-(id)stopTransaction;
-(unsigned char)supportedCredentialType;
-(void)session:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)session:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)session:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)session:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)session:(id)arg0 didReceivePassthroughMessage:(id)arg1 ;
-(void)session:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)session:(id)arg0 event:(id)arg1 ;
-(void)sessionDidExitField:(id)arg0 ;
-(void)sessionDidFailDeferredAuthorization:(id)arg0 ;
-(void)sessionDidReceiveActivityTimeout:(id)arg0 result:(id)arg1 ;


@end


#endif