// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFOBSERVATIONHELPER_H
#define CSLPRFOBSERVATIONHELPER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface CSLPRFObservationHelper : NSObject {
    NSHashTable *_lock_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger observerCount;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)notifyObserversWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif