// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKPASTEBOARDUTILITIES_H
#define CUIKPASTEBOARDUTILITIES_H


#import <Foundation/Foundation.h>


@interface CUIKPasteboardUtilities : NSObject



+(BOOL)allEventsValidForAction:(NSUInteger)arg0 fromEvents:(id)arg1 ;
+(BOOL)declinesToPerformCutCopyPasteAction:(SEL)arg0 withSender:(id)arg1 ;
+(id)duplicateEventsByStrippingUnsupportedFields:(id)arg0 toNewCalendar:(id)arg1 ;
+(id)roundedDateForDate:(id)arg0 dateMode:(NSUInteger)arg1 calendar:(id)arg2 ;
+(void)adjustTimesForEventsToPaste:(id)arg0 pasteDate:(id)arg1 dateMode:(NSUInteger)arg2 calendar:(id)arg3 ;


@end


#endif