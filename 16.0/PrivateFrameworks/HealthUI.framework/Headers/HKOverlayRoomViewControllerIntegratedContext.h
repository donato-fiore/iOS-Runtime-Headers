// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMVIEWCONTROLLERINTEGRATEDCONTEXT_H
#define HKOVERLAYROOMVIEWCONTROLLERINTEGRATEDCONTEXT_H

@class NSString, NSMutableDictionary, HKSampleType;
@protocol HKOverlayContext;

#import <Foundation/Foundation.h>

#import "HKOverlayRoomApplicationItems.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"

@interface HKOverlayRoomViewControllerIntegratedContext : NSObject <HKOverlayContext>



@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // ivar: _applicationItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *displayTypesForTimeScopes; // ivar: _displayTypesForTimeScopes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem; // ivar: _lastUpdatedContextItem
@property (retain, nonatomic) HKSampleType *monitoringSampleType; // ivar: _monitoringSampleType
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (nonatomic) NSInteger overlayMode; // ivar: _overlayMode
@property (readonly) Class superclass;


+(id)distributionContextWithStyle:(NSInteger)arg0 namedPredicate:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 options:(NSInteger)arg5 mode:(NSInteger)arg6 ;
+(id)quantityContextWithIdentifier:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 optionalDelegate:(id)arg3 seriesOptions:(NSInteger)arg4 mode:(NSInteger)arg5 ;
+(id)quantityContextWithIdentifier:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 optionalDelegate:(id)arg3 seriesOptions:(NSInteger)arg4 mode:(NSInteger)arg5 optionalBaseDisplayType:(id)arg6 ;
-(BOOL)_obsoleteDateRange:(id)arg0 ;
-(id)_buildMonitoringSampleType;
-(id)_minMaxValueFromChartPoints:(id)arg0 displayType:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)buildContextItemWithValue:(id)arg0 unit:(id)arg1 valueContext:(id)arg2 forTimeScope:(NSInteger)arg3 ;
-(id)buildOverlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)contextItemForLastUpdate;
-(id)initWithOverlayChartController:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)representativeDisplayType;
-(id)sampleTypeForDateRangeUpdates;
-(id)unitString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueContextString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(void)fetchCachedDataForTimeScope:(NSInteger)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif