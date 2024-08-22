// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDATELABEL_H
#define UIDATELABEL_H

@class NSDate, NSCalendar, NSString, UIFont;


#import "UILabel.h"

@interface UIDateLabel : UILabel {
    NSDate *_date;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_weekdayFormatCutoff;
    NSCalendar *_calendar;
}


@property (nonatomic) BOOL boldForAllLocales; // ivar: _boldForAllLocales
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=_dateString) NSString *dateString;
@property (nonatomic) BOOL forceTimeOnly; // ivar: _forceTimeOnly
@property (nonatomic) CGFloat paddingFromTimeToDesignator; // ivar: _paddingFromTimeToDesignator
@property (nonatomic) BOOL shouldRecomputeText; // ivar: _shouldRecomputeText
@property (readonly, nonatomic) NSString *timeDesignator;
@property (readonly, nonatomic) BOOL timeDesignatorAppearsBeforeTime;
@property (readonly, nonatomic) UIFont *timeDesignatorFont;
@property (readonly, nonatomic) CGSize timeDesignatorSize;
@property (nonatomic) CGFloat timeInterval;
@property (readonly, nonatomic) BOOL use24HourTime;


+(id)_relativeDateFormatter;
+(id)_timeOnlyDateFormatter;
+(id)_weekdayDateFormatter;
+(id)amString;
+(id)defaultFont;
+(id)pmString;
-(CGFloat)_noon;
-(CGFloat)_today;
-(CGFloat)_tomorrow;
-(CGFloat)_weekdayFormatCutoff;
-(CGFloat)_yesterday;
-(id)_calendar;
-(id)_dateWithDayDiffFromToday:(NSInteger)arg0 ;
-(id)_stringDrawingContext;
-(id)_todayDate;
-(id)font;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(void)_recomputeTextIfNecessary;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif