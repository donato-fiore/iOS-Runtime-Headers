// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMEXERCISEMINUTEINTERNAL_H
#define CMEXERCISEMINUTEINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMExerciseMinuteData.h"

@interface CMExerciseMinuteInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    BOOL fStartedUpdates;
    CMExerciseMinuteData *fMostRecentRecord;
    id *fHandler;
}




-(id)init;
-(void)_queryExerciseMinutesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)_startUpdatesWithHandler:(id)arg0 ;
-(void)_stopUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif