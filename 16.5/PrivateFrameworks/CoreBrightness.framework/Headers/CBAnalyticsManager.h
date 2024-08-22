// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBANALYTICSMANAGER_H
#define CBANALYTICSMANAGER_H

@class NSMutableDictionary;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CBAnalyticsManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_reportTimer;
    NSMutableDictionary *_timestamps;
    NSMutableDictionary *samples;
    BOOL _userActive;
}




+(BOOL)handleColorSample:(id)arg0 ;
+(id)sharedInstance;
+(void)sendEventOnceADayLazy:(id)arg0 andDict:(id)arg1 ;
+(void)stopReporting:(NSUInteger)arg0 ;
-(BOOL)handleColorSampleInternal:(id)arg0 ;
-(BOOL)isFirstEventToday:(id)arg0 ;
-(BOOL)isSameDay:(id)arg0 asDay:(id)arg1 ;
-(id)init;
-(id)stringForType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)logAllColorSamples;
-(void)logColorSample:(id)arg0 withType:(id)arg1 ;
-(void)sendEventLazy:(id)arg0 andDict:(id)arg1 ;
-(void)sendEventOnceADayLazyInternal:(id)arg0 andDict:(id)arg1 ;
-(void)setUserActive:(BOOL)arg0 ;
-(void)startReporting;
-(void)stopReportingInternal:(NSUInteger)arg0 ;
-(void)storeTimestamp:(id)arg0 forEventName:(id)arg1 ;


@end


#endif