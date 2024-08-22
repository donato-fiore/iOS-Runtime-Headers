// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKNOTIFICATIONDESCRIPTIONGENERATOR_H
#define CUIKNOTIFICATIONDESCRIPTIONGENERATOR_H

@class NSNumberFormatter, NSDateFormatter;


#import "CUIKDescriptionGenerator.h"

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}




+(id)autoCommentForProposedTime:(id)arg0 ;
+(id)comment:(id)arg0 withInsertedAutoCommentForDate:(id)arg1 ;
+(id)sharedGenerator;
+(id)stringWithAutoCommentRemoved:(id)arg0 ;
+(id)stringWithOnlyAutoComment:(id)arg0 ;
-(id)_adjustedTitle:(id)arg0 maxLength:(NSUInteger)arg1 ;
-(id)_sharedDateFormatter;
-(id)_sharedDateTimeFormatter;
-(id)_sharedNumberFormatter;
-(id)_sharedTimeFormatter;
-(id)conflictStringForConflictDetails:(id)arg0 descriptions:(id)arg1 ;
-(id)conflictStringForConflictDetails:(id)arg0 maxTitleLength:(NSUInteger)arg1 ;
-(id)conflictStringForConflictDetails:(id)arg0 maxTitleLength:(NSUInteger)arg1 descriptions:(id)arg2 ;
-(id)timePeriodForTimeInterval:(id)arg0 ;


@end


#endif