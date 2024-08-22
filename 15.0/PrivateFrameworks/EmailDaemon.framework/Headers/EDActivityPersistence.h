// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDACTIVITYPERSISTENCE_H
#define EDACTIVITYPERSISTENCE_H

@class NSMutableDictionary;
@protocol EDActivityHookResponder;

#import <Foundation/Foundation.h>


@interface EDActivityPersistence : NSObject {
    NSMutableDictionary *_currentActivities;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSObject<EDActivityHookResponder> *activityHookResponder; // ivar: _activityHookResponder


-(id)currentActivities;
-(id)initWithHookResponder:(id)arg0 ;
-(id)startActivityOfType:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)activityWithID:(id)arg0 finishedWithError:(id)arg1 ;
-(void)activityWithID:(id)arg0 setCompletedCount:(NSInteger)arg1 totalCount:(NSInteger)arg2 ;
-(void)activityWithID:(id)arg0 setUserInfoObject:(id)arg1 forKey:(id)arg2 ;


@end


#endif