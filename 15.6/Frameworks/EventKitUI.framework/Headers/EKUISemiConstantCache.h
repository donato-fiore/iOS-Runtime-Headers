// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUISEMICONSTANTCACHE_H
#define EKUISEMICONSTANTCACHE_H

@class UIFont, UIImage;

#import <Foundation/Foundation.h>


@interface EKUISemiConstantCache : NSObject {
    BOOL _calInterfaceIsLeftToRight;
    CGFloat _dayOccurrenceMinimumCachedLineHeightCompact;
    CGFloat _dayOccurrenceMinimumCachedLineHeightRegular;
    CGFloat _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    CGFloat _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
    UIFont *_weekAllDayLabelFontCompact;
    UIFont *_weekAllDayLabelFontRegular;
    UIFont *_weekAllDayTodayLabelFontCompact;
    UIImage *_inboxDisclosureImage;
}


@property (readonly) CGFloat currentScaleFactor; // ivar: _currentScaleFactor
@property (readonly) CGFloat dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) CGFloat dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) CGFloat dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) CGFloat dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property CGFloat minYearMonthHeaderFontSizeUsed; // ivar: _minYearMonthHeaderFontSizeUsed
@property (readonly) BOOL usesLargeText; // ivar: _usesLargeText
@property CGFloat weekAllDayBaselineForLargeFormatWeekView; // ivar: _weekAllDayBaselineForLargeFormatWeekView
@property CGFloat weekAllDayBaselineForSmallFormatWeekView; // ivar: _weekAllDayBaselineForSmallFormatWeekView
@property (readonly) UIFont *weekAllDayLabelFontCompact;
@property (readonly) UIFont *weekAllDayLabelFontRegular;
@property CGFloat weekAllDayOccurrenceHeight; // ivar: _weekAllDayOccurrenceHeight
@property (readonly) UIFont *weekAllDayTodayLabelFontCompact;
@property (readonly) UIFont *weekAllDayTodayLabelFontRegular;


+(id)sharedInstance;
-(NSInteger)_participantStatusFromDetailAttendeesStatus:(int)arg0 ;
-(id)_dayOccurrenceFontWithStyle:(id)arg0 size:(CGFloat)arg1 regularSize:(CGFloat)arg2 ;
-(id)birthdayImageForFont:(id)arg0 ;
-(id)commentIconStringForFont:(id)arg0 ;
-(id)inboxDisclosureImage;
-(id)init;
-(id)statusGlyphForStatusType:(int)arg0 ;
-(void)_contentCategorySizeChanged:(id)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_orientationChanged:(id)arg0 ;
-(void)updateMetrics;


@end


#endif