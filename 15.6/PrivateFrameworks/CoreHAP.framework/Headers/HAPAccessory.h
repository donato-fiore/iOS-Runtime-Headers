// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORY_H
#define HAPACCESSORY_H

@class HMFObject, HMFMACAddress, NSNumber, NSString, NSArray, NSDate;
@protocol HMFMerging, HMFLocking, HAPAccessoryDelegate, OS_dispatch_queue;


#import "HAPAccessoryServer.h"

@interface HAPAccessory : HMFObject <HMFMerging>

 {
    id<HMFLocking> *_lock;
}


@property (copy) HMFMACAddress *bluetoothClassicMacAddress; // ivar: _bluetoothClassicMacAddress
@property (readonly, copy, nonatomic) NSNumber *category;
@property (readonly) NSInteger communicationProtocol; // ivar: _communicationProtocol
@property (nonatomic) int consecutiveFailedPingCount; // ivar: _consecutiveFailedPingCount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (copy, nonatomic) NSString *productData; // ivar: _productData
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (weak, nonatomic) HAPAccessoryServer *server; // ivar: _server
@property (copy, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier
@property (copy, nonatomic) NSArray *services; // ivar: _services
@property (nonatomic) BOOL shouldDisconnectOnIdle; // ivar: _shouldDisconnectOnIdle
@property (copy, nonatomic) NSNumber *sleepInterval; // ivar: _sleepInterval
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suspendedState; // ivar: _suspendedState
@property (copy, nonatomic) NSDate *timeBecameReachable; // ivar: _timeBecameReachable
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)isAccessoryPairedWithIdentifier:(id)arg0 ;
+(BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg0 ;
+(id)instanceIDForUniqueIdentifier:(id)arg0 ;
+(id)productDataStringFromData:(id)arg0 ;
+(id)serverIdentifierWithUniqueIdentifier:(id)arg0 ;
-(BOOL)_updateAndValidateServices;
-(BOOL)_updateService:(id)arg0 ;
-(BOOL)_validateCharacteristicValues;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)shouldMergeObject:(id)arg0 ;
-(BOOL)updateForAccessoryInformationService;
-(id)characteristicOfType:(id)arg0 serviceType:(id)arg1 ;
-(id)characteristicsOfType:(id)arg0 ;
-(id)init;
-(id)initWithServer:(id)arg0 instanceID:(id)arg1 ;
-(id)initWithServer:(id)arg0 instanceID:(id)arg1 parsedServices:(id)arg2 ;
-(id)servicesOfType:(id)arg0 ;
-(id)shortDescription;
-(void)invalidate;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readValueForCharacteristic:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeCharacteristicValue:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif