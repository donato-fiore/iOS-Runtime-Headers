// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUIDIGITALCLOCKLABEL_H
#define MTUIDIGITALCLOCKLABEL_H

@class NSCalendar, NSDate;


#import "MTUIDateLabel.h"

@interface MTUIDigitalClockLabel : MTUIDateLabel {
    NSCalendar *_calendar;
    NSDate *_baseDate;
    NSInteger _hour;
    NSInteger _minute;
}




-(BOOL)setHour:(NSInteger)arg0 minute:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)forceSetHour:(NSInteger)arg0 minute:(NSInteger)arg1 ;
-(void)refreshUI;
-(void)resetFontSizes;
-(void)setTimeLabelText:(id)arg0 ;
-(void)significantTimeChange:(id)arg0 ;


@end


#endif