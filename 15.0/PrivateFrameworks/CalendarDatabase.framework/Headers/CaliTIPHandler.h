// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALITIPHANDLER_H
#define CALITIPHANDLER_H


#import <Foundation/Foundation.h>


@interface CaliTIPHandler : NSObject



+(?)processMessage:(?)arg0 withDatabase:(?)arg1 calStore:(?)arg2 accountInfohandledEventCallback;
+(?)processMessages:(?)arg0 withDatabase:(?)arg1 calStore:(?)arg2 accountInfohandledEventCallback;
+(BOOL)diffsAreImportant:(id)arg0 ;
+(BOOL)doScheduleChanges:(id)arg0 applyToEvent:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)isAddressMe:(id)arg0 withAccountInfo:(id)arg1 ;
+(BOOL)myStatusNeedsActionForEvent:(id)arg0 withAccountInfo:(id)arg1 ;
+(id)_calculateDiffsForCalEvent:(*void)arg0 icsEvent:(id)arg1 inMessage:(id)arg2 ;
+(id)debugStringForEvent:(id)arg0 ;
+(id)getOccurrenceChange:(id)arg0 forEvent:(id)arg1 inCalendar:(id)arg2 ;
+(id)myAddressWithAccountInfo:(id)arg0 forEvent:(id)arg1 ;


@end


#endif