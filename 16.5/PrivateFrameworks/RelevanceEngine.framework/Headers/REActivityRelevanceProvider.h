// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REACTIVITYRELEVANCEPROVIDER_H
#define REACTIVITYRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REActivityRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL closedActiveEngergy; // ivar: _closedActiveEngergy
@property (readonly, nonatomic) BOOL closedExerciseTime; // ivar: _closedExerciseTime
@property (readonly, nonatomic) BOOL closedStandHour; // ivar: _closedStandHour


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithActiveEnergyState:(BOOL)arg0 exerciseTimeState:(BOOL)arg1 standHourState:(BOOL)arg2 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif