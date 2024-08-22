// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOEXPERIMENTCONFIGURATIONOBSERVERPROXY_H
#define _GEOEXPERIMENTCONFIGURATIONOBSERVERPROXY_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GEOExperimentConfigurationObserverProxy : NSObject {
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSUInteger)observersCount;
-(id)description;
-(id)init;
-(void)forEachObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif