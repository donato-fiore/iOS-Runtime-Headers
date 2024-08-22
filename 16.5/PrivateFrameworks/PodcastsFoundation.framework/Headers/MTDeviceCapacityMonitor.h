// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTDEVICECAPACITYMONITOR_H
#define MTDEVICECAPACITYMONITOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTDeviceCapacityMonitor : NSObject {
    ? diskAccessQueue;
    ? _capacityChangeObservers;
    ? capacityThreshold;
    ? url;
    ? vfsSource;
    ? ___capacityLevel;
    ? activeObserver;
    ? _activeNotificationName;
}


@property (nonatomic, copy) NSString *activeNotificationName;


+(id)shared;
-(NSInteger)addCapacityChangeObserverWithOptions:(NSInteger)arg0 callback:(id)arg1 ;
-(id)init;
-(void)capacityLevel:(id)arg0 ;
-(void)dealloc;
-(void)removeCapacityChangeObserverWith:(NSInteger)arg0 ;


@end


#endif