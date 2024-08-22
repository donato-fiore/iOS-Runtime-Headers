// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMHEALTHTRACKERINTERNAL_H
#define CMHEALTHTRACKERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMHealthTrackerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
}




-(id)init;
-(void)_queryMetMinutesFromDate:(id)arg0 toDate:(id)arg1 handler:(id)arg2 ;
-(void)_queryVO2MaxInputsFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif