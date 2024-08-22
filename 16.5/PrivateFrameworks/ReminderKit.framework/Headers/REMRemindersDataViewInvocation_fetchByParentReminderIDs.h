// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERSDATAVIEWINVOCATION_FETCHBYPARENTREMINDERIDS_H
#define REMREMINDERSDATAVIEWINVOCATION_FETCHBYPARENTREMINDERIDS_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMRemindersDataViewInvocation_fetchByParentReminderIDs : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSArray *parentReminderIDs; // ivar: _parentReminderIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentReminderIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif