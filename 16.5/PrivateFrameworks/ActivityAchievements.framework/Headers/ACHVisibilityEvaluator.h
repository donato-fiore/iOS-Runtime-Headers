// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHVISIBILITYEVALUATOR_H
#define ACHVISIBILITYEVALUATOR_H

@class NSCalendar, NSNumber, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ACHVisibilityEvaluator : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSNumber *injectedIsStandalonePhoneFitnessMode; // ivar: _injectedIsStandalonePhoneFitnessMode
@property (retain, nonatomic) NSDate *injectedNow; // ivar: _injectedNow
@property (retain, nonatomic) NSString *injectedWatchCountryCode; // ivar: _injectedWatchCountryCode


-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 activityMoveMode:(NSInteger)arg1 experienceType:(NSUInteger)arg2 ;
-(id)init;
-(void)_injectIsStandalonePhoneFitnessMode:(BOOL)arg0 ;
-(void)_injectNow:(id)arg0 ;
-(void)_injectWatchCountryCode:(id)arg0 ;


@end


#endif