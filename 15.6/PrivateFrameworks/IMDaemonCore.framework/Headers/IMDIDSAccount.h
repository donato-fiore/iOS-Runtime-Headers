// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDIDSACCOUNT_H
#define IMDIDSACCOUNT_H

@class IDSAccount;


#import "IMDAccount.h"

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount; // ivar: _idsAccount


-(BOOL)canMakeDowngradeRoutingChecks;
-(BOOL)multiplePhoneNumbersTiedToAccount;
-(id)accountDefaults;
-(id)description;
-(id)initWithAccountID:(id)arg0 defaults:(id)arg1 service:(id)arg2 idsAccount:(id)arg3 ;
-(void)dealloc;
-(void)writeAccountDefaults:(id)arg0 ;


@end


#endif