// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCHMSERVICEWRAPPER_H
#define TVRCHMSERVICEWRAPPER_H

@class HMAccessory, HMCharacteristic, NSString, HMHome, HMService;
@protocol HMAccessoryDelegate, TVRCHMServiceWrapperDelegate;

#import <Foundation/Foundation.h>


@interface TVRCHMServiceWrapper : NSObject <HMAccessoryDelegate>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMCharacteristic *activeCharacteristic; // ivar: _activeCharacteristic
@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRCHMServiceWrapperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) BOOL sentWakeKey; // ivar: _sentWakeKey
@property (retain, nonatomic) HMService *service; // ivar: _service
@property (retain, nonatomic) HMCharacteristic *serviceCharacteristic; // ivar: _serviceCharacteristic
@property (readonly) Class superclass;
@property (nonatomic) BOOL volumeControlSupported; // ivar: _volumeControlSupported
@property (retain, nonatomic) HMCharacteristic *volumeSelectorCharacteristic; // ivar: _volumeSelectorCharacteristic


+(id)wrapperWithService:(id)arg0 ;
-(BOOL)supportsInfoKey;
-(BOOL)supportsVolumeControl;
-(NSInteger)_remoteKeyForTVRCButton:(id)arg0 ;
-(id)_televisionServiceForAccessory:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(void)_checkVolumeServicesForAccessory:(id)arg0 ;
-(void)_disconnectWithError:(id)arg0 ;
-(void)_sendRemoteKey:(NSInteger)arg0 ;
-(void)_sendVolumeKey:(BOOL)arg0 ;
-(void)_sendWakeKey;
-(void)_serviceNameChanged:(id)arg0 ;
-(void)_serviceRemoved:(id)arg0 ;
-(void)_setCharacteristicsForService:(id)arg0 ;
-(void)_startObservingServiceNotifications;
-(void)_stopObservingServiceNotifications;
-(void)_writeValue:(id)arg0 toCharacteristic:(id)arg1 ;
-(void)connect;
-(void)disconnect;
-(void)sendButtonEvent:(id)arg0 ;


@end


#endif