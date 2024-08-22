// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSTEPCOUNTERPROXY_H
#define CMSTEPCOUNTERPROXY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMStepCounterProxy : NSObject {
    *void fLocationdConnection;
    BOOL fStartedUpdates;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSInteger fStepCountFromStart;
    NSInteger fPrevStepCount;
}




-(id)init;
-(void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)_queryStepCountStartingFromInternal:(id)arg0 to:(id)arg1 toQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg0 updateOn:(NSInteger)arg1 withHandler:(id)arg2 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif