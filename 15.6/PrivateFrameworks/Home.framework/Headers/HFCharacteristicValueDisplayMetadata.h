// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICVALUEDISPLAYMETADATA_H
#define HFCHARACTERISTICVALUEDISPLAYMETADATA_H

@class NSString, NAFuture;

#import <Foundation/Foundation.h>

#import "HFCharacteristicValueDisplayError.h"
#import "HFServiceState.h"

@interface HFCharacteristicValueDisplayMetadata : NSObject

@property (retain, nonatomic) HFCharacteristicValueDisplayError *error; // ivar: _error
@property (nonatomic) NSInteger primaryState; // ivar: _primaryState
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) HFServiceState *serviceState; // ivar: _serviceState
@property (copy, nonatomic) NSString *sortKey; // ivar: _sortKey
@property (retain, nonatomic) NAFuture *splitAccountFuture; // ivar: _splitAccountFuture
@property (nonatomic) NSInteger transitioningPrimaryState; // ivar: _transitioningPrimaryState


+(NSInteger)_unknownStatePriorityForServiceDescriptor:(id)arg0 characteristicReadResponse:(id)arg1 ;
+(id)_errorForSymptomHandler:(id)arg0 isFixingCurrently:(BOOL)arg1 withContextProvider:(id)arg2 ;
+(id)displayMetadataForAccessory:(id)arg0 withContextProvider:(id)arg1 ;
+(id)displayMetadataForMediaProfile:(id)arg0 withContextProvider:(id)arg1 ;
+(id)displayMetadataForService:(id)arg0 characteristicReadResponse:(id)arg1 ;
+(void)_displayAppleIDSplitErrorForMediaProfile:(id)arg0 havingMetadata:(id)arg1 withContextProvider:(id)arg2 ;
+(void)_populateSplitMediaAccountErrorForMedatadata:(id)arg0 withContextProvider:(id)arg1 ;
-(void)dealloc;
-(void)parseActiveStateForServiceType:(id)arg0 response:(id)arg1 ;
-(void)parseAirPurifierResponse:(id)arg0 ;
-(void)parseCurrentTargetPositionForServiceType:(id)arg0 response:(id)arg1 ;
-(void)parseGarageDoorOpenerResponse:(id)arg0 ;
-(void)parseHumidifierDehumidifierResponse:(id)arg0 ;
-(void)parseInformationalSensorWithServiceType:(id)arg0 response:(id)arg1 ;
-(void)parseLockMechanismResponse:(id)arg0 ;
-(void)parsePowerStateForServiceType:(id)arg0 response:(id)arg1 ;
-(void)parseProgammableSwitchOfType:(id)arg0 response:(id)arg1 ;
-(void)parseSecuritySystemResponse:(id)arg0 ;
-(void)parseThermostatResponse:(id)arg0 serviceType:(id)arg1 ;
-(void)parseWarningSensorWithServiceType:(id)arg0 response:(id)arg1 ;


@end


#endif