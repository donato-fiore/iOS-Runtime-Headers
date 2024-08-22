// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENSSKEYCHAIN_H
#define ENSSKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface ENSSKeychain : NSObject



+(*void)accessibilityType;
+(BOOL)deletePasswordForService:(id)arg0 account:(id)arg1 ;
+(BOOL)deletePasswordForService:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
+(BOOL)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2 ;
+(BOOL)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2 error:(*id)arg3 ;
+(id)accountsForService:(id)arg0 ;
+(id)allAccounts;
+(id)passwordForService:(id)arg0 account:(id)arg1 ;
+(id)passwordForService:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
+(void)setAccessibilityType:(*void)arg0 ;


@end


#endif