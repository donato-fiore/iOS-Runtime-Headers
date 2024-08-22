// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONTESTINGMANAGER_H
#define SBAPPLICATIONTESTINGMANAGER_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBApplicationTestingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
}


@property (copy, nonatomic) NSString *currentTestName; // ivar: _currentTestName
@property (readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions; // ivar: _idleTimerDisableAssertions
@property (copy, nonatomic) NSString *scrollTestActiveSubtest; // ivar: _scrollTestActiveSubtest


+(id)sharedInstance;
-(id)init;
-(void)_handleTestEnded;
-(void)_installTestEndedHandler:(id)arg0 ;
-(void)_prepareForTestStartup:(id)arg0 ;
-(void)installNotificationObserverForNotificationName:(id)arg0 forOneNotification:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)installNotificationObserverForNotificationName:(id)arg0 notificationCenter:(id)arg1 forOneNotification:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)markUserLaunchInitiationTime;
-(void)setupKeyboardAnimationSubTestsForTestName:(id)arg0 ;


@end


#endif