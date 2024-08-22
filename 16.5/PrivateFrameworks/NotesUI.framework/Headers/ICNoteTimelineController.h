// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTETIMELINECONTROLLER_H
#define ICNOTETIMELINECONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICNoteTimelineController : NSObject



+(id)adjustedDateForReferenceDate:(id)arg0 ;
+(id)invitationsTimelineSectionIdentifierWithTitle:(id)arg0 referenceDate:(id)arg1 ;
+(id)pinnedTimelineSectionIdentifierWithTitle:(id)arg0 referenceDate:(id)arg1 ;
+(id)sanitizedDatesForDates:(id)arg0 referenceDate:(id)arg1 ;
+(id)timelineSectionIdentifierForNoteObjectID:(id)arg0 date:(id)arg1 referenceDate:(id)arg2 ;
+(id)timelineSectionIdentifierForNoteObjectID:(id)arg0 date:(id)arg1 sectionIdentifiersToManagedObjectIDs:(id)arg2 ;
+(id)timelineSectionsForNoteObjectIDs:(id)arg0 dates:(id)arg1 referenceDate:(id)arg2 direction:(NSInteger)arg3 ;
+(void)setTimeZone:(id)arg0 ;


@end


#endif