// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCCLICLIENT_H
#define PCCLICLIENT_H

@class NSXPCConnection;
@protocol PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface, PCCLIClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCCLIClient : NSObject <PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface>

 {
    NSXPCConnection *_wakingXPCCnx;
    NSXPCConnection *_xpcCnx;
}


@property (weak, nonatomic) NSObject<PCCLIClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(void)_activateWithCompletion:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_wakingXPCEnsureStarted;
-(void)_xpcEnsureStarted;
-(void)activateWithCompletion:(id)arg0 ;
-(void)didProvideState:(id)arg0 ;
-(void)dismissBannerWithCompletion:(id)arg0 ;
-(void)handleState:(id)arg0 ;
-(void)invalidate;
-(void)presentBannerWithCompletion:(id)arg0 ;
-(void)requestState;
-(void)setBannerScaleProgress:(float)arg0 completion:(id)arg1 ;
-(void)stateWithCompletion:(id)arg0 ;
-(void)tapBannerWithCompletion:(id)arg0 ;
-(void)triggerHandoffFeedbackAlertWithCompletion:(id)arg0 ;
-(void)updateLockscreenMediaThresholdWithCompletion:(id)arg0 ;


@end


#endif