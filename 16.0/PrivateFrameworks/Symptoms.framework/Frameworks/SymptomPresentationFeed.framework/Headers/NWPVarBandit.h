// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPVARBANDIT_H
#define NWPVARBANDIT_H

@class NSMutableDictionary;


#import "NWPVar.h"
#import "SFCache.h"

@interface NWPVarBandit : NWPVar

@property (retain, nonatomic) NSMutableDictionary *lastSampleRewards; // ivar: _lastSampleRewards
@property (retain, nonatomic) SFCache *uuidCache; // ivar: _uuidCache


-(BOOL)selectModel:(NSUInteger)arg0 ;
-(BOOL)setInitialValue:(id)arg0 ;
-(BOOL)setReward:(float)arg0 onValue:(id)arg1 forPredictionGenerationId:(id)arg2 ;
-(id)_epsilongreedy_predictValueGivenContext:(id)arg0 ;
-(id)_ucb_predictValueGivenContext:(id)arg0 ;
-(id)initInNumRangeFrom:(id)arg0 to:(id)arg1 stride:(float)arg2 withLabel:(id)arg3 ;
-(id)initInValueSpace:(id)arg0 withLabel:(id)arg1 ;
-(id)predictValueGivenContext:(id)arg0 generationId:(*id)arg1 ;
-(void)_defaultModelInit;


@end


#endif