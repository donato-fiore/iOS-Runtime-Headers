// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKAUTHENTICATERESPONSE_H
#define GKAUTHENTICATERESPONSE_H

@class NSString, NSURL;


#import "GKInternalRepresentation.h"
#import "GKPlayerCredential.h"

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (nonatomic) BOOL accessPointIsOnAutomatically; // ivar: _accessPointIsOnAutomatically
@property (nonatomic) NSInteger accessPointLocation; // ivar: _accessPointLocation
@property (nonatomic) BOOL accessPointShowHighlights; // ivar: _accessPointShowHighlights
@property (retain, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (retain, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (retain, nonatomic) GKPlayerCredential *credential; // ivar: _credential
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // ivar: _lastPersonalizationVersionDisplayed
@property (nonatomic) NSUInteger lastPrivacyNoticeVersionDisplayed; // ivar: _lastPrivacyNoticeVersionDisplayed
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed; // ivar: _lastProfilePrivacyVersionDisplayed
@property (nonatomic) BOOL loginDisabled; // ivar: _loginDisabled
@property (nonatomic) BOOL passwordChangeRequired; // ivar: _passwordChangeRequired
@property (retain, nonatomic) NSURL *passwordChangeURL; // ivar: _passwordChangeURL
@property (nonatomic) BOOL shouldShowLinkAccountsUI; // ivar: _shouldShowLinkAccountsUI
@property (nonatomic) BOOL useNewDashboardUI; // ivar: _useNewDashboardUI


+(id)secureCodedPropertyKeys;
-(id)init;


@end


#endif