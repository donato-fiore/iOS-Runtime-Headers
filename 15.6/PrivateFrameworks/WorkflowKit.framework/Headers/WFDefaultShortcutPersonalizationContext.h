// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDEFAULTSHORTCUTPERSONALIZATIONCONTEXT_H
#define WFDEFAULTSHORTCUTPERSONALIZATIONCONTEXT_H

@class NSString, NSDictionary;
@protocol MTLJSONSerializing;


#import "MTLModel.h"

@interface WFDefaultShortcutPersonalizationContext : MTLModel <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mediaLibrarySongCount; // ivar: _mediaLibrarySongCount
@property (nonatomic) NSUInteger numberOfCalendarEventsCreatedInLast15Days; // ivar: _numberOfCalendarEventsCreatedInLast15Days
@property (nonatomic) NSUInteger numberOfCalendarEventsWithEmailableAttendeesWithin7Days; // ivar: _numberOfCalendarEventsWithEmailableAttendeesWithin7Days
@property (nonatomic) NSUInteger numberOfCalendarEventsWithPhysicalLocationsWithin7Days; // ivar: _numberOfCalendarEventsWithPhysicalLocationsWithin7Days
@property (nonatomic) NSUInteger numberOfNotesCreatedInLast7Days; // ivar: _numberOfNotesCreatedInLast7Days
@property (nonatomic) NSUInteger numberOfPhotosAirDroppedInLast15Days; // ivar: _numberOfPhotosAirDroppedInLast15Days
@property (nonatomic) NSUInteger numberOfPhotosEditedInLast15Days; // ivar: _numberOfPhotosEditedInLast15Days
@property (nonatomic) NSUInteger numberOfScreenshotsSavedInLast15Days; // ivar: _numberOfScreenshotsSavedInLast15Days
@property (readonly) Class superclass;
@property (nonatomic) BOOL userHasQRCodeScannerInControlCenter; // ivar: _userHasQRCodeScannerInControlCenter
@property (nonatomic) BOOL userHasShazamApp; // ivar: _userHasShazamApp
@property (nonatomic) BOOL userHasShortcutsInLibrary; // ivar: _userHasShortcutsInLibrary


+(id)JSONKeyPathsByPropertyKey;
+(void)getCurrentUserContextWithCompletionHandler:(id)arg0 ;


@end


#endif