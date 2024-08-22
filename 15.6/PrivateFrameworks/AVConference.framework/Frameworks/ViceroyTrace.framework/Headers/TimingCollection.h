// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIMINGCOLLECTION_H
#define TIMINGCOLLECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TimingCollection : NSObject {
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}




-(BOOL)hasKey:(int)arg0 ;
-(BOOL)isValidTimingForKey:(int)arg0 ;
-(float)timingForKey:(int)arg0 ;
-(float)totalTimeForKey:(int)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)removeTimingForKey:(int)arg0 ;
-(void)setStartTime:(float)arg0 forKey:(int)arg1 ;
-(void)setStopTime:(float)arg0 forKey:(int)arg1 ;
-(void)setTiming:(float)arg0 forKey:(int)arg1 ;
-(void)startTimingForKey:(int)arg0 ;
-(void)stopTimingForKey:(int)arg0 ;


@end


#endif