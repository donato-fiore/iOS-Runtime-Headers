// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPREDICTEDTRANSITIONSCACHE_H
#define ATXPREDICTEDTRANSITIONSCACHE_H

@class NSMutableDictionary;
@protocol ATXPredictedLocationsManagerProtocol;

#import <Foundation/Foundation.h>


@interface ATXPredictedTransitionsCache : NSObject {
    id<ATXPredictedLocationsManagerProtocol> *_manager;
    NSMutableDictionary *_homeToWork;
    NSMutableDictionary *_workToHome;
}




+(id)ceilingDateToNextHour:(id)arg0 ;
+(id)getNextTransitionInCache:(id)arg0 fromDate:(id)arg1 ;
+(void)removeEntriesFromCache:(id)arg0 beforeDate:(id)arg1 ;
-(BOOL)cacheHeadingFromLoiType:(NSInteger)arg0 toLoiType:(NSInteger)arg1 forDate:(id)arg2 ;
-(id)cacheForDestinationLoiType:(NSInteger)arg0 ;
-(id)getNextHomeToWorkTransitionsOnActivity:(id)arg0 ;
-(id)getNextWorkToHomeTransitionsOnActivity:(id)arg0 ;
-(id)init;
-(id)initWithLocationManager:(id)arg0 ;
-(void)dump;
-(void)fetchEntriesStartingDate:(id)arg0 onActivity:(id)arg1 ;
-(void)prewarmOnActivity:(id)arg0 ;
-(void)pruneStaleEntries;


@end


#endif