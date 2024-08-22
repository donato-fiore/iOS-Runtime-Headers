// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFOCUSSTATUSAUTHORIZATIONMANAGER_H
#define CKFOCUSSTATUSAUTHORIZATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface CKFocusStatusAuthorizationManager : NSObject

@property (nonatomic, getter=isPresentingFocusStatusAuthorizationPrompt) BOOL presentingFocusStatusAuthorizationPrompt; // ivar: _presentingFocusStatusAuthorizationPrompt
@property (nonatomic, getter=isPresentingInconsistentFocusStatusAuthorizationPrompt) BOOL presentingInconsistentFocusStatusAuthorizationPrompt; // ivar: _presentingInconsistentFocusStatusAuthorizationPrompt


+(id)sharedInstance;
-(BOOL)deviceSupportsFocusStatusAuthorizationPrompt;
-(id)focusStatusPreferencesURL;
-(id)newDNDGlobalConfigurationService;
-(void)displayFocusStatusAuthorizationInconsistencyRepairAlertFromViewController:(id)arg0 ;
-(void)displayFocusStatusAuthorizationInconsistencyRepairAlertIfNotPreviouslyShownFromViewController:(id)arg0 ;
-(void)notifyDNDFocusStatusAuthorizationChanged;
-(void)presentFocusStatusAuthorizationAlertIfNecessaryFromViewController:(id)arg0 ;
-(void)promptForFocusStatusAuthorizationFromViewController:(id)arg0 ;
-(void)verifyPublishedStatusIsConsistentWithDeniedFocusStatusAuthorizationFromViewController:(id)arg0 ;


@end


#endif