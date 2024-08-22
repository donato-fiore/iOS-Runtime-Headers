// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTACTIVATIONSERVICE_H
#define SVXCLIENTACTIVATIONSERVICE_H

@class AFAnalytics, NSMutableArray, NSUUID, NSString;
@protocol SVXClientActivationServicing, SVXClientServiceConsuming, SVXPerforming, SVXClientServiceProviding, SVXClientActivationServiceDelegate;

#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"

@interface SVXClientActivationService : NSObject <SVXClientActivationServicing, SVXClientServiceConsuming>

 {
    id<SVXPerforming> *_performer;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    AFAnalytics *_analytics;
    NSMutableArray *_queuedButtonEvents;
    SVXActivationContext *_lastButtonActivationContext;
    NSUUID *_preheatToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVXClientActivationServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_requestPermissionToActivateWithContext:(id)arg0 ;
-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(void)_activateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_enqueueButtonEvent:(id)arg0 ;
-(void)_performManualEndpointing;
-(void)_preheatTimerArrivedWithToken:(id)arg0 ;
-(void)_preheatWithActivationSource:(NSInteger)arg0 ;
-(void)_prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_processLastButtonActivationContext;
-(void)_startPreheatTimer;
-(void)_stopPreheatTimer;
-(void)_transitToAutomaticEndpointing;
-(void)activateWithButtonEvent:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)activateWithSystemEvent:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;
-(void)activateWithText:(id)arg0 completion:(id)arg1 ;
-(void)activateWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)deactivateWithButtonEvent:(id)arg0 userInfo:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)deactivateWithUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)deactivateWithUserInfo:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)enqueueButtonEvent:(id)arg0 ;
-(void)handleButtonEvent:(id)arg0 ;
-(void)handleDidActivateWithContext:(id)arg0 ;
-(void)handleDidDeactivateWithContext:(id)arg0 ;
-(void)handleDidNotActivateWithContext:(id)arg0 error:(id)arg1 ;
-(void)handleRequestPermissionToActivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)handleWillActivateWithContext:(id)arg0 ;
-(void)handleWillDeactivateWithContext:(id)arg0 ;
-(void)prewarmForSystemEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif