// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDATEFILTERTYPESELECTION_H
#define ICDATEFILTERTYPESELECTION_H

@class NSDate, NSString, NSNumber, NSDictionary;
@protocol NSCopying;


#import "ICFilterTypeSelection.h"

@interface ICDateFilterTypeSelection : ICFilterTypeSelection <NSCopying>



@property (retain, nonatomic) NSDate *primaryDate; // ivar: _primaryDate
@property (readonly, nonatomic) NSString *primaryDateSummary;
@property (retain, nonatomic) NSNumber *relativeRangeAmount; // ivar: _relativeRangeAmount
@property (readonly, nonatomic) NSString *relativeRangeAmountAndTimeInterval;
@property (readonly, nonatomic) NSString *relativeRangeDateSummary; // ivar: _relativeRangeDateSummary
@property (readonly, nonatomic) NSString *relativeRangeLabel;
@property (nonatomic) NSUInteger relativeRangeSelectionType; // ivar: _relativeRangeSelectionType
@property (readonly, nonatomic) CGFloat relativeRangeTimeInterval; // ivar: _relativeRangeTimeInterval
@property (readonly, nonatomic) NSDictionary *relativeRangeTimeIntervalOptions;
@property (retain, nonatomic) NSDate *secondaryDate; // ivar: _secondaryDate
@property (readonly, nonatomic) NSString *secondaryDateSummary;
@property (nonatomic) NSUInteger selectionType; // ivar: _selectionType


+(id)keyPathsForValuesAffectingIsEmpty;
+(id)keyPathsForValuesAffectingIsValid;
+(id)relativeRangeStringComponentsForSelectionType:(NSUInteger)arg0 number:(id)arg1 ;
+(id)relativeRangeSummaryForSelectionType:(NSUInteger)arg0 amount:(NSUInteger)arg1 ;
+(id)relativeRangeSummaryForSelectionType:(NSUInteger)arg0 number:(id)arg1 ;
+(id)shortDateFormatter;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDateFilterSelection:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)localeIsArabic;
-(NSInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithSelectionType:(NSUInteger)arg0 ;
-(id)rawFilterValue;
-(id)relativeDateSummary;
-(void)setSpecificDateRangeFrom:(id)arg0 to:(id)arg1 ;
-(void)updateDatesForCurrentSelectionType;


@end


#endif