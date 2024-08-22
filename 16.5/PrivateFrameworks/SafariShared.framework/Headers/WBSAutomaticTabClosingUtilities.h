// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAUTOMATICTABCLOSINGUTILITIES_H
#define WBSAUTOMATICTABCLOSINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSAutomaticTabClosingUtilities : NSObject



+(BOOL)shouldCloseTabsAutomaticallyWhenEnteringForeground;
+(BOOL)userHasPreferenceForAutomaticTabClosingInterval;
+(NSUInteger)automaticTabClosingInterval;
+(void)clearMostDistantLastViewedTime;
+(void)resetAutomaticTabClosingIntervalPreference;
+(void)setAutomaticTabClosingInterval:(NSUInteger)arg0 ;
+(void)setMostDistantLastViewedTime:(CGFloat)arg0 ;


@end


#endif