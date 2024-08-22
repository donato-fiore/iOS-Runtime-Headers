// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERSDATAVIEWINVOCATION_FETCHBYPREDICATEDESCRIPTOR_H
#define REMREMINDERSDATAVIEWINVOCATION_FETCHBYPREDICATEDESCRIPTOR_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMReminderFetchOptions.h"
#import "REMReminderPredicateDescriptor.h"

@interface REMRemindersDataViewInvocation_fetchByPredicateDescriptor : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMReminderFetchOptions *options; // ivar: _options
@property (readonly, nonatomic) REMReminderPredicateDescriptor *predicateDescriptor; // ivar: _predicateDescriptor
@property (readonly, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif