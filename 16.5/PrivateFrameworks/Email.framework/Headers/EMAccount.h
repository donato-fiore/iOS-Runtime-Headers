// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMACCOUNT_H
#define EMACCOUNT_H

@class NSString;


#import "EMObject.h"

@interface EMAccount : EMObject

@property (readonly, copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // ivar: _primaryiCloudAccount
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)predicateForDeliveryAccounts;
+(id)predicateForReceivingAccounts;
+(id)sortDescriptorForNameAscending:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)ef_publicDescription;


@end


#endif