// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDCONDITIONALFORMATTINGRULE_H
#define EDCONDITIONALFORMATTINGRULE_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface EDConditionalFormattingRule : NSObject {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    NSUInteger mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    NSInteger mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    NSUInteger mRank;
    NSInteger mStdDev;
    NSString *mText;
    int mTimePeriod;
}




+(id)conditionalFormattingRuleWithResources:(id)arg0 ;
-(BOOL)aboveAverage;
-(BOOL)appliesToDateOnly;
-(BOOL)bottom;
-(BOOL)equalAverage;
-(BOOL)percent;
-(BOOL)stopIfTrue;
-(NSInteger)compareToOtherRuleUsingPriority:(id)arg0 ;
-(NSInteger)priority;
-(NSInteger)stdDev;
-(NSUInteger)differentialStyleIndex;
-(NSUInteger)formulaCount;
-(NSUInteger)rank;
-(id)description;
-(id)differentialStyle;
-(id)formulaAtIndex:(NSUInteger)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(id)text;
-(int)operatorEnum;
-(int)timePeriod;
-(int)type;
-(void)addFormula:(id)arg0 worksheet:(id)arg1 ;
-(void)setAboveAverage:(BOOL)arg0 ;
-(void)setAppliesToDateOnly:(BOOL)arg0 ;
-(void)setBottom:(BOOL)arg0 ;
-(void)setDifferentialStyle:(id)arg0 ;
-(void)setDifferentialStyleIndex:(NSUInteger)arg0 ;
-(void)setEqualAverage:(BOOL)arg0 ;
-(void)setOperatorEnum:(int)arg0 ;
-(void)setPercent:(BOOL)arg0 ;
-(void)setPriority:(NSInteger)arg0 ;
-(void)setRank:(NSUInteger)arg0 ;
-(void)setStdDev:(NSInteger)arg0 ;
-(void)setStopIfTrue:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTimePeriod:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif