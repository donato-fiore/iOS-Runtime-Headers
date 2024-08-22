// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENREGIONMONITOR_H
#define ENREGIONMONITOR_H

@class ENRegionVisit, NSString, CLLocationManager;
@protocol CLLocationManagerDelegate, ENRegionHistoryManagerDelegate, ENRegionMonitorSourceDelegate, ENRegionMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENRegionMonitorCoreLocationDataSource.h"
#import "ENRegionHistoryManager.h"
#import "ENRegionMonitorTelephonyDataSource.h"
#import "ENRegionTestDataSource.h"

@interface ENRegionMonitor : NSObject <CLLocationManagerDelegate, ENRegionHistoryManagerDelegate, ENRegionMonitorSourceDelegate>



@property (nonatomic) NSUInteger authorizationState; // ivar: _authorizationState
@property (retain, nonatomic) ENRegionMonitorCoreLocationDataSource *coreLocationDataSource; // ivar: _coreLocationDataSource
@property (copy, nonatomic) ENRegionVisit *currentRegionVisit; // ivar: _currentRegionVisit
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENRegionMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger exposureNotificationAuthorizationState; // ivar: _exposureNotificationAuthorizationState
@property (retain, nonatomic) CLLocationManager *exposureNotificationLocationManager; // ivar: _exposureNotificationLocationManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL monitoringEnabled; // ivar: _monitoringEnabled
@property (nonatomic) NSUInteger monitoringMode; // ivar: _monitoringMode
@property (retain, nonatomic) ENRegionHistoryManager *regionHistoryManager; // ivar: _regionHistoryManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *regionMonitorQueue; // ivar: _regionMonitorQueue
@property (nonatomic) NSUInteger significantLocationsAuthorizationState; // ivar: _significantLocationsAuthorizationState
@property (retain, nonatomic) CLLocationManager *significantLocationsLocationManager; // ivar: _significantLocationsLocationManager
@property (readonly) Class superclass;
@property (retain, nonatomic) ENRegionMonitorTelephonyDataSource *telephonyDataSource; // ivar: _telephonyDataSource
@property (retain, nonatomic) ENRegionTestDataSource *testRegionDataSource; // ivar: _testRegionDataSource


+(NSUInteger)regionMonitorStateFromAuthorizationStatus:(int)arg0 ;
+(id)locationAuthorizationStatusToString:(int)arg0 ;
+(id)regionMonitorAuthorizationStateToString:(NSUInteger)arg0 ;
+(id)regionMonitorMonitoringModeToString:(NSUInteger)arg0 ;
-(BOOL)_purgeAllRegionHistoryWithError:(*id)arg0 ;
-(BOOL)_purgeRegionsOlderThanDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)purgeAllRegionHistoryWithError:(*id)arg0 ;
-(BOOL)purgeRegionsOlderThanDate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)getAuthorizationState;
-(NSUInteger)getMonitoringMode;
-(id)_getAllRegionVisitsWithError:(*id)arg0 ;
-(id)_getAllRegionsWithError:(*id)arg0 ;
-(id)_getCurrentRegionVisitWithError:(*id)arg0 ;
-(id)getAllRegionVisitsWithError:(*id)arg0 ;
-(id)getAllRegionsWithError:(*id)arg0 ;
-(id)getCurrentRegionVisit;
-(id)getCurrentRegionVisitWithError:(*id)arg0 ;
-(id)init;
-(void)_createCountryDataSource;
-(void)_createLocationManager;
-(void)_createSubdivisionDataSource;
-(void)_createTestDataSource;
-(void)_notifyDelegateOfCurrentRegion;
-(void)_regionDataSource:(id)arg0 updatedWithVisit:(id)arg1 ;
-(void)_resetRegionMonitor;
-(void)_setup;
-(void)_stopAllDataSources;
-(void)_updateRegionHistoryFileStatus;
-(void)currentRegionVisitDidChange:(id)arg0 ;
-(void)disableRegionMonitor;
-(void)enableRegionMonitor;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)regionDataSource:(id)arg0 updatedWithVisit:(id)arg1 ;
-(void)resetRegionMonitor;
-(void)setConfigurationManager:(id)arg0 ;
-(void)setup;
-(void)updateAuthorizationState;
-(void)updateRegionHistoryFileStatus;
-(void)updateRegionMonitorMonitoringMode:(NSUInteger)arg0 ;


@end


#endif