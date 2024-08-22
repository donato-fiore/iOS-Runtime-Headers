// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTANALYTICSMANAGER_H
#define QLTANALYTICSMANAGER_H


#import <Foundation/Foundation.h>


@interface QLTAnalyticsManager : NSObject



+(id)sharedManager;
-(id)_eventsQueue;
-(void)_sendEvent:(id)arg0 ;
-(void)sendCacheSizeEventWithCacheSize:(NSUInteger)arg0 ;


@end


#endif