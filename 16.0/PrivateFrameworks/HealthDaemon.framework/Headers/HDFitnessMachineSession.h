// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFITNESSMACHINESESSION_H
#define HDFITNESSMACHINESESSION_H

@class NSArray, _HKFitnessMachine, NSUUID, HKHealthService, NSDate, NSString, NSData;

#import <Foundation/Foundation.h>

#import "HDEnhancedFTMSData.h"
#import "HDFitnessMachineDataCharacteristicBase.h"
#import "HDFitnessMachineStatus.h"
#import "HDHealthServiceOOBInfo.h"
#import "HDFitnessMachineSessionRecoveryConfiguration.h"

@interface HDFitnessMachineSession : NSObject {
    NSArray *_oobDataArray;
}


@property (nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (readonly, nonatomic) BOOL dataTransferPermitted; // ivar: _dataTransferPermitted
@property (readonly, nonatomic) BOOL dataTransferRequirementsComplete;
@property (retain, nonatomic) _HKFitnessMachine *fitnessMachine; // ivar: _fitnessMachine
@property (readonly, nonatomic) NSUUID *fitnessMachineSessionUUID; // ivar: _fitnessMachineSessionUUID
@property (retain, nonatomic) HKHealthService *healthService; // ivar: _healthService
@property (nonatomic) NSUInteger healthServiceSessionIdentifier; // ivar: _healthServiceSessionIdentifier
@property (retain, nonatomic) HDEnhancedFTMSData *initialEnhancedFTMSData; // ivar: _initialEnhancedFTMSData
@property (retain, nonatomic) HDFitnessMachineDataCharacteristicBase *initialMachineData; // ivar: _initialMachineData
@property (retain, nonatomic) HDFitnessMachineStatus *initialMachineStatus; // ivar: _initialMachineStatus
@property (retain, nonatomic) NSDate *machinePreferredUntilDate; // ivar: _machinePreferredUntilDate
@property (retain, nonatomic) NSDate *machineStartDate; // ivar: _machineStartDate
@property (nonatomic) NSUInteger machineState; // ivar: _machineState
@property (retain, nonatomic) NSDate *machineStateUpdateDate; // ivar: _machineStateUpdateDate
@property (readonly, nonatomic) NSArray *nfcConnectionHandoverData;
@property (readonly, nonatomic) NSString *nfcSessionID;
@property (readonly, nonatomic) NSData *nfcSessionIDData; // ivar: _nfcSessionIDData
@property (retain, nonatomic) HDHealthServiceOOBInfo *oobInfo; // ivar: _oobInfo
@property (readonly, nonatomic) HDFitnessMachineSessionRecoveryConfiguration *recoveryConfiguration;
@property (nonatomic) NSInteger serviceStatus; // ivar: _serviceStatus
@property (readonly, nonatomic) BOOL waitingOnActivityType; // ivar: _waitingOnActivityType
@property (readonly, nonatomic) BOOL waitingOnBluetoothConnection; // ivar: _waitingOnBluetoothConnection
@property (nonatomic) BOOL waitingOnInitialMachineData; // ivar: _waitingOnInitialMachineData
@property (nonatomic) BOOL waitingOnInitialMachineStatus; // ivar: _waitingOnInitialMachineStatus
@property (readonly, nonatomic) BOOL waitingOnMFA; // ivar: _waitingOnMFA


+(id)serviceFromRecoveryConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithNFCSessionIDData:(id)arg0 ;
-(id)initWithRecoveryConfiguration:(id)arg0 ;
-(void)markActivityTypeProvided;
-(void)markBluetoothConnectionComplete;
-(void)markDataTransferPermitted;
-(void)markMFAAuthenticated;


@end


#endif