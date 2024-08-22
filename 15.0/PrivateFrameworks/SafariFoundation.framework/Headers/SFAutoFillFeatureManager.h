// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTOFILLFEATUREMANAGER_H
#define SFAUTOFILLFEATUREMANAGER_H

@class NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver>

 {
    int _cachedAutoFillRestrictionValue;
    int _cachedPasswordAutoFillEffectiveValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;
@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (readonly) Class superclass;


+(BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+(id)_syncManager;
+(id)sharedFeatureManager;
+(struct __CFString *)autoFillPreferencesDomain;
+(void)autoFillPreferencesDidChange;
-(BOOL)shouldAutoFillPasswords;
-(id)init;
-(void)_refreshCachedAutoFillRestrictionValues;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif