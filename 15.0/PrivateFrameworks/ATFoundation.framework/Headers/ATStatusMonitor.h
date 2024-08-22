// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSTATUSMONITOR_H
#define ATSTATUSMONITOR_H

@class NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSHashTable *_statusObservers;
    NSMapTable *_observerDataClasses;
    NSMutableSet *_statuses;
    NSMutableDictionary *_statusDictionary;
}




+(id)sharedMonitor;
-(id)allStatus;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDataClasses:(id)arg0 forObserver:(id)arg1 ;
-(void)updateAssets:(id)arg0 ;
-(void)updateStatus:(id)arg0 ;
-(void)updateStatusValuesWithDictionary:(id)arg0 ;
-(void)updateStatusWithValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif