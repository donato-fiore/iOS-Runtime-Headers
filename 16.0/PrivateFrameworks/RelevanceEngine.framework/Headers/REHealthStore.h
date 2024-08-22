// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHEALTHSTORE_H
#define REHEALTHSTORE_H

@class HKHealthStore;
@protocol OS_dispatch_queue;


#import "RESingleton.h"

@interface REHealthStore : RESingleton {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_isClockHostApp;
-(id)_createStore;
-(id)_init;
-(void)accessHealthStore:(id)arg0 ;


@end


#endif