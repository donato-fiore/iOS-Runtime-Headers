// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESDCKSESSION_H
#define SESDCKSESSION_H

@class NSString;
@protocol SESDCKSessionCallbackInterface, SESDCKSessionDelegate, SESDCKSessionPassthroughDelegate;


#import "SESSession.h"

@interface SESDCKSession : SESSession <SESDCKSessionCallbackInterface>



@property (readonly, nonatomic) NSString *activeKeyIdentifier; // ivar: _activeKeyIdentifier
@property (readonly, nonatomic) NSString *aid; // ivar: _aid
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SESDCKSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SESDCKSessionPassthroughDelegate> *passthroughDelegate; // ivar: _passthroughDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSecureRanging; // ivar: _supportsSecureRanging


+(id)getVehicleReports:(*id)arg0 ;
+(id)newInstance;
+(id)pauseRangingForReaderIdentifier:(id)arg0 durationInSec:(id)arg1 ;
+(id)requestAssertionForKeyID:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
+(id)resumeRangingForReaderIdentifier:(id)arg0 ;
-(BOOL)getSignedMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(BOOL)sendPassthroughMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendPassthroughMessage:(id)arg0 reply:(id)arg1 ;
-(BOOL)sendSignedPassthroughMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(id)cancelRKEAction:(NSUInteger)arg0 ;
-(id)cancelRKEFunction:(id)arg0 ;
-(id)disableBluetooth:(BOOL)arg0 ;
-(id)getRKEActionsInProgress;
-(id)sendRKEAction:(NSUInteger)arg0 authorization:(id)arg1 ;
-(id)sendRKEFunction:(id)arg0 action:(id)arg1 authorization:(id)arg2 ;
-(id)setActiveKey:(id)arg0 ;
-(id)setAuthorization:(id)arg0 ;
-(id)setSecureElementToken:(id)arg0 ;
-(id)vehicleState;
-(void)didEndUnexpectedly:(id)arg0 ;
-(void)didReceivePassthroughMessage:(id)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)endSession;
-(void)sendEvent:(id)arg0 ;
-(void)sendRKEFunction:(id)arg0 action:(id)arg1 authorization:(id)arg2 completion:(id)arg3 ;


@end


#endif