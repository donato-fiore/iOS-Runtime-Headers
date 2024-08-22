// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMEMORYPRESSUREMONITOR_H
#define WBSMEMORYPRESSUREMONITOR_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WBSMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}


@property BOOL pressured; // ivar: _pressured


-(id)init;
-(void)dealloc;


@end


#endif