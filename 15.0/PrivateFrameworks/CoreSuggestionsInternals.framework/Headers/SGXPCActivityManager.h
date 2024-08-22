// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGXPCACTIVITYMANAGER_H
#define SGXPCACTIVITYMANAGER_H

@class NSMutableArray, NSMutableDictionary;
@protocol SGXPCActivityManagerProtocol;

#import <Foundation/Foundation.h>


@interface SGXPCActivityManager : NSObject <SGXPCActivityManagerProtocol>

 {
    NSMutableArray *_activities;
    NSMutableArray *_lastCriteria;
    NSMutableArray *_handlers;
    NSMutableDictionary *_currentTasks;
    BOOL _registered;
    _opaque_pthread_mutex_t _lock;
}




+(id)nameForActivityId:(int)arg0 ;
+(id)sharedInstance;
-(BOOL)setState:(id)arg0 state:(NSInteger)arg1 ;
-(BOOL)shouldDefer:(id)arg0 ;
-(NSInteger)getState:(id)arg0 ;
-(id)_taskForActivity:(id)arg0 ;
-(id)activityForActivityId:(int)arg0 ;
-(id)copyCriteria:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerActivitiesWithSystem;
-(void)registerForActivity:(int)arg0 handler:(id)arg1 ;
-(void)setCriteria:(id)arg0 criteria:(id)arg1 forActivity:(int)arg2 ;


@end


#endif