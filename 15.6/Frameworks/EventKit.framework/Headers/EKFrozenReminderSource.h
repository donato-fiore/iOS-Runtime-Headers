// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKFROZENREMINDERSOURCE_H
#define EKFROZENREMINDERSOURCE_H

@class REMAccount, NSString;


#import "EKFrozenReminderObject.h"

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) REMAccount *remAccount;
@property (readonly, nonatomic) NSString *sourceIdentifier;


+(Class)meltedClass;
-(BOOL)disabled;
-(NSInteger)sourceType;
-(NSUInteger)lastSyncError;
-(id)UUID;
-(id)constraintsName;
-(id)defaultAlarmOffset;
-(id)delegatedAccountOwnerStoreID;
-(id)externalID;
-(id)lastSyncEndDate;
-(id)lastSyncStartDate;
-(id)meltedObjectInStore:(id)arg0 ;
-(id)title;
-(int)flags;
-(void)setLastSyncEndDate:(id)arg0 ;
-(void)setLastSyncError:(NSUInteger)arg0 ;
-(void)setLastSyncStartDate:(id)arg0 ;


@end


#endif