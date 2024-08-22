// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPOWERCONTROLLER_H
#define MFPOWERCONTROLLER_H

@class NSCountedSet, NSString, EFObservable;
@protocol MFDiagnosticsGenerator, OS_dispatch_queue, EFCancelable;

#import <Foundation/Foundation.h>


@interface MFPowerController : NSObject <MFDiagnosticsGenerator>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerQueue;
    int _pluggedIn;
    int _powerToken;
    NSCountedSet *_identifiers;
    id<EFCancelable> *_appStateCancelable;
    BOOL _isForeground;
    *IONotificationPort _pmPort;
    unsigned int _pmNotifier;
}


@property (readonly, getter=isBatterySaverModeEnabled) BOOL batterySaverModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHoldingAssertion) BOOL holdingAssertion;
@property (readonly, nonatomic) EFObservable *lowPowerModeObservable;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly, nonatomic) EFObservable *pluggedInObservable;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)powerlog:(id)arg0 eventData:(id)arg1 ;
-(BOOL)_isHoldingTaskAssertion;
-(CGFloat)_assertionTimeout;
-(id)copyDiagnosticInformation;
-(id)init;
-(id)powerObservable;
-(void)_applicationForegroundStateChanged:(BOOL)arg0 ;
-(void)_applicationForegroundStateChanged_nts:(BOOL)arg0 ;
-(void)_lowPowerModeChangedNotification:(id)arg0 ;
-(void)_releasePowerAssertion_nts;
-(void)_releaseTaskAssertion_nts;
-(void)_retainPowerAssertion_nts;
-(void)_retainTaskAssertion_nts;
-(void)_setupAssertionTimer:(CGFloat)arg0 ;
-(void)dealloc;
-(void)releaseAssertionWithIdentifier:(id)arg0 ;
-(void)retainAssertionWithIdentifier:(id)arg0 ;
-(void)retainAssertionWithIdentifier:(id)arg0 withAccount:(id)arg1 ;
-(void)startListeningForBatterySaverNotifications;


@end


#endif