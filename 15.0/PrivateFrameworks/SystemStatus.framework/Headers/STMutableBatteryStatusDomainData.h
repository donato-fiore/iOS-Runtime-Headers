// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMUTABLEBATTERYSTATUSDOMAINDATA_H
#define STMUTABLEBATTERYSTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STBatteryStatusDomainData.h"

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (copy, nonatomic) NSString *chargingDescription;
@property (nonatomic) NSUInteger chargingDescriptionType;
@property (nonatomic) NSUInteger chargingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger percentCharge;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif