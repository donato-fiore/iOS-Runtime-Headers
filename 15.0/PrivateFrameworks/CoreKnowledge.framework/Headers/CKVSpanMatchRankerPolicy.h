// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHRANKERPOLICY_H
#define CKVSPANMATCHRANKERPOLICY_H


#import <Foundation/Foundation.h>


@interface CKVSpanMatchRankerPolicy : NSObject

@property (readonly, nonatomic) float absoluteThreshold; // ivar: _absoluteThreshold
@property (readonly, nonatomic) BOOL allowApproxMatch; // ivar: _allowApproxMatch
@property (readonly, nonatomic) BOOL allowPartialMatch; // ivar: _allowPartialMatch
@property (readonly, nonatomic) BOOL enableRankingWithPriors; // ivar: _enableRankingWithPriors
@property (readonly, nonatomic) float globalRelativeThreshold; // ivar: _globalRelativeThreshold
@property (readonly, nonatomic) float matchScoreWeight; // ivar: _matchScoreWeight
@property (readonly, nonatomic) float priorScoreWeight; // ivar: _priorScoreWeight
@property (readonly, nonatomic) BOOL prioritizeExactMatch; // ivar: _prioritizeExactMatch
@property (readonly, nonatomic) float regionalRelativeThreshold; // ivar: _regionalRelativeThreshold
@property (readonly, nonatomic) BOOL useTopFive; // ivar: _useTopFive


-(BOOL)_settingOverrideBoolValue:(id)arg0 withDefault:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchRankerPolicy:(id)arg0 ;
-(NSUInteger)hash;
-(float)_settingOverrideFloatValue:(id)arg0 withDefault:(float)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSettings:(id)arg0 enableRankingWithPriors:(BOOL)arg1 allowPartialMatch:(BOOL)arg2 allowApproxMatch:(BOOL)arg3 prioritizeExactMatch:(BOOL)arg4 ;


@end


#endif