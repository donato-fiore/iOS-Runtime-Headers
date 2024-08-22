// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCPERSONAHELPER_H
#define DMCPERSONAHELPER_H


#import <Foundation/Foundation.h>


@interface DMCPersonaHelper : NSObject



+(BOOL)isCurrentPersonaEnterprise;
+(BOOL)removePersona:(id)arg0 error:(*id)arg1 ;
+(id)createEnterprisePersonaWithDevicePasscode:(id)arg0 error:(*id)arg1 ;
+(id)currentPersonaID;
+(id)currentPersonaTypeString;
+(id)enterprisePersonaIdentifier;
+(id)performBlockUnderPersona:(id)arg0 block:(id)arg1 ;
+(id)performBlockUnderPersonalPersona:(id)arg0 ;
+(void)removePersonaAndAccountsWithPersonaID:(id)arg0 ;


@end


#endif