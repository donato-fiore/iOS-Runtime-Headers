// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMAUDIOVIEWCONTROLLER_H
#define HKOVERLAYROOMAUDIOVIEWCONTROLLER_H

@class NSNumber, NSMutableArray, NSString;
@protocol HKAudioExposureDevicesDataSourceObserver, HKOverlayRoomTrendModelProviding;


#import "HKOverlayRoomViewController.h"
#import "HKAudioExposureDevicesDataSource.h"
#import "HKChartSummaryTrendModel.h"

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver, HKOverlayRoomTrendModelProviding>

 {
    NSNumber *_preferredOverlayIndex;
}


@property (retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource; // ivar: _audioExposureDevicesDataSource
@property (retain, nonatomic) NSMutableArray *contextDelegates; // ivar: _contextDelegates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowingUnattenuatedOverlayPill; // ivar: _isShowingUnattenuatedOverlayPill
@property (readonly, nonatomic) NSInteger preferredOverlay; // ivar: _preferredOverlay
@property (readonly, nonatomic) NSString *quantityTypeIdentifier; // ivar: _quantityTypeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel; // ivar: _trendModel


-(BOOL)_isAudioExposureDevicesSupported;
-(BOOL)_isEnvironmentalAudioExposureRoom;
-(BOOL)_isHeadphoneAudioExposureRoom;
-(BOOL)_shouldShowUnattenuatedOverlayPill;
-(BOOL)supportsShowAllFilters;
-(NSInteger)_initialPillForPreference:(NSInteger)arg0 ;
-(id)_buildAudioAverageDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 averageOverVisibleRange:(BOOL)arg3 attenuated:(BOOL)arg4 ;
-(id)_buildAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_buildGranularAverageDataSourceTitleFromTimeScope:(SEL)arg0 ;
-(id)_headphonePredicateForDevices:(id)arg0 withName:(id)arg1 ;
-(id)_makeHeadphoneDeviceFiltersUsingContextCreator:(id)arg0 ;
-(id)_unattenuatedBaseDisplayTypeForPrimaryDisplayType:(id)arg0 applicationItems:(id)arg1 ;
-(id)_userInfoCreationBlockForLEQ:(SEL)arg0 ;
-(id)contextSectionContainersForMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)controllerTitleWithApplicationItems:(id)arg0 ;
-(id)createChartOverlayViewController;
-(id)createViewControllerForMode:(NSInteger)arg0 displayDate:(id)arg1 applicationItems:(id)arg2 ;
-(id)getChartSummaryTrendModelToModify;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 identifier:(id)arg3 preferredOverlay:(NSInteger)arg4 audioExposureDeviceDataSource:(id)arg5 trendModel:(id)arg6 ;
-(id)initWithDisplayDate:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 identifier:(id)arg3 preferredOverlay:(NSInteger)arg4 trendModel:(id)arg5 ;
-(id)initialSelectedContextForMode:(NSInteger)arg0 containerIndex:(NSInteger)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg0 ;
-(id)showAllFiltersButtonTitle;
-(void)_registerForAudioExposureDeviceUpdates;
-(void)_reloadAudioExposureDevices;
-(void)_setupAudioExposureDataSourceIfNeeded;
-(void)audioExposureDataSourceIsReady:(id)arg0 ;
-(void)sampleTypeDateRangeController:(id)arg0 didUpdateDateRanges:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif