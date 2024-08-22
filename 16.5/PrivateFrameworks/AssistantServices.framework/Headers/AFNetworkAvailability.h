// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFNETWORKAVAILABILITY_H
#define AFNETWORKAVAILABILITY_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    AvailabilityState _state;
    NSHashTable *_observers;
}




+(id)sharedAvailability;
-(BOOL)isAvailable;
-(id)init;
-(void)_availabilityChanged;
-(void)_clearState;
-(void)_notifyObservers;
-(void)_startObservingAvailability;
-(void)_stopObservingAvailability;
-(void)_updateState;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif