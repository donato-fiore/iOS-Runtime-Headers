// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRCLIENTCONNECTION_H
#define TRCLIENTCONNECTION_H

@class SFSession;


#import "TRConnection.h"

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session; // ivar: _session


-(id)eventMessageHandler:(SEL)arg0 ;
-(id)interruptionHandler:(SEL)arg0 ;
-(id)invalidationHandler:(SEL)arg0 ;
-(id)requestMessageHandler:(SEL)arg0 ;
-(void)connectToNearbyDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidate;
-(void)sendEvent:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;
-(void)setEventMessageHandler:(id)arg0 ;
-(void)setInterruptionHandler:(id)arg0 ;
-(void)setInvalidationHandler:(id)arg0 ;
-(void)setRequestMessageHandler:(id)arg0 ;


@end


#endif