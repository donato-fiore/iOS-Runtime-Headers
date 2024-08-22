// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI29UDCRECORDSTABLEVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI29UDCRECORDSTABLEVIEWCONTROLLER_H



#import "WDMedicalRecordTimelineViewController.h"

@interface _TtC15HealthRecordsUI29UDCRecordsTableViewController : WDMedicalRecordTimelineViewController {
    ? preferredSegment;
    ? additionalPredicate;
    ? $__lazy_storage_$_modePicker;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 account:(id)arg2 showInitialSearchBar:(BOOL)arg3 enableReconnect:(BOOL)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 accountId:(id)arg2 showInitialSearchBar:(BOOL)arg3 enableReconnect:(BOOL)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 category:(id)arg2 showInitialSearchBar:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 category:(id)arg2 showInitialSearchBar:(BOOL)arg3 predicatePerSampleType:(id)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 concept:(id)arg2 category:(id)arg3 highlightedRecordId:(id)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 conceptIdentifier:(id)arg2 category:(id)arg3 highlightedRecordId:(id)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 preloadedRecords:(id)arg2 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 showInitialSearchBar:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 userDomainConcept:(id)arg2 category:(id)arg3 highlightedRecordId:(id)arg4 ;
-(void)modePickerDidChange:(id)arg0 ;


@end


#endif