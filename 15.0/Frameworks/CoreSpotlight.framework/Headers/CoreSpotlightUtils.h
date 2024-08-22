// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORESPOTLIGHTUTILS_H
#define CORESPOTLIGHTUTILS_H


#import <Foundation/Foundation.h>


@interface CoreSpotlightUtils : NSObject



+(BOOL)detailedLoggingEnabled;
+(BOOL)disabledUserActivities;
+(BOOL)fastUserActivites;
+(BOOL)forceDataMigration;
+(void)initialize;


@end


#endif