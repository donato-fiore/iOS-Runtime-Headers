// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHQUERYSERVER_H
#define ACHQUERYSERVER_H

@class HDQueryServer, NSString;
@protocol ACHAchievementStoreObserving;


#import "ACHAchievementStore.h"

@interface ACHQueryServer : HDQueryServer <ACHAchievementStoreObserving>

 {
    ACHAchievementStore *_achievementStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
-(id)_clientProxy;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)achievementStore:(id)arg0 didAddAchievements:(id)arg1 ;
-(void)achievementStore:(id)arg0 didRemoveAchievements:(id)arg1 ;
-(void)achievementStore:(id)arg0 didUpdateAchievements:(id)arg1 ;
-(void)achievementStoreDidFinishInitialFetch:(id)arg0 ;


@end


#endif