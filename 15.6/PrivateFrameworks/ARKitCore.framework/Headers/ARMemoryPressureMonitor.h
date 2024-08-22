// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMEMORYPRESSUREMONITOR_H
#define ARMEMORYPRESSUREMONITOR_H

@protocol OS_dispatch_source, ARMemoryPressureMonitorDelegate;

#import <Foundation/Foundation.h>


@interface ARMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureEventSource;
}


@property (weak, nonatomic) NSObject<ARMemoryPressureMonitorDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)dealloc;


@end


#endif