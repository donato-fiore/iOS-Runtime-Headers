// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSREACHABILITY_H
#define DNDSREACHABILITY_H

@class NSHashTable;
@protocol OS_dispatch_source, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSReachability : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *debounceTimer; // ivar: _debounceTimer
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (nonatomic, getter=isInitialized) BOOL initialized; // ivar: _initialized
@property (nonatomic) BOOL lastInformedReachability; // ivar: _lastInformedReachability
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable


+(id)commonReachability;
-(id)init;
-(void)_informDelegates;
-(void)_updateHandlerForPath:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)setupPathMonitor;


@end


#endif