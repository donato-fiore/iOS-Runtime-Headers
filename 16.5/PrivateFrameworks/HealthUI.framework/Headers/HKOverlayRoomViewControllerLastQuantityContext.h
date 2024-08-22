// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYROOMVIEWCONTROLLERLASTQUANTITYCONTEXT_H
#define HKOVERLAYROOMVIEWCONTROLLERLASTQUANTITYCONTEXT_H

@class NSString;
@protocol HKOverlayContext;

#import <Foundation/Foundation.h>

#import "HKOverlayRoomApplicationItems.h"
#import "HKInteractiveChartOverlayNamedDataSource.h"
#import "HKDisplayTypeContextItem.h"
#import "HKInteractiveChartOverlayViewController.h"
#import "HKDisplayType.h"

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext>



@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems; // ivar: _applicationItems
@property (nonatomic) BOOL attenuated; // ivar: _attenuated
@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource; // ivar: _cacheDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem; // ivar: _lastUpdatedContextItem
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // ivar: _overlayChartController
@property (retain, nonatomic) HKDisplayType *overlayDisplayType; // ivar: _overlayDisplayType
@property (nonatomic) NSInteger overlayMode; // ivar: _overlayMode
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_buildContextWithTime:(id)arg0 value:(id)arg1 isUnitIncludedInValue:(BOOL)arg2 ;
-(id)_buildFullTitle:(id)arg0 ;
-(id)_buildLastQuantityDisplayType;
-(id)_buildLastValueDataSourceWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 ;
-(id)_colorForDisplayType:(id)arg0 ;
-(id)_stringValueFromQuantity:(id)arg0 unit:(id)arg1 isUnitIncludedInValue:(*BOOL)arg2 ;
-(id)contextItemForLastUpdate;
-(id)initWithOverlayChartController:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 ;
-(id)initWithOverlayChartController:(id)arg0 applicationItems:(id)arg1 mode:(NSInteger)arg2 attenuated:(BOOL)arg3 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)invalidateContextItem;
-(void)overlayStateDidChange:(BOOL)arg0 contextItem:(id)arg1 chartController:(id)arg2 ;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif