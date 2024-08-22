// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAEVENTBUFFER_H
#define TAEVENTBUFFER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TAEventBufferSettings.h"
#import "TACircularBuffer.h"

@interface TAEventBuffer : NSObject {
    TAEventBufferSettings *_settings;
    TACircularBuffer *_eventBuffer;
    NSMutableDictionary *_latestExpiredElements;
    NSMutableDictionary *_latestElements;
}




+(id)getExpiredElementKeyForClass:(Class)arg0 andEventSubtype:(NSUInteger)arg1 ;
-(id)getAllTAEventsBetween:(id)arg0 ;
-(id)getAllTAEventsMatchingCompoundPredicate:(id)arg0 ;
-(id)getAllTAEventsOf:(Class)arg0 ;
-(id)getAllTAEventsOf:(Class)arg0 andEventSubtype:(NSUInteger)arg1 ;
-(id)getAllTAEventsOf:(Class)arg0 andEventSubtype:(NSUInteger)arg1 between:(id)arg2 ;
-(id)getAllTAEventsOf:(Class)arg0 between:(id)arg1 ;
-(id)getEarliestEventDate;
-(id)getLatestElementOf:(Class)arg0 ;
-(id)getLatestElementOf:(Class)arg0 andEventSubtype:(NSUInteger)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(void)_updateLatestElement:(id)arg0 ;
-(void)_updateLatestElement:(id)arg0 withKey:(id)arg1 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)purgeWithClock:(id)arg0 ;
-(void)updateLatestExpiredElements:(id)arg0 ;


@end


#endif