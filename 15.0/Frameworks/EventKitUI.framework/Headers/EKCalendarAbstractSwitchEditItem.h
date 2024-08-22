// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARABSTRACTSWITCHEDITITEM_H
#define EKCALENDARABSTRACTSWITCHEDITITEM_H

@class UILabel, NSMutableArray, UISwitch;


#import "EKCalendarEditItem.h"

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    UILabel *_descriptionLabel;
}


@property (nonatomic) BOOL allowEventAlerts; // ivar: _allowEventAlerts
@property (retain, nonatomic) NSMutableArray *cells; // ivar: _cells
@property (nonatomic) BOOL switchState; // ivar: _switchState
@property (retain, nonatomic) UISwitch *toggleSwitch; // ivar: _toggleSwitch
@property (nonatomic) BOOL underlyingCalendarState; // ivar: _underlyingCalendarState


-(BOOL)cellWrapsLongText;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(BOOL)shouldHideSwitch;
-(NSUInteger)numberOfSubitems;
-(id)cell;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)cellText;
-(id)descriptionLabelText;
-(id)footerTitle;
-(void)_switchStateChanged:(id)arg0 ;
-(void)reset;
-(void)setCalendar:(id)arg0 store:(id)arg1 ;


@end


#endif