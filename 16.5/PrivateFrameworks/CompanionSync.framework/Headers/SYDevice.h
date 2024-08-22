// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYDEVICE_H
#define SYDEVICE_H

@class NSString, NSDate, NRDevice, NSUUID, PBCodable;
@protocol NRDevicePropertyObserver, SYStateLoggable;

#import <Foundation/Foundation.h>


@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL cachedConnected; // ivar: _cachedConnected
@property (nonatomic) BOOL cachedIsNearby; // ivar: _cachedIsNearby
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSInteger deviceCode;
@property (nonatomic) BOOL hasCachedConnected; // ivar: _hasCachedConnected
@property (nonatomic) BOOL hasCachedNearby; // ivar: _hasCachedNearby
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastActiveDate; // ivar: _lastActiveDate
@property (readonly, nonatomic) NRDevice *nrDevice; // ivar: _nrDevice
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSUUID *pairingID; // ivar: _pairingID
@property (readonly, copy, nonatomic) NSString *pairingStorePath; // ivar: _pairingStorePath
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFileTransferMessageSend;
@property (readonly, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (readonly, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (readonly, nonatomic, getter=isTargetable) BOOL targetable;


+(id)deviceForIDSDevice:(id)arg0 ;
+(id)deviceForIDSDeviceID:(id)arg0 fromList:(id)arg1 ;
+(id)deviceForNRDevice:(id)arg0 ;
+(id)knownDevices;
+(id)targetableDevice;
-(BOOL)isEqual:(id)arg0 ;
-(id)findMatchingIDSDeviceFromList:(id)arg0 ;
-(id)init;
-(id)initWithNRDevice:(id)arg0 ;
-(void)_updateCachedStateForProperty:(id)arg0 ;
-(void)_updateStateFlagsPostingNotifications:(BOOL)arg0 ;
-(void)device:(id)arg0 propertyDidChange:(id)arg1 fromValue:(id)arg2 ;


@end


#endif