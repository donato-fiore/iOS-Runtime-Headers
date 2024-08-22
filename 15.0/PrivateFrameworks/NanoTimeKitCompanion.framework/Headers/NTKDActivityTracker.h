// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDACTIVITYTRACKER_H
#define NTKDACTIVITYTRACKER_H

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NTKDActivityTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activityIdentifiers;
    NSObject<OS_dispatch_source> *_adjustCriteriaTimer;
    NSObject<OS_dispatch_source> *_removePostWakeActivityTimer;
    BOOL _xpcActivityRegistered;
}




+(id)sharedInstance;
-(id)init;
-(void)_queue_beginActivity:(id)arg0 ;
-(void)_queue_endActivity:(id)arg0 ;
-(void)_queue_setOrUpdateActivityAndTimer;
-(void)beginActivity:(id)arg0 ;
-(void)checkin;
-(void)endActivity:(id)arg0 ;


@end


#endif