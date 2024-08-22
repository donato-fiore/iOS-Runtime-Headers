// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGSCONTROLLER_H
#define HMACCESSORYSETTINGSCONTROLLER_H

@class NSString;
@protocol HMFLogging, HMAccessorySettingsControllerDataSource, HMAccessorySettingsMessengerFactory;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsMessenger.h"
#import "_HMContext.h"
#import "HMAccessorySettingsMetricsDispatcher.h"

@interface HMAccessorySettingsController : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    HMAccessorySettingsMessenger *_messenger;
}


@property (readonly) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMAccessorySettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<HMAccessorySettingsMessengerFactory> *messengerFactory; // ivar: _messengerFactory
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dataSourceHomeWithHomeIdentifier:(id)arg0 ;
-(id)initWithContext:(id)arg0 messengerFactory:(id)arg1 metricsDispatcher:(id)arg2 ;
-(id)messengerWithHomeUUID:(id)arg0 ;
-(void)updateAccessorySettingWithAccessoryIdentifier:(id)arg0 keyPath:(id)arg1 settingValue:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateAccessorySettingWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif