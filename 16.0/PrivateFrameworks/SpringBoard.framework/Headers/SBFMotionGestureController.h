// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFMOTIONGESTURECONTROLLER_H
#define SBFMOTIONGESTURECONTROLLER_H

@class NSMutableDictionary, CMGestureManager;

#import <Foundation/Foundation.h>


@interface SBFMotionGestureController : NSObject {
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}




+(id)sharedInstance;
-(BOOL)_hasObservers;
-(id)_highestPriorityObservers;
-(id)_observersForPriority:(NSUInteger)arg0 ;
-(id)init;
-(void)_addGestureManager;
-(void)_addGestureObserver:(id)arg0 withPriority:(NSUInteger)arg1 ;
-(void)_enumerateObserversByPriority:(id)arg0 ;
-(void)_notifyObserversOfGesture:(int)arg0 ;
-(void)_removeGestureManager;
-(void)_removeGestureObserver:(id)arg0 ;
-(void)_updateGestureManager;
-(void)addGestureObserver:(id)arg0 ;
-(void)addGestureObserver:(id)arg0 withPriority:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)removeGestureObserver:(id)arg0 ;


@end


#endif