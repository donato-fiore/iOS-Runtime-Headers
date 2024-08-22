// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICEOPERATIONCNJSETUP_H
#define SFDEVICEOPERATIONCNJSETUP_H

@class SKSetupCaptiveNetworkJoinClient, WSWebSheetViewController, UIViewController;
@protocol WSWebSheetViewDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationCNJSetup : NSObject <WSWebSheetViewDelegate>

 {
    SKSetupCaptiveNetworkJoinClient *_cnjClient;
    WSWebSheetViewController *_webSheetViewController;
    NSInteger _webSheetResult;
    BOOL _isShowingWebSheet;
    NSUInteger _startTicks;
    BOOL _invalidateCalled;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL isSetup; // ivar: _isSetup
@property (readonly, nonatomic) CGFloat metricTotalSeconds; // ivar: _metricTotalSeconds
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession


-(void)_complete:(id)arg0 ;
-(void)_handleCompletedEventWithError:(id)arg0 ;
-(void)_showCaptiveSheet:(id)arg0 ;
-(void)_startClient;
-(void)activate;
-(void)handleCompleteNotificationWithRedirectURLtype:(NSInteger)arg0 result:(NSInteger)arg1 ;
-(void)handleDismissal;
-(void)handleWebNavigationWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)scrapeCredentialsUsingPOSTMessage:(id)arg0 loginURL:(id)arg1 ;


@end


#endif