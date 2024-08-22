// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPREFERENCESMANAGER_H
#define PKPASSPREFERENCESMANAGER_H


#import <Foundation/Foundation.h>


@interface PKPassPreferencesManager : NSObject



+(id)sharedInstance;
-(BOOL)hasDoneExpressUpgrade;
-(CGFloat)_doubleForKey:(id)arg0 passUniqueID:(id)arg1 ;
-(CGFloat)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg0 ;
-(id)_decimalNumberForKey:(id)arg0 passUniqueID:(id)arg1 ;
-(id)_stringForKey:(id)arg0 passUniqueID:(id)arg1 ;
-(id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg0 ;
-(struct __CFString *)_cfPreferencesKeyForConstant:(id)arg0 passUniqueID:(id)arg1 ;
-(void)_removeValueForKey:(id)arg0 passUniqueID:(id)arg1 ;
-(void)_setDecimalNumber:(id)arg0 forKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setDouble:(CGFloat)arg0 forKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setString:(id)arg0 forKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_synchronize;
-(void)removeAllPreferences;
-(void)removeAllPreferencesForPassWithUniqueID:(id)arg0 ;
-(void)setHasDoneExpressUpgrade:(BOOL)arg0 ;


@end


#endif