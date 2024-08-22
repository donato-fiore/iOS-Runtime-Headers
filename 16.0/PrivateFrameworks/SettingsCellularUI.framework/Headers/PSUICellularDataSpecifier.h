// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARDATASPECIFIER_H
#define PSUICELLULARDATASPECIFIER_H

@class PSSpecifier, NSArray, PSListController, PSSimStatusCache;


#import "PSUICoreTelephonyCallCache.h"
#import "PSUICoreTelephonyDataCache.h"
#import "PSUICellularDataListItemsController.h"
#import "PSUICellularPlanManagerCache.h"
#import "PSUIDeviceWiFiState.h"

@interface PSUICellularDataSpecifier : PSSpecifier

@property (retain, nonatomic) NSArray *cachedPlanItems; // ivar: _cachedPlanItems
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache; // ivar: _callCache
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // ivar: _dataCache
@property (weak, nonatomic) PSUICellularDataListItemsController *detailController; // ivar: _detailController
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSSimStatusCache *simStatusCache; // ivar: _simStatusCache
@property (retain, nonatomic) PSUIDeviceWiFiState *wifiState; // ivar: _wifiState


-(BOOL)isDetailControllerNeeded;
-(id)_isCellularDataEnabled:(id)arg0 ;
-(id)callEndConfirmationSpecifier;
-(id)getLogger;
-(id)initWithHostController:(id)arg0 ;
-(id)initWithHostController:(id)arg0 simStatusCache:(id)arg1 planManagerCache:(id)arg2 callCache:(id)arg3 dataCache:(id)arg4 wifiState:(id)arg5 ;
-(id)isCellularDataEnabled:(id)arg0 ;
-(id)planItemForListItem:(id)arg0 ;
-(id)subscriptionContextForListItem:(id)arg0 ;
-(void)_acceptedDataSwitch:(id)arg0 ;
-(void)_setCellularDataEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)_setCellularDataSwitch:(id)arg0 ;
-(void)acceptedDataSwitch:(id)arg0 ;
-(void)canceledDataSwitch:(id)arg0 ;
-(void)setAirplaneMode:(BOOL)arg0 ;
-(void)setCellularDataEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setCellularDataSwitch:(BOOL)arg0 ;
-(void)updateCachedState;


@end


#endif