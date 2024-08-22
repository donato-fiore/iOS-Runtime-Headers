// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DACALDAVICALITEM_H
#define DACALDAVICALITEM_H

@class NSString, NSMutableDictionary, NSArray, NSNumber, CalDAVUpdateOwnerItem, NSData, NSURL, ICSDocument, CalDAVCalendarServerScheduleChangesItem;
@protocol CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol;

#import <Foundation/Foundation.h>


@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol>

 {
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
}


@property (readonly, nonatomic) *void calItem; // ivar: _calItem
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSNumber *clientID; // ivar: _clientID
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // ivar: _createdBy
@property (retain, nonatomic) NSData *dataPayload; // ivar: _dataPayload
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) ICSDocument *document; // ivar: _document
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL invitationStatusCleared;
@property (nonatomic) BOOL isMigrate; // ivar: _isMigrate
@property (copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property (nonatomic) BOOL prohibitLocalCreationOfServerID; // ivar: _prohibitLocalCreationOfServerID
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // ivar: _scheduleChanges
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) NSURL *serverID; // ivar: _serverID
@property (retain, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL statusChanged; // ivar: _statusChanged
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *syncKey; // ivar: _syncKey
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // ivar: _updatedBy


+(BOOL)_checkOccurrencesForEvent:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 ;
+(BOOL)_shouldApplyEvent:(id)arg0 instanceWithStartDate:(id)arg1 startRange:(id)arg2 endRange:(id)arg3 ;
+(BOOL)_shouldApplyEventFromSyncReport:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_addOrModifyEvent:(id)arg0 inICSCalendar:(id)arg1 withContainer:(*void)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 inMobileCalendar:(id)arg5 ;
-(BOOL)_addOrModifyTask:(id)arg0 inICSCalendar:(id)arg1 withContainer:(*void)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 inMobileCalendar:(id)arg5 ;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 calendar:(id)arg5 ;
-(id)_getDetachedEventUniqueIdentifiersForCalEvent:(*void)arg0 ;
-(id)initWithCalRecord:(*void)arg0 inContainer:(id)arg1 ;
-(id)initWithURL:(id)arg0 eTag:(id)arg1 dataPayload:(id)arg2 inContainerWithURL:(id)arg3 withAccountInfoProvider:(id)arg4 ;
-(void)_fixUpCalendarForServer:(id)arg0 ;
-(void)_removeCalEvent:(*void)arg0 fromUniqueIdentifiersSet:(id)arg1 ;
-(void)_removeDetachedEventsWithUniqueIdentifiers:(id)arg0 fromEvent:(*void)arg1 withContainer:(*void)arg2 ;
-(void)_setModificationInfoOnItem:(*void)arg0 ;
-(void)addChangeOfType:(id)arg0 forChangeRowid:(int)arg1 ;
-(void)dealloc;
-(void)setLocalItem:(*void)arg0 ;


@end


#endif