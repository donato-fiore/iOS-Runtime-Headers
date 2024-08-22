// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGCRITERIAEVALUATOR_H
#define PGMEANINGCRITERIAEVALUATOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PGMeaningActionCriteria.h"
#import "PGMeaningCriteriaInfo.h"
#import "PGMeaningSceneCriteria.h"

@interface PGMeaningCriteriaEvaluator : NSObject

@property (retain, nonatomic) NSArray *allMeaningCriteriaArray; // ivar: _allMeaningCriteriaArray
@property (retain, nonatomic) PGMeaningActionCriteria *meaningActionCriteria; // ivar: _meaningActionCriteria
@property (retain, nonatomic) PGMeaningCriteriaInfo *meaningCriteriaInfo; // ivar: _meaningCriteriaInfo
@property (readonly, nonatomic) NSString *meaningLabel; // ivar: _meaningLabel
@property (retain, nonatomic) PGMeaningSceneCriteria *meaningSceneCriteria; // ivar: _meaningSceneCriteria


+(id)_allMeaningCriteriaClassArray;
+(id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg0 withDictionary:(id)arg1 ;
-(BOOL)allCriteriaIsValid;
-(BOOL)allCriteriaPassForAssets:(id)arg0 ;
-(BOOL)allCriteriaPassForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 meaningCriteriaInfo:(id)arg1 ;


@end


#endif