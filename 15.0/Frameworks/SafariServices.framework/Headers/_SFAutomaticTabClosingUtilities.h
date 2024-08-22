// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAUTOMATICTABCLOSINGUTILITIES_H
#define _SFAUTOMATICTABCLOSINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface _SFAutomaticTabClosingUtilities : NSObject



+(BOOL)shouldCloseTabsAutomaticallyWhenEnteringForeground;
+(BOOL)userHasPreferenceForAutomaticTabClosingInterval;
+(CGFloat)timeIntervalForAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(NSUInteger)automaticTabClosingInterval;
+(id)analyticsTitleForAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(id)promptTitleForAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(id)settingsTitleForAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(void)clearMostDistantLastViewedTime;
+(void)resetAutomaticTabClosingIntervalPreference;
+(void)setAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(void)setMostDistantLastViewedTime:(CGFloat)arg0 ;


@end


#endif