// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTPICKERCONFIGURATION_H
#define SFACCOUNTPICKERCONFIGURATION_H

@class NSString, WBSGlobalFrameIdentifier, NSArray;

#import <Foundation/Foundation.h>


@interface SFAccountPickerConfiguration : NSObject

@property (copy, nonatomic) NSString *addPasswordSuggestedDomain; // ivar: _addPasswordSuggestedDomain
@property (nonatomic) ? connectedAppAuditToken; // ivar: _connectedAppAuditToken
@property (copy, nonatomic) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys; // ivar: _currentWebFrameIdentifierForAutoFillPasskeys
@property (copy, nonatomic) NSArray *domainHintStrings; // ivar: _domainHintStrings
@property (nonatomic) BOOL forUserNamesOnly; // ivar: _forUserNamesOnly
@property (readonly, nonatomic) BOOL hasAuditToken; // ivar: _hasAuditToken
@property (nonatomic) NSUInteger minimumNumberOfCredentialsToShowLikelyMatchesSection; // ivar: _minimumNumberOfCredentialsToShowLikelyMatchesSection
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (copy, nonatomic) NSString *promptWhenPasskeysAreAvailable; // ivar: _promptWhenPasskeysAreAvailable
@property (copy, nonatomic) NSArray *serviceNameHintStrings; // ivar: _serviceNameHintStrings
@property (readonly, nonatomic) BOOL shouldAllowAddingNewPasswords;
@property (nonatomic) BOOL shouldEnableAddingNewPasswordsIfPossible; // ivar: _shouldEnableAddingNewPasswordsIfPossible
@property (nonatomic) BOOL shouldShowAutoFillPasskeys; // ivar: _shouldShowAutoFillPasskeys
@property (nonatomic) BOOL shouldShowIcons; // ivar: _shouldShowIcons




@end


#endif