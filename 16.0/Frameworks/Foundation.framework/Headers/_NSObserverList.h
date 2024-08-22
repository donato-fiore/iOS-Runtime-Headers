// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSOBSERVERLIST_H
#define _NSOBSERVERLIST_H


#import <Foundation/Foundation.h>


@interface _NSObserverList : NSObject {
    id *_owner;
    id *_observers;
    uint8_t _observerCount;
    os_unfair_lock_s _observersLock;
}




-(id)debugDescription;
-(id)description;
-(id)init;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;
-(void)finishObserving;
-(void)removeObservation:(id)arg0 ;


@end


#endif