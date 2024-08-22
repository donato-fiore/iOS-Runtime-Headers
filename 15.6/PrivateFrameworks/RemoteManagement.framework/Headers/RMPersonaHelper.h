// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPERSONAHELPER_H
#define RMPERSONAHELPER_H


#import <Foundation/Foundation.h>


@interface RMPersonaHelper : NSObject



+(BOOL)removePersonaWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)appStoreAccountIdentifierForPersonaWithIdentifier:(id)arg0 ;
+(id)createEnterprisePersonaWithPasscodeData:(id)arg0 error:(*id)arg1 ;
+(id)currentPersonaIdentifier;
+(id)enterprisePersonaDisplayName;
+(id)enterprisePersonaIdentifier;
+(id)performBlockUnderPersonaWithIdentifier:(id)arg0 block:(id)arg1 ;
+(void)associateBundleIdentifier:(id)arg0 withPersonaWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)createEnterprisePersonaWithPasscodeData:(id)arg0 completionHandler:(id)arg1 ;
+(void)dissociateBundleIdentifier:(id)arg0 fromPersonaWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)removeEnterprisePersonaWithCompletionHandler:(id)arg0 ;
+(void)removePersonaWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif