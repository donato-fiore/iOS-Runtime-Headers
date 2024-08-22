// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSSESSIONCONTROLLER_H
#define TPSANALYTICSSESSIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPSAnalyticsSessionController : NSObject



+(void)_incrementSessionViewNumberForKey:(id)arg0 ;
+(void)_logSessionData;
+(void)_resetSession;
+(void)endSession;
+(void)incrementCollectionsViewedCount;
+(void)incrementTipsViewedCount;
+(void)trackSession;


@end


#endif