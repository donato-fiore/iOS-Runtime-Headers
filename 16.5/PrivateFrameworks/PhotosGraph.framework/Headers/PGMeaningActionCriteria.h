// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGACTIONCRITERIA_H
#define PGMEANINGACTIONCRITERIA_H

@class NSString, NSArray, NSDictionary;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>



@property (retain, nonatomic) NSString *actionName; // ivar: _actionName
@property (nonatomic) NSInteger actionValue; // ivar: _actionValue
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *descendingSortedMediaAnalysisVersion; // ivar: _descendingSortedMediaAnalysisVersion
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *highPrecisionThresholdByMediaAnalysisVersion; // ivar: _highPrecisionThresholdByMediaAnalysisVersion
@property (retain, nonatomic) NSDictionary *highRecallThresholdByMediaAnalysisVersion; // ivar: _highRecallThresholdByMediaAnalysisVersion
@property (readonly) Class superclass;


+(CGFloat)actionHighRecallThresholdForAssetMediaAnalysisVersion:(NSUInteger)arg0 usingActionCriteriaByValidPersonActivityMeaningLabel:(id)arg1 andValidPersonActivity:(id)arg2 ;
+(id)actionValueStringUsingActionCriteriaByValidPersonActivityMeaningLabel:(id)arg0 withPersonActivityMeaningLabel:(id)arg1 ;
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
+(id)descendingSortedMediaAnalysisVersionFromCriteriaDictionary:(id)arg0 usingActionThresholdKey:(id)arg1 ;
+(id)parseThresholdFromCriteriaDictionary:(id)arg0 usingActionThresholdKey:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)passesCriteriaWithTrait:(id)arg0 withHighPrecisionThreshold:(CGFloat)arg1 ;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;
-(CGFloat)actionThresholdForAssetMediaAnalysisVersion:(NSUInteger)arg0 withActionThresholdByMediaAnalysisVersion:(id)arg1 ;


@end


#endif