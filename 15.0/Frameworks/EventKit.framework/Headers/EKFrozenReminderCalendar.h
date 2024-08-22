// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKFROZENREMINDERCALENDAR_H
#define EKFROZENREMINDERCALENDAR_H

@class REMListChangeItem;


#import "EKFrozenReminderObject.h"

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}




+(Class)meltedClass;
-(BOOL)_applyChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)isColorDisplayOnly;
-(BOOL)isPublished;
-(NSUInteger)ekSharingStatusFromREMSharingStatus:(NSInteger)arg0 ;
-(NSUInteger)sharingStatus;
-(id)REMColorFromEKHexColorString:(id)arg0 ;
-(id)UUID;
-(id)_account;
-(id)_list;
-(id)allAlarms;
-(id)calendarIdentifier;
-(id)colorStringRaw;
-(id)externalID;
-(id)frozenReminderSource;
-(id)hexColorStringFromREMColor:(id)arg0 ;
-(id)initNewListInStore:(id)arg0 ;
-(id)publishURL;
-(id)remObjectID;
-(id)sharedOwnerName;
-(id)sharees;
-(id)source;
-(id)symbolicColorName;
-(id)title;
-(id)uniqueIdentifier;
-(id)unlocalizedTitle;
-(id)updateListWithSaveRequest:(id)arg0 error:(*id)arg1 ;
-(int)allowedEntities;
-(int)displayOrder;
-(int)flags;


@end


#endif