// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPSETTINGSCONTROLLER_H
#define HMMEDIAGROUPSETTINGSCONTROLLER_H

@class NSString;
@protocol HMEEventConsumer, HMFLogging, HMMediaGroupSettingsControllerDataSource, HMMediaGroupSettingsControllerDelegate, HMMediaGroupSettingsKeyPathsProviding, HMESubscriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMAccessorySettingsController.h"

@interface HMMediaGroupSettingsController : NSObject <HMEEventConsumer, HMFLogging>



@property (readonly) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMMediaGroupSettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaGroupSettingsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMediaGroupSettingsKeyPathsProviding> *keyPathsProvider; // ivar: _keyPathsProvider
@property (readonly) HMAccessorySettingsController *settingsController; // ivar: _settingsController
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_topicsForGroupIdentifier:(id)arg0 ;
-(id)initWithContext:(id)arg0 subscriptionProvider:(id)arg1 dataSource:(id)arg2 keyPathsProvider:(id)arg3 settingsController:(id)arg4 workQueue:(id)arg5 ;
-(void)_didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)subscribeToGroup:(id)arg0 ;
-(void)updateGroup:(id)arg0 keyPath:(id)arg1 settingValue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif