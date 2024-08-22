// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSDATAVIEWINVOCATIONRESULT_H
#define REMLISTSDATAVIEWINVOCATIONRESULT_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSArray *accountStorages; // ivar: _accountStorages
@property (readonly, nonatomic) NSArray *listStorages; // ivar: _listStorages
@property (readonly, nonatomic) NSArray *objectIDs; // ivar: _objectIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountStorages:(id)arg0 listStorages:(id)arg1 objectIDs:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif