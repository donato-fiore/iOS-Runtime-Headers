// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICEOPERATIONCDPSETUP_H
#define SFDEVICEOPERATIONCDPSETUP_H

@class CDPContext, CDPStateController, NSString;
@protocol CDPUIDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate>

 {
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    BOOL _invalidateCalled;
    NSUInteger _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat metricSeconds; // ivar: _metricSeconds
@property (retain, nonatomic) id *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession
@property (nonatomic) BOOL skipEscrowFetches; // ivar: _skipEscrowFetches
@property (nonatomic) BOOL skipSetupRequest; // ivar: _skipSetupRequest
@property (readonly) Class superclass;


-(id)init;
-(int)_runCDPApprovalServerStart;
-(int)_runCDPSetupRequest;
-(void)_activate;
-(void)_complete:(id)arg0 ;
-(void)_run;
-(void)activate;
-(void)invalidate;
-(void)uiController:(id)arg0 didPresentRootViewController:(id)arg1 ;


@end


#endif