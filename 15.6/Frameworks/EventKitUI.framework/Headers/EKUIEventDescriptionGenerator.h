// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIEVENTDESCRIPTIONGENERATOR_H
#define EKUIEVENTDESCRIPTIONGENERATOR_H

@class NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface EKUIEventDescriptionGenerator : NSObject {
    *__CFDateFormatter _dateFormatter;
    NSNumberFormatter *_numberFormatter;
}




+(id)eventDescriptionForDrag:(id)arg0 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg0 withTimeString:(id)arg1 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg0 ;
-(id)_attendeesForEvent:(id)arg0 sorted:(BOOL)arg1 limitedTo:(NSInteger)arg2 ;
-(id)_sharedNumberFormatter;
-(id)naturalLanguageDescriptionForAttendees:(id)arg0 ;
-(id)timeStringForEvent:(id)arg0 forBeginningOfSentence:(BOOL)arg1 useExplicitTimes:(BOOL)arg2 followingComma:(BOOL)arg3 ;
-(struct __CFDateFormatter *)_sharedDateFormatter;
-(void)dealloc;


@end


#endif