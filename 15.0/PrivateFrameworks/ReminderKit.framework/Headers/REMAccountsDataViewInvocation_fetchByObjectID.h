// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMACCOUNTSDATAVIEWINVOCATION_FETCHBYOBJECTID_H
#define REMACCOUNTSDATAVIEWINVOCATION_FETCHBYOBJECTID_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMAccountsDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSArray *objectIDs; // ivar: _objectIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif