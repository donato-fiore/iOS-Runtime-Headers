// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFACCOUNTPICKERCONFIGURATION_H
#define SFACCOUNTPICKERCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SFAccountPickerConfiguration : NSObject

@property (copy, nonatomic) NSString *addPasswordSuggestedDomain; // ivar: _addPasswordSuggestedDomain
@property (copy, nonatomic) NSArray *domainHintStrings; // ivar: _domainHintStrings
@property (nonatomic) BOOL forUserNamesOnly; // ivar: _forUserNamesOnly
@property (nonatomic) NSUInteger minimumNumberOfCredentialsToShowLikelyMatchesSection; // ivar: _minimumNumberOfCredentialsToShowLikelyMatchesSection
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (copy, nonatomic) NSArray *serviceNameHintStrings; // ivar: _serviceNameHintStrings
@property (readonly, nonatomic) BOOL shouldAllowAddingNewPasswords;
@property (nonatomic) BOOL shouldEnableAddingNewPasswordsIfPossible; // ivar: _shouldEnableAddingNewPasswordsIfPossible
@property (nonatomic) BOOL shouldShowIcons; // ivar: _shouldShowIcons


-(BOOL)_managedConfigurationProfileAllowsAdd;


@end


#endif