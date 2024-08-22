// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMACCOUNTSDATAVIEWINVOCATION_FETCHPRIMARYACTIVECLOUDKITACCOUNT_H
#define REMACCOUNTSDATAVIEWINVOCATION_FETCHPRIMARYACTIVECLOUDKITACCOUNT_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) BOOL fetchREMObjectIDOnly; // ivar: _fetchREMObjectIDOnly


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFetchREMObjectIDOnly:(BOOL)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif