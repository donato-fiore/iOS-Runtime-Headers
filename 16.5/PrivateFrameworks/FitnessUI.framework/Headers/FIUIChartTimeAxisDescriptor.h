// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICHARTTIMEAXISDESCRIPTOR_H
#define FIUICHARTTIMEAXISDESCRIPTOR_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSDateComponents, NSString, UIColor, UIFont;
@protocol FIUIChartAxisDescriptor;

#import <Foundation/Foundation.h>

#import "FIUIChartDateAnchorRule.h"

@interface FIUIChartTimeAxisDescriptor : NSObject <FIUIChartAxisDescriptor>

 {
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableArray *_cachedAxisLabelColors;
    NSMutableDictionary *_hourMinuteFormatters;
    NSMutableDictionary *_hourFormatters;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_dayFormatters;
    NSMutableDictionary *_monthFormatters;
    NSMutableDictionary *_yearFormatters;
}


@property (retain, nonatomic) FIUIChartDateAnchorRule *anchorRule; // ivar: _anchorRule
@property (nonatomic) CGFloat axisDescriptorPadding; // ivar: _axisDescriptorPadding
@property (retain, nonatomic) NSDateComponents *axisSpacing; // ivar: _axisSpacing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceAMPMOnFirstLabel; // ivar: _forceAMPMOnFirstLabel
@property (nonatomic) BOOL generateSubAxisDescriptorOnlyForNoonMidnight; // ivar: _generateSubAxisDescriptorOnlyForNoonMidnight
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideClippedLabels; // ivar: _hideClippedLabels
@property (retain, nonatomic) UIColor *highlightedLabelColor; // ivar: _highlightedLabelColor
@property (retain, nonatomic) UIColor *highlightedSubLabelColor; // ivar: _highlightedSubLabelColor
@property (retain, nonatomic) id *highlightedValue;
@property (retain, nonatomic) UIFont *labelAMPMFont; // ivar: _labelAMPMFont
@property (nonatomic) NSUInteger labelAlignment; // ivar: _labelAlignment
@property (retain, nonatomic) UIFont *labelFont; // ivar: _labelFont
@property (retain, nonatomic) id *maxValue; // ivar: _maxValue
@property (retain, nonatomic) id *minValue; // ivar: _minValue
@property (retain, nonatomic) UIColor *selectedLabelColor; // ivar: _selectedLabelColor
@property (nonatomic) CGFloat shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (retain, nonatomic) FIUIChartDateAnchorRule *subAnchorRule; // ivar: _subAnchorRule
@property (nonatomic) BOOL subAxisCapitalize; // ivar: _subAxisCapitalize
@property (nonatomic) CGFloat subAxisDescriptorPadding; // ivar: _subAxisDescriptorPadding
@property (retain, nonatomic) NSDateComponents *subAxisSpacing; // ivar: _subAxisSpacing
@property (nonatomic) CGFloat subAxisVerticalPadding; // ivar: _subAxisVerticalPadding
@property (nonatomic) NSUInteger subLabelAlignment; // ivar: _subLabelAlignment
@property (retain, nonatomic) UIFont *subLabelFont; // ivar: _subLabelFont
@property (nonatomic) NSUInteger subTextStyle; // ivar: _subTextStyle
@property (nonatomic) NSUInteger subTimeInterval; // ivar: _subTimeInterval
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger textStyle; // ivar: _textStyle
@property (nonatomic) NSUInteger timeInterval; // ivar: _timeInterval
@property (retain, nonatomic) UIColor *unhighlightedLabelColor; // ivar: _unhighlightedLabelColor
@property (retain, nonatomic) UIColor *unhighlightedSubLabelColor; // ivar: _unhighlightedSubLabelColor
@property (nonatomic) BOOL useMinMaxLabelPlacement; // ivar: _useMinMaxLabelPlacement


+(NSUInteger)_spacingIntervalFromAxisSpacing:(id)arg0 ;
-(BOOL)_validateProperties;
-(Class)expectedDataType;
-(NSInteger)_hourComponentFromDate:(id)arg0 ;
-(NSUInteger)numLabels;
-(NSUInteger)numSubLabels;
-(id)_hourMinuteFormatterWithTextStyle:(NSUInteger)arg0 ;
-(id)_labelAtIndex:(NSUInteger)arg0 ;
-(id)_labelsForSpacingInterval:(NSUInteger)arg0 withSpacing:(id)arg1 textStyle:(NSUInteger)arg2 ;
-(id)_newSubLabelFromDate:(id)arg0 withTimeInterval:(NSUInteger)arg1 textStyle:(NSUInteger)arg2 ;
-(id)_startDateFromTimeInterval:(NSUInteger)arg0 ;
-(id)_stringFromDate:(id)arg0 withTimeInterval:(NSUInteger)arg1 textStyle:(NSUInteger)arg2 forceAMPM:(BOOL)arg3 ;
-(id)_subLabelAtIndex:(NSUInteger)arg0 ;
-(id)_subLabelsForSpacingInterval:(NSUInteger)arg0 withSpacing:(id)arg1 textStyle:(NSUInteger)arg2 ;
-(id)axisLabels;
-(id)axisSubLabels;
-(id)dayFormatter:(NSUInteger)arg0 ;
-(id)hourFormatter:(NSUInteger)arg0 ;
-(id)init;
-(id)monthFormatter:(NSUInteger)arg0 ;
-(id)positionForLabelAtIndex:(NSUInteger)arg0 ;
-(id)positionForSubLabelAtIndex:(NSUInteger)arg0 ;
-(id)textForLabelAtIndex:(NSUInteger)arg0 ;
-(id)textForSubLabelAtIndex:(NSUInteger)arg0 ;
-(id)weekdayFormatter:(NSUInteger)arg0 ;
-(id)yearFormatter:(NSUInteger)arg0 ;
-(void)_clearCache;
-(void)_clearFormatters;
-(void)_generateAxisLabels;
-(void)_generateAxisSubLabels;
-(void)invalidateCaches;
-(void)selectLabel:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif