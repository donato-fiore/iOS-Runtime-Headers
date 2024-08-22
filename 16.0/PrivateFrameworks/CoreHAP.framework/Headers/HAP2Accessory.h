// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORY_H
#define HAP2ACCESSORY_H

@class NSString, NSNumber, NSArray;
@protocol HAP2AccessoryPrivate, HAP2Accessory, HAP2PairedAccessoryServer, HAP2PairedAccessoryServerPrivate, HAP2AccessoryDelegate;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"

@interface HAP2Accessory : HAP2LoggingObject <HAP2AccessoryPrivate, HAP2Accessory>



@property (readonly, weak, nonatomic) NSObject<HAP2PairedAccessoryServer> *accessoryServer;
@property (readonly, weak, nonatomic) NSObject<HAP2PairedAccessoryServerPrivate> *accessoryServerPrivate; // ivar: _accessoryServerPrivate
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) NSUInteger connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSNumber *internalSleepIntervalMs; // ivar: _internalSleepIntervalMs
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPrimary) BOOL primary;
@property (copy, nonatomic) NSString *productData; // ivar: _productData
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSArray *services; // ivar: _services
@property (readonly, nonatomic) CGFloat sleepInterval;
@property (readonly) Class superclass;


+(BOOL)validateAccessoryInformationService:(id)arg0 ;
+(BOOL)validateDiscoveredServices:(id)arg0 isPrimary:(BOOL)arg1 ;
+(BOOL)validateProtocolInformationService:(id)arg0 ;
+(id)accessoryWithAccessoryServer:(id)arg0 instanceID:(NSUInteger)arg1 discoveredServices:(id)arg2 ;
-(BOOL)updateDiscoveredServices:(id)arg0 ;
-(id)disableNotificationsForCharacteristics:(id)arg0 completion:(id)arg1 ;
-(id)enableNotificationsForCharacteristics:(id)arg0 completion:(id)arg1 ;
-(id)identifyWithCompletion:(id)arg0 ;
-(id)initWithAccessoryServer:(id)arg0 instanceID:(NSUInteger)arg1 discoveredServices:(id)arg2 ;
-(id)internalSleepInterval;
-(id)readValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(id)writeValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_handleUpdatedAccessoryInformationService:(id)arg0 ;
-(void)_handleUpdatedAccessoryRuntimeInformationService:(id)arg0 ;
-(void)_updateDiscoveredServices:(id)arg0 ;
-(void)characteristicValueChanged:(id)arg0 ;
-(void)setInternalSleepInterval:(id)arg0 ;
-(void)updateConnectionState:(NSUInteger)arg0 ;


@end


#endif