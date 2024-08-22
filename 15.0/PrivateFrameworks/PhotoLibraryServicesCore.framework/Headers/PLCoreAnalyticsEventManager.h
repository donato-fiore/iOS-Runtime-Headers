// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCOREANALYTICSEVENTMANAGER_H
#define PLCOREANALYTICSEVENTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCoreAnalyticsEventManager : NSObject {
    NSMutableDictionary *_eventMap;
    os_unfair_lock_s _lock;
}




-(CGFloat)startRecordingTimedEventToken;
-(id)_eventForEventName:(id)arg0 ;
-(id)description;
-(id)init;
-(id)rawEventForEventName:(id)arg0 ;
-(id)valueForKey:(id)arg0 onEventWithName:(id)arg1 ;
-(void)_setPayloadValue:(id)arg0 forKey:(id)arg1 onEventWithName:(id)arg2 eventBlock:(id)arg3 ;
-(void)addRecordingTimedEventSnippetWithToken:(CGFloat)arg0 forKey:(id)arg1 onEventWithName:(id)arg2 ;
-(void)mergePayload:(id)arg0 onEventWithName:(id)arg1 ;
-(void)publishAllEvents;
-(void)publishEventWithName:(id)arg0 ;
-(void)removeEventWithName:(id)arg0 ;
-(void)removePayloadValueForKey:(id)arg0 onEventWithName:(id)arg1 ;
-(void)setPayloadValue:(id)arg0 forKey:(id)arg1 onEventWithName:(id)arg2 ;
-(void)setPayloadValue:(id)arg0 forKey:(id)arg1 onlyOnExistingEventWithName:(id)arg2 ;
-(void)stopRecordingTimedEventWithToken:(CGFloat)arg0 forKey:(id)arg1 onEventWithName:(id)arg2 ;


@end


#endif