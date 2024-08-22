// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLLASTACCOUNTMANAGER_H
#define SLLASTACCOUNTMANAGER_H


#import <Foundation/Foundation.h>


@interface SLLastAccountManager : NSObject



+(id)_lastAccountOfTypeIdentifier:(id)arg0 inStore:(id)arg1 updatePrefs:(BOOL)arg2 prefKey:(id)arg3 prefAppID:(id)arg4 ;
+(id)lastTwitterAccountInAccountStore:(id)arg0 updatePrefs:(BOOL)arg1 ;
+(void)_setLastAccount:(id)arg0 prefKey:(id)arg1 prefAppID:(id)arg2 ;
+(void)setLastTwitterAccount:(id)arg0 ;


@end


#endif