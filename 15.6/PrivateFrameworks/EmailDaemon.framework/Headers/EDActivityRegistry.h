// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDACTIVITYREGISTRY_H
#define EDACTIVITYREGISTRY_H

@class NSMutableSet, NSString;
@protocol EFLoggable, EDActivityHookResponder, EMActivityRegistryInterface;

#import <Foundation/Foundation.h>

#import "EDActivityPersistence.h"
#import "EDPersistenceHookRegistry.h"

@interface EDActivityRegistry : NSObject <EFLoggable, EDActivityHookResponder, EMActivityRegistryInterface>

 {
    NSMutableSet *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) EDActivityPersistence *activityPersistence; // ivar: _activityPersistence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly) Class superclass;


+(id)log;
-(id)initWithHookRegistry:(id)arg0 activityPersistence:(id)arg1 ;
-(void)activityWithID:(id)arg0 finishedWithError:(id)arg1 ;
-(void)activityWithID:(id)arg0 setCompletedCount:(NSInteger)arg1 totalCount:(NSInteger)arg2 ;
-(void)activityWithID:(id)arg0 setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)registerActivityObserver:(id)arg0 completion:(id)arg1 ;
-(void)removedActivityWithID:(id)arg0 ;
-(void)startedActivity:(id)arg0 ;


@end


#endif