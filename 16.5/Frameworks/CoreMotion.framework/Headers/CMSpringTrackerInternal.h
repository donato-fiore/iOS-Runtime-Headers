// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSPRINGTRACKERINTERNAL_H
#define CMSPRINGTRACKERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSpringTrackerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fTrackingStarted;
    id *fHandler;
}




-(BOOL)_isTracking;
-(id)init;
-(void)_handleStartStopResponse:(struct shared_ptr<CLConnectionMessage> )arg0 handler:(id)arg1 ;
-(void)_querySpringDataFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_startWithHandler:(id)arg0 ;
-(void)_stopWithHandler:(id)arg0 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif