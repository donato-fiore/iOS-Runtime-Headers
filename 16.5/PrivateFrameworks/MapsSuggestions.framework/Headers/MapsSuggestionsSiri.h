// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSIRI_H
#define MAPSSUGGESTIONSSIRI_H


#import <Foundation/Foundation.h>


@interface MapsSuggestionsSiri : NSObject



+(BOOL)isAllowedOnHomeScreen;
+(BOOL)isAllowedOnLockScreen;
+(BOOL)isEnabled;
+(id)isAllowedOnHomeScreenCondition;
+(id)isAllowedOnLockScreenCondition;
+(id)isEnabledCondition;


@end


#endif