// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHVISIBILITYEVALUATOR_H
#define ACHVISIBILITYEVALUATOR_H

@class NSCalendar, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ACHVisibilityEvaluator : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDate *injectedNow; // ivar: _injectedNow
@property (retain, nonatomic) NSString *injectedWatchCountryCode; // ivar: _injectedWatchCountryCode


-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
-(BOOL)unearnedAchievementIsVisibleNow:(id)arg0 activityMoveMode:(NSInteger)arg1 experienceType:(NSUInteger)arg2 ;
-(id)init;
-(void)_injectNow:(id)arg0 ;
-(void)_injectWatchCountryCode:(id)arg0 ;


@end


#endif