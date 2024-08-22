// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSCOREINTERPRETERCACHE_H
#define ATXSCOREINTERPRETERCACHE_H

@class NSMutableDictionary, ATXMemoryPressureMonitor, NSString;
@protocol ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>


@interface ATXScoreInterpreterCache : NSObject <ATXMemoryPressureObserver>

 {
    NSMutableDictionary *_cachedInterpreters;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _memoryPressureAllowsCaching;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_assetNamesToSkipCaching;
-(id)init;
-(id)scoreInterpreterForConsumerSubType:(unsigned char)arg0 ;
-(void)dealloc;
-(void)handleMemoryPressureOfType:(NSUInteger)arg0 ;
-(void)resetCache;


@end


#endif