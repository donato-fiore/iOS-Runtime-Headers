// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREMINDERSDATAVIEWINVOCATION_FETCHREMINDERIDSBYPARENTREMINDERID_H
#define REMREMINDERSDATAVIEWINVOCATION_FETCHREMINDERIDSBYPARENTREMINDERID_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMRemindersDataViewInvocation_fetchReminderIDsByParentReminderID : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) BOOL includeCompleted; // ivar: _includeCompleted
@property (readonly, nonatomic) BOOL includeIncomplete; // ivar: _includeIncomplete
@property (readonly, nonatomic) BOOL isUnsupported; // ivar: _isUnsupported
@property (readonly, nonatomic) REMObjectID *parentReminderID; // ivar: _parentReminderID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentReminderID:(id)arg0 includeIncomplete:(BOOL)arg1 includeCompleted:(BOOL)arg2 isUnsupported:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif