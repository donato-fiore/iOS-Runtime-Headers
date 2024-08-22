// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDFETCHEDACCESSORYSETTINGSCONTROLLER_H
#define HMDFETCHEDACCESSORYSETTINGSCONTROLLER_H

@class NSString, NSMutableSet;
@protocol HMDFetchedSettingsDriverDelegate, HMFLogging, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMDFetchedAccessorySettingsControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDFetchedAccessorySettingsControllerMutableKeyPathMap.h"

@interface HMDFetchedAccessorySettingsController : NSObject <HMDFetchedSettingsDriverDelegate, HMFLogging, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider>



@property (readonly) NSObject<HMDFetchedAccessorySettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDFetchedAccessorySettingsControllerMutableKeyPathMap *driverMap; // ivar: _driverMap
@property (readonly) NSUInteger hash;
@property (retain) NSMutableSet *pendingFetchKeyPaths; // ivar: _pendingFetchKeyPaths
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 drivers:(id)arg2 ;
-(void)driver:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)driverDidReload:(id)arg0 ;
-(void)fetchSettingsForKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)languageValueListWithCompletion:(id)arg0 ;
-(void)start;
-(void)updateSettingWithKeyPath:(id)arg0 settingValue:(id)arg1 completion:(id)arg2 ;


@end


#endif