// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKDEFAULTICONGENERATOR_H
#define CUIKDEFAULTICONGENERATOR_H

@class NSCalendar, NSDateComponents, NSString;
@protocol CUIKIconGenerator;

#import <Foundation/Foundation.h>


@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>



@property (readonly, copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) CGFloat canvasScale; // ivar: _canvasScale
@property (readonly, nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger iconFormat; // ivar: _iconFormat
@property (readonly) Class superclass;


+(BOOL)_isBlackDayOfWeekRequiredForLocale:(id)arg0 ;
+(id)_countriesRequiringBlackDayOfWeek;
+(id)_dateNameFromDateComponents:(id)arg0 calendar:(id)arg1 type:(NSInteger)arg2 forceAbbreviated:(BOOL)arg3 ;
+(id)_dayNumberStringFromDateComponents:(id)arg0 calendar:(id)arg1 ;
+(id)_whiteImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(CGFloat)_roundSpecToActual:(CGFloat)arg0 ;
-(id)_colorForDayOfWeek;
-(id)_dateNameFont;
-(id)_dayNumberFont;
-(id)_iconBlackColor;
-(id)_iconRedColor;
-(id)initWithForceNoTextEffects:(BOOL)arg0 ;
-(struct CGImage *)iconImageWithDateComponents:(id)arg0 calendar:(id)arg1 format:(NSInteger)arg2 size:(struct CGSize )arg3 scale:(CGFloat)arg4 ;
-(void)_drawDateName;
-(void)_drawDayNumber;
-(void)_drawIconInContext:(struct CGContext *)arg0 iconBase:(id)arg1 ;


@end


#endif