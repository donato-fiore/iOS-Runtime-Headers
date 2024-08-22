// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALENDAREVENTDATESANDTIMEZONECELL_H
#define CALENDAREVENTDATESANDTIMEZONECELL_H

@class UILabel;


#import "PreferencesDoubleTwoPartValueCell.h"

@interface CalendarEventDatesAndTimeZoneCell : PreferencesDoubleTwoPartValueCell {
    UILabel *_textLabel3;
    UILabel *_detailLabel3;
}


@property (readonly, retain, nonatomic) UILabel *detailLabel3;
@property (readonly, retain, nonatomic) UILabel *textLabel3;


-(void)_layoutSubviewsCore;
-(void)layoutText:(id)arg0 andValue:(id)arg1 ;


@end


#endif