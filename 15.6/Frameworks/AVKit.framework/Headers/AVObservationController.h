// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOBSERVATIONCONTROLLER_H
#define AVOBSERVATIONCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AVObservationController : NSObject {
    os_unfair_lock_s _unfairLock;
    NSMutableDictionary *_proxyObserversByTokens;
    NSMutableDictionary *_notificationObservers;
    NSMutableDictionary *_notificationCenters;
    id *_owner;
}




-(id)initWithOwner:(id)arg0 ;
-(id)startObserving:(id)arg0 keyPath:(id)arg1 includeInitialValue:(BOOL)arg2 observationHandler:(id)arg3 ;
-(id)startObserving:(id)arg0 keyPath:(id)arg1 observationHandler:(id)arg2 ;
-(id)startObserving:(id)arg0 keyPaths:(id)arg1 includeInitialValue:(BOOL)arg2 includeChanges:(BOOL)arg3 observationHandler:(id)arg4 ;
-(id)startObserving:(id)arg0 keyPaths:(id)arg1 includeInitialValue:(BOOL)arg2 observationHandler:(id)arg3 ;
-(id)startObserving:(id)arg0 keyPaths:(id)arg1 observationHandler:(id)arg2 ;
-(void)_stopAllObservation;
-(void)dealloc;
-(void)startObservingNotificationForName:(id)arg0 object:(id)arg1 notificationCenter:(id)arg2 observationHandler:(id)arg3 ;
-(void)stopAllObservation;
-(void)stopObserving:(id)arg0 ;


@end


#endif