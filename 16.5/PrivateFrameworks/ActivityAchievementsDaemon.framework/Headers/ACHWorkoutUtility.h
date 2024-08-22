// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHWORKOUTUTILITY_H
#define ACHWORKOUTUTILITY_H

@class HDDatabaseTransactionContext, HDSQLitePredicate, HDProfile;

#import <Foundation/Foundation.h>


@interface ACHWorkoutUtility : NSObject

@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // ivar: _databaseContext
@property (retain, nonatomic) HDSQLitePredicate *firstPartyPredicate; // ivar: _firstPartyPredicate
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(NSUInteger)_countOfSamplesWithPredicate:(id)arg0 ;
-(NSUInteger)_countOfSamplesWithPredicate:(id)arg0 andLocationType:(NSUInteger)arg1 ;
-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 ;
-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 withType:(NSUInteger)arg1 andLocation:(NSUInteger)arg2 containedInInterval:(id)arg3 ;
-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 withType:(NSUInteger)arg1 endingOnOrBeforeDate:(id)arg2 ;
-(NSUInteger)numberOfWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 ;
-(id)_predicateWithDuration:(CGFloat)arg0 withType:(id)arg1 startingAtOrAfterDate:(id)arg2 endingOnOrBeforeDate:(id)arg3 firstPartyOnly:(BOOL)arg4 ;
-(id)_readingContextWithIdentifier:(id)arg0 ;
-(id)bestDistanceForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 ;
-(id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)workoutsInDateInterval:(id)arg0 ;
-(id)workoutsWithDuration:(CGFloat)arg0 withType:(id)arg1 startingAtOrAfterDate:(id)arg2 endingOnOrBeforeDate:(id)arg3 firstPartyOnly:(BOOL)arg4 ;
-(void)_performReadTransaction:(id)arg0 error:(*id)arg1 block:(id)arg2 ;


@end


#endif