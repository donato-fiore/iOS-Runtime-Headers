// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARDATAOPTIONSCONTROLLER_H
#define PSUICELLULARDATAOPTIONSCONTROLLER_H

@class PSListController, PSSpecifier, CTServiceDescriptor, PSSimStatusCache;


#import "PSUICoreTelephonyDataCache.h"
#import "PSUICellularPlanManagerCache.h"

@interface PSUICellularDataOptionsController : PSListController {
    *__CTServerConnection _serverConnection;
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}


@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // ivar: _dataCache
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) PSSimStatusCache *simStatusCache; // ivar: _simStatusCache


-(id)getCDMARoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatus:(id)arg0 ;
-(id)getDataRoamingStatusForService:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initWithParentSpecifier:(id)arg0 ;
-(id)initWithParentSpecifier:(id)arg0 simStatusCache:(id)arg1 planManagerCache:(id)arg2 dataCache:(id)arg3 ;
-(id)roamingSettingsDescription:(id)arg0 ;
-(id)roamingSpecifiers;
-(id)specifiers;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)roamingOptionsDidChange;
-(void)setCDMARoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDataRoamingEnabledForService:(id)arg0 specifier:(id)arg1 ;


@end


#endif