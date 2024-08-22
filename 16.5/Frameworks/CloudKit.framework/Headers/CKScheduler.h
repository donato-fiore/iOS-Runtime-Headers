// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSCHEDULER_H
#define CKSCHEDULER_H

@class NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_xpcActivityRegisterGroup;
    NSMutableDictionary *_handlersByCKActivityIdentifier;
}


@property (copy) NSNumber *fakeDeviceCount; // ivar: _fakeDeviceCount
@property (readonly, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier; // ivar: _xpcActivitiesByCKActivityIdentifier


+(id)activityFromXPCActivity:(id)arg0 ;
+(id)identifierWithImmediateInvocationForIdentifier:(id)arg0 ;
+(id)sharedScheduler;
+(id)xpcActivityIdentifierForCKActivityIdentifier:(id)arg0 ;
-(BOOL)hasPendingActivityWithActivityIdentifier:(id)arg0 ;
-(BOOL)isXPCActivityPending:(id)arg0 ;
-(NSInteger)currentPriorityForActivityIdentifier:(id)arg0 ;
-(id)_init;
-(id)activityForActivityIdentifier:(id)arg0 ;
-(id)init;
-(id)xpcActivityForActivityWithIdentifier:(id)arg0 ;
-(void)cancelActivityWithIdentifier:(id)arg0 ;
-(void)getSuggestedXPCActivityCriteriaForActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAsyncOnQueue:(id)arg0 ;
-(void)registerActivityIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)registerActivityIdentifier:(id)arg0 replaceExistingHandler:(BOOL)arg1 handler:(id)arg2 ;
-(void)setXPCActivity:(id)arg0 forActivityIdentifier:(id)arg1 ;
-(void)submitActivity:(id)arg0 ;
-(void)unregisterActivityIdentifier:(id)arg0 ;
-(void)unregisterHandlerForActivityIdentifier:(id)arg0 ;


@end


#endif