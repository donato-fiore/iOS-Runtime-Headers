// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMACCOUNTCAPABILITIES_H
#define REMACCOUNTCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface REMAccountCapabilities : NSObject

@property (readonly, nonatomic) NSInteger defaultReminderPriorityLevel; // ivar: _defaultReminderPriorityLevel
@property (readonly, nonatomic) BOOL insertsCompletedRecurrentCloneAtTail; // ivar: _insertsCompletedRecurrentCloneAtTail
@property (readonly, nonatomic) BOOL supportsAssignments; // ivar: _supportsAssignments
@property (readonly, nonatomic) BOOL supportsAttachments; // ivar: _supportsAttachments
@property (readonly, nonatomic) BOOL supportsCRDTs; // ivar: _supportsCRDTs
@property (readonly, nonatomic) BOOL supportsCalDAVNotifications; // ivar: _supportsCalDAVNotifications
@property (readonly, nonatomic) BOOL supportsCloudKitSync; // ivar: _supportsCloudKitSync
@property (readonly, nonatomic) BOOL supportsCustomSmartLists; // ivar: _supportsCustomSmartLists
@property (readonly, nonatomic) BOOL supportsEventKitSync; // ivar: _supportsEventKitSync
@property (readonly, nonatomic) BOOL supportsFlagged; // ivar: _supportsFlagged
@property (readonly, nonatomic) BOOL supportsGroups; // ivar: _supportsGroups
@property (readonly, nonatomic) BOOL supportsHandoff; // ivar: _supportsHandoff
@property (readonly, nonatomic) BOOL supportsHashtags; // ivar: _supportsHashtags
@property (readonly, nonatomic) BOOL supportsHourlyRecurrence; // ivar: _supportsHourlyRecurrence
@property (readonly, nonatomic) BOOL supportsListAppearance; // ivar: _supportsListAppearance
@property (readonly, nonatomic) BOOL supportsListSharees; // ivar: _supportsListSharees
@property (readonly, nonatomic) BOOL supportsListShareesMutation; // ivar: _supportsListShareesMutation
@property (readonly, nonatomic) BOOL supportsLocation; // ivar: _supportsLocation
@property (readonly, nonatomic) BOOL supportsMoveAcrossLists; // ivar: _supportsMoveAcrossLists
@property (readonly, nonatomic) BOOL supportsMoveAcrossSharedLists; // ivar: _supportsMoveAcrossSharedLists
@property (readonly, nonatomic) BOOL supportsMultipleDateAlarmsOnRecurrence; // ivar: _supportsMultipleDateAlarmsOnRecurrence
@property (readonly, nonatomic) BOOL supportsPersonTrigger; // ivar: _supportsPersonTrigger
@property (readonly, nonatomic) BOOL supportsReminderActions; // ivar: _supportsReminderActions
@property (readonly, nonatomic) BOOL supportsSubtasks; // ivar: _supportsSubtasks


-(id)initWithAccountType:(NSInteger)arg0 ;


@end


#endif