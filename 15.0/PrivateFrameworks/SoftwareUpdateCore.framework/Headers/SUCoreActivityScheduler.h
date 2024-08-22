// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREACTIVITYSCHEDULER_H
#define SUCOREACTIVITYSCHEDULER_H

@class NSMutableArray, SUCorePersistedState;
@protocol _CDContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreActivityScheduler : NSObject {
    id<_CDContext> *_context;
    NSMutableArray *_activityArray;
    NSMutableArray *_registrationArray;
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}




+(id)sharedInstance;
-(id)_contextStoreRegisteredActivities;
-(id)_copyRegisteredActivities;
-(id)_queue_registrationForActivity:(id)arg0 ;
-(id)copyScheduledActivities;
-(id)initWithPersistedStatePath:(id)arg0 ;
-(id)sharedMemoryStore;
-(void)_loadPersistedRegistrationMap;
-(void)_queue_addRegistration:(id)arg0 forActivity:(id)arg1 ;
-(void)_queue_persistRegistrationMap;
-(void)_queue_removeRegistrationForActivity:(id)arg0 ;
-(void)_registerRegistration:(id)arg0 forActivity:(id)arg1 ;
-(void)_unregisterAllActivitiesWithName:(id)arg0 ;
-(void)_unregisterRegistrationForActivity:(id)arg0 ;
-(void)scheduleActivity:(id)arg0 withHandler:(id)arg1 ;
-(void)unregisterActivitiesWithName:(id)arg0 ;
-(void)unregisterActivity:(id)arg0 ;


@end


#endif