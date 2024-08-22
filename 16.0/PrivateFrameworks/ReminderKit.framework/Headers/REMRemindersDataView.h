// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERSDATAVIEW_H
#define REMREMINDERSDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMRemindersDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(id)remindersFromAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 store:(id)arg3 ;
+(id)remindersFromAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 store:(id)arg3 requestedReminderIDs:(id)arg4 ;
+(id)remindersFromAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 store:(id)arg3 requestedStringIdentifiers:(id)arg4 identifierSelector:(SEL)arg5 ;
+(id)remindersFromAccountStorages:(id)arg0 listStorages:(id)arg1 reminderStorages:(id)arg2 store:(id)arg3 showMarkedForDeleteObjects:(BOOL)arg4 ;
-(id)fetchAllRemindersWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchObjectIDsOfRemindersWithParentReminderID:(id)arg0 includeIncomplete:(BOOL)arg1 includeCompleted:(BOOL)arg2 isUnsupported:(BOOL)arg3 error:(*id)arg4 ;
-(id)fetchReminderIncludingConcealedWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchReminderWithExternalIdentifier:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchReminderWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersCountWithListID:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersCountWithParentReminderID:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersMatchingPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg0 inList:(id)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithListID:(id)arg0 includingSubtasks:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersWithObjectIDs:(id)arg0 includeConcealed:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithParentReminderID:(id)arg0 includeUnsupported:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchRemindersWithParentReminderIDs:(id)arg0 error:(*id)arg1 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif