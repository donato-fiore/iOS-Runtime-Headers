// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMREMINDERSDATAVIEWINVOCATIONRESULT_H
#define REMREMINDERSDATAVIEWINVOCATIONRESULT_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSArray *accountStorages; // ivar: _accountStorages
@property (readonly, nonatomic) NSArray *listStorages; // ivar: _listStorages
@property (readonly, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (readonly, nonatomic) NSArray *reminderStorages; // ivar: _reminderStorages


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 objectIDs:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif