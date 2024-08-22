// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRPROTOCOLOPERATION_H
#define HMMTRPROTOCOLOPERATION_H

@class HAPCharacteristic, NSDictionary, NSString, MTRBaseDevice, MTRDevice, HAPCharacteristicWriteRequestTuple;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "HMMTRClusterDescription.h"
#import "HMMTRDeviceTopology.h"

@interface HMMTRProtocolOperation : NSObject <HMFLogging>



@property (retain, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) HMMTRClusterDescription *characteristicDescription; // ivar: _characteristicDescription
@property (readonly, nonatomic) NSDictionary *clusterIDCharacteristicMap; // ivar: _clusterIDCharacteristicMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (nonatomic) NSUInteger endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTRDevice *matterDevice; // ivar: _matterDevice
@property (readonly) Class superclass;
@property (retain, nonatomic) HMMTRDeviceTopology *topology; // ivar: _topology
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain) HAPCharacteristicWriteRequestTuple *writeRequestTuple; // ivar: _writeRequestTuple


+(id)logCategory;
-(id)initWithOperationOfType:(NSUInteger)arg0 characteristic:(id)arg1 device:(id)arg2 clusterIDCharacteristicMap:(id)arg3 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 characteristic:(id)arg1 device:(id)arg2 primaryArgument:(id)arg3 clusterIDCharacteristicMap:(id)arg4 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 characteristic:(id)arg1 matterDevice:(id)arg2 clusterIDCharacteristicMap:(id)arg3 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 targetCharacteristic:(id)arg1 targetValue:(id)arg2 device:(id)arg3 clusterIDCharacteristicMap:(id)arg4 ;
-(id)initWithOperationOfType:(NSUInteger)arg0 targetCharacteristic:(id)arg1 targetValue:(id)arg2 matterDevice:(id)arg3 clusterIDCharacteristicMap:(id)arg4 ;


@end


#endif