// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERSDATAVIEWINVOCATION_FETCHBYPARENTREMINDERID_H
#define REMREMINDERSDATAVIEWINVOCATION_FETCHBYPARENTREMINDERID_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) BOOL includeUnsupported; // ivar: _includeUnsupported
@property (readonly, nonatomic) REMObjectID *parentReminderID; // ivar: _parentReminderID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentReminderID:(id)arg0 includeUnsupported:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif