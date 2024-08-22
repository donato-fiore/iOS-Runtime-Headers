// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSTRANSACTIONLOGTASKHANDLERACCOUNTINFO_H
#define IDSTRANSACTIONLOGTASKHANDLERACCOUNTINFO_H

@class ENAccountIdentity, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject

@property (readonly, nonatomic) ENAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (readonly, nonatomic) NSDictionary *aliasToAccountsMap; // ivar: _aliasToAccountsMap
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


-(id)accountForAlias:(id)arg0 ;
-(id)initWithAccountIdentity:(id)arg0 aliasToAccountsMap:(id)arg1 serviceName:(id)arg2 ;


@end


#endif