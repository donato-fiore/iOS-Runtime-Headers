// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SESDCKSESSION_H
#define SESDCKSESSION_H

@class NSString, NSDictionary;
@protocol SESSessionPrivate, SESDCKSessionCallbacks, SESSession, SESDCKSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SESDCKSession : NSObject <SESSessionPrivate, SESDCKSessionCallbacks, SESSession>



@property (readonly, nonatomic) NSString *activeKeyIdentifier; // ivar: _activeKeyIdentifier
@property (readonly, nonatomic) NSString *aid; // ivar: _aid
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SESDCKSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // ivar: _sessionQueue
@property (copy, nonatomic) id *startCallback; // ivar: _startCallback
@property (readonly) NSUInteger state; // ivar: state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSecureRanging; // ivar: _supportsSecureRanging
@property (readonly) NSDictionary *vehicleState;


+(id)getVehicleReports:(*id)arg0 ;
+(id)pauseRangingForReaderIdentifier:(id)arg0 durationInSec:(id)arg1 ;
+(id)resumeRangingForReaderIdentifier:(id)arg0 ;
-(BOOL)getSignedMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(BOOL)sendPassthroughMessage:(id)arg0 reply:(id)arg1 ;
-(BOOL)sendSignedPassthroughMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(id)cancelRKEAction:(NSUInteger)arg0 ;
-(id)cancelRKEFunction:(id)arg0 ;
-(id)disableBluetooth:(BOOL)arg0 ;
-(id)endRemoteSession;
-(id)getRKEActionsInProgress;
-(id)init;
-(id)sendRKEAction:(NSUInteger)arg0 authorization:(id)arg1 ;
-(id)sendRKEFunction:(id)arg0 action:(id)arg1 authorization:(id)arg2 ;
-(id)setActiveKey:(id)arg0 ;
-(id)setAuthorization:(id)arg0 ;
-(id)setSecureElementToken:(id)arg0 ;
-(void)dealloc;
-(void)didEndWithError:(id)arg0 ;
-(void)endSession;
-(void)sendEvent:(id)arg0 ;
-(void)startSession;


@end


#endif