// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFILTERSELECTION_H
#define ICFILTERSELECTION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICFilterSelection : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *emptyFilterTypeSelections;
@property (readonly, nonatomic) NSString *emptySummary;
@property (readonly, nonatomic) NSString *emptySummaryTitle;
@property (retain, nonatomic) NSArray *filterTypeSelections; // ivar: _filterTypeSelections
@property (readonly, nonatomic) BOOL hasEmptySelection;
@property (nonatomic) BOOL includeRecentlyDeleted; // ivar: _includeRecentlyDeleted
@property (readonly, nonatomic) NSArray *incompatibleLockedNotesFilterTypeSelections;
@property (readonly, nonatomic) NSArray *invalidFilterTypeSelectionCombinations;
@property (readonly, nonatomic) NSString *invalidSummary;
@property (readonly, nonatomic) NSString *invalidSummaryTitle;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) NSUInteger joinOperator; // ivar: _joinOperator
@property (readonly, copy, nonatomic) NSString *primaryDateSummary; // ivar: _primaryDateSummary
@property (readonly, copy, nonatomic) NSString *secondaryDateSummary; // ivar: _secondaryDateSummary
@property (readonly, copy, nonatomic) NSString *summaryWithJoinOperatorMenu;


+(id)keyPathsForValuesAffectingHasEmptySelection;
+(id)keyPathsForValuesAffectingIsEmpty;
+(id)keyPathsForValuesAffectingIsValid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICFilterSelection:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)filterTypeSelectionForFilterType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFilterTypeSelection:(id)arg0 ;
-(id)initWithFilterTypeSelections:(id)arg0 joinOperator:(NSUInteger)arg1 ;
-(void)setSelection:(id)arg0 forFilterType:(NSUInteger)arg1 ;


@end


#endif