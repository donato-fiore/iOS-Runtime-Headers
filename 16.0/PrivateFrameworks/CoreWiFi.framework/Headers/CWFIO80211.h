// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFIO80211_H
#define CWFIO80211_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFIO80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *IONotificationPort _portRef;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    BOOL _isMonitoringEvents;
}


@property (copy) id *eventHandler; // ivar: _eventHandler


-(BOOL)isMonitoringEvents;
-(id)IO80211ControllerInfo;
-(id)IO80211InterfaceInfo:(id)arg0 error:(*id)arg1 ;
-(id)__IO80211InfoMatchingService:(unsigned int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif