// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRACTIVEDEVICEASSERTIONMONITOR_H
#define NRACTIVEDEVICEASSERTIONMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRActiveDeviceAssertionMonitor : NSObject {
    int _assertionToken;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, nonatomic) BOOL hasActiveAssertion;


+(id)sharedInstance;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif