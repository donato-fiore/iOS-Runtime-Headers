// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUOBSERVATORY_H
#define NUOBSERVATORY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUObservatory : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableArray *_observations;
}




-(id)addObserverForKey:(NSInteger)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)init;
-(void)_addObservation:(id)arg0 ;
-(void)_notifyAllObserversForKey:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_removeObserver:(id)arg0 forKey:(NSInteger)arg1 ;
-(void)addObserver:(id)arg0 forKey:(NSInteger)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)notifyAllObserversForKey:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forKey:(NSInteger)arg1 ;


@end


#endif