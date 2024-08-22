// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOVERLAYROOMVIEWCONTROLLERQUANTITYCONTEXT_H
#define HKOVERLAYROOMVIEWCONTROLLERQUANTITYCONTEXT_H

@class NSString;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;


#import "HKOverlayRoomViewControllerIntegratedContext.h"

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext

@property (weak, nonatomic) NSObject<HKOverlayRoomViewControllerIntegratedContextDelegate> *optionalDelegate; // ivar: _optionalDelegate
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSString *quantityTypeIdentifier; // ivar: _quantityTypeIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)buildContextItemWithValue:(id)arg0 unit:(id)arg1 valueContext:(id)arg2 forTimeScope:(NSInteger)arg3 ;
-(id)buildOverlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)initWithQuantityIdentifier:(id)arg0 overlayChartController:(id)arg1 applicationItems:(id)arg2 optionalDelegate:(id)arg3 seriesOptions:(NSInteger)arg4 mode:(NSInteger)arg5 ;
-(id)representativeDisplayType;
-(id)unitString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueContextString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(void)fetchCachedDataForTimeScope:(NSInteger)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;


@end


#endif