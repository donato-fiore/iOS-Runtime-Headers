// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACALDAVICALITEM_H
#define DACALDAVICALITEM_H

@class NSString, NSMutableDictionary, NSArray, CalDAVUpdateOwnerItem, NSData, NSURL, ICSDocument, REMObjectID, CalDAVCalendarServerScheduleChangesItem;
@protocol CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol, DACalDAViCalItemBackingModel;

#import <Foundation/Foundation.h>


@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol>

 {
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
}


@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // ivar: _createdBy
@property (retain, nonatomic) NSData *dataPayload; // ivar: _dataPayload
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugReminderFetchCount; // ivar: _debugReminderFetchCount
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) ICSDocument *document; // ivar: _document
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMigrate; // ivar: _isMigrate
@property (copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property (retain, nonatomic) REMObjectID *rem_clientID; // ivar: _rem_clientID
@property (readonly, nonatomic) NSObject<DACalDAViCalItemBackingModel> *rem_reminderItem; // ivar: _rem_reminderItem
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // ivar: _scheduleChanges
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) NSURL *serverID; // ivar: _serverID
@property (retain, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL statusChanged; // ivar: _statusChanged
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *syncKey; // ivar: _syncKey
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // ivar: _updatedBy


+(id)filenameWithUniqueIdentifier:(id)arg0 ;
+(id)rem_store;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
// -(BOOL)rem_setReminderPropertiesWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(id)_addOrModifyTask:(id)arg0 inICSCalendar:(id)arg1 withList:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 inMobileCalendar:(id)arg5 batchSaveRequest:(id)arg6 ;
-(id)initWithREMReminder:(id)arg0 inContainer:(id)arg1 ;
-(id)initWithURL:(id)arg0 eTag:(id)arg1 dataPayload:(id)arg2 inContainerWithURL:(id)arg3 withAccountInfoProvider:(id)arg4 ;
-(id)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 calendar:(id)arg5 batchSaveRequest:(id)arg6 ;
-(void)_fixUpCalendarForServer:(id)arg0 ;
-(void)addChangeOfType:(id)arg0 forChangeRowid:(int)arg1 ;
-(void)populateDataPayloadWithReminder:(id)arg0 ;
-(void)setRem_LocalItem:(id)arg0 ;


@end


#endif