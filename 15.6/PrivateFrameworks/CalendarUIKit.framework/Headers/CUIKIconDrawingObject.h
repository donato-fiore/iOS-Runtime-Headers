// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKICONDRAWINGOBJECT_H
#define CUIKICONDRAWINGOBJECT_H

@class NSCalendar, UIFont, NSString;

#import <Foundation/Foundation.h>


@interface CUIKIconDrawingObject : NSObject

@property (retain) NSCalendar *calendar; // ivar: _calendar
@property CGSize canvasSize; // ivar: _canvasSize
@property (readonly, nonatomic) CGFloat dateNameBaselineVerticalInset;
@property (copy) id *dateNameBlock; // ivar: _dateNameBlock
@property (readonly, nonatomic) UIFont *dateNameFont; // ivar: _dateNameFont
@property NSInteger dateNameFormatType; // ivar: _dateNameFormatType
@property (readonly, nonatomic) CGFloat dateNameHorizontalInset;
@property (copy) NSString *dayNumber; // ivar: _dayNumber
@property (readonly, nonatomic) CGFloat dayNumberBaselineVerticalInset;
@property (readonly, nonatomic) UIFont *dayNumberFont;
@property (readonly, nonatomic) CGFloat dayNumberTrackingValue;
@property NSInteger format; // ivar: _format
@property (readonly, nonatomic) CGFloat minDateNameFontScale;
@property (readonly, nonatomic) CGFloat minDateNameLetterSpacing;
@property (readonly, nonatomic) CGFloat minFullDateNameFontScale;


+(BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg0 ;
+(id)_dateNamesForCalendar:(id)arg0 type:(NSInteger)arg1 ;
+(id)_dateNamesForDateFormatter:(id)arg0 type:(NSInteger)arg1 ;
+(id)colorForDayOfWeek;
+(id)countriesRequiringBlackDayOfWeek;
-(BOOL)_shouldUseJ207SmallerFont:(id)arg0 ;
-(CGFloat)_homeScreenDateNameBaselineVerticalInset;
-(CGFloat)dateNameFontSizeForName:(id)arg0 ;
-(CGFloat)resizeAttributedString:(id)arg0 withDateName:(id)arg1 font:(id)arg2 ctx:(id)arg3 maxSize:(struct CGSize )arg4 ;
-(id)_systemG2FromFont:(id)arg0 ;
-(id)dateNameFont:(id)arg0 ;
-(id)dateNameFont:(id)arg0 size:(CGFloat)arg1 ;
// -(id)initWithCalendar:(id)arg0 dayNumber:(id)arg1 dateNameBlock:(id)arg2 dateNameFormatType:(unk)arg3 canvasSize:(NSInteger)arg4 format:(struct CGSize )arg5  ;
-(void)_drawDateName;
-(void)_drawDayNumber;
-(void)_drawDayNumberForHomeScreenStyledIcon;
-(void)_drawDayNumberForNotificationIcon;
-(void)draw;


@end


#endif