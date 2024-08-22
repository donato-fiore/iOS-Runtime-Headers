// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYACCOUNT_H
#define TRANSPARENCYACCOUNT_H


#import <Foundation/Foundation.h>


@interface TransparencyAccount : NSObject



+(BOOL)initiateCredentialRenewal:(*id)arg0 completionHandler:(id)arg1 ;
+(NSInteger)accountLevelErrorCodeForLevel:(id)arg0 ;
+(NSUInteger)accountLevel:(id)arg0 ;
+(id)authToken:(*id)arg0 ;
+(id)createAuthToken:(id)arg0 authToken:(id)arg1 ;
+(id)createAuthkitSession;
+(id)primaryAccount:(*id)arg0 ;
+(id)sharedAccountStore;


@end


#endif