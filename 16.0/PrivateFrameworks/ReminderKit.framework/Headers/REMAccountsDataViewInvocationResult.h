// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMACCOUNTSDATAVIEWINVOCATIONRESULT_H
#define REMACCOUNTSDATAVIEWINVOCATIONRESULT_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMAccountsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSArray *accountStorages; // ivar: _accountStorages


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStorages:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif