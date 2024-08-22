// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBTHERMALMONITOR_H
#define DBTHERMALMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBThermalMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) NSUInteger coldLevel; // ivar: _coldLevel
@property (nonatomic) int coldToken; // ivar: _coldToken
@property (nonatomic) NSUInteger hotLevel; // ivar: _hotLevel
@property (nonatomic) int hotToken; // ivar: _hotToken
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isThermalBlocked) BOOL thermalBlocked; // ivar: _thermalBlocked


-(id)init;
-(void)_startListeningForThermalEvents;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif