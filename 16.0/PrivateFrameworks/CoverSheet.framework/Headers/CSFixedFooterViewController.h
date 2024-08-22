// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFIXEDFOOTERVIEWCONTROLLER_H
#define CSFIXEDFOOTERVIEWCONTROLLER_H

@class NSString;
@protocol CSStatusTextViewControllerDelegate, SBFAuthenticationStatusProvider;


#import "CSCoverSheetViewControllerBase.h"
#import "CSStatusTextViewController.h"
#import "CSFixedFooterView.h"

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate>

 {
    CSStatusTextViewController *_statusTextViewController;
    NSString *_cachedMesaFailureText;
    BOOL _temporaryMesaFailureTextActive;
    BOOL _authenticatedSinceFingerOn;
}


@property (retain, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CSFixedFooterView *fixedFooterView;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)handleEvent:(id)arg0 ;
-(id)init;
-(void)_addStatusTextViewControllerIfNecessary;
-(void)_updateCallToActionTextAnimated:(BOOL)arg0 ;
-(void)coverSheetStatusTextViewControllerContentDidChange:(id)arg0 ;
-(void)updateCallToActionForMesaMatchFailure;
-(void)updateCallToActionForReversingInteractiveTransition;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif