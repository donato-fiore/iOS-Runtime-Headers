// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSDKMANAGEDDEVICE_H
#define MSDKMANAGEDDEVICE_H

@class NSMutableDictionary;
@protocol OS_xpc_object, MSDKManagedDeviceDelegate;

#import <Foundation/Foundation.h>


@interface MSDKManagedDevice : NSObject

@property (retain) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<MSDKManagedDeviceDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_xpc_object> *helperConnection; // ivar: _helperConnection
@property (retain) NSMutableDictionary *xpc_cache; // ivar: _xpc_cache


+(id)sharedInstance;
-(BOOL)cancelOperation;
-(BOOL)checkInBlockingUI;
-(BOOL)clearOwnershipWarning;
-(BOOL)commitNewDemoContent;
-(BOOL)configureWiFi:(id)arg0 password:(id)arg1 ;
-(BOOL)deleteDataBlob;
-(BOOL)inferContentFrozenFromPreferencesFile;
-(BOOL)isContentFrozen;
-(BOOL)isContentFrozen_xpc;
-(BOOL)isDeviceClassSupported;
-(BOOL)isEnrolled;
-(BOOL)lockDemoContent;
-(BOOL)needOwnershipWarning:(*id)arg0 ;
-(BOOL)prepare;
-(BOOL)prepareWithWiFi:(id)arg0 password:(id)arg1 ;
-(BOOL)revertDemoContent;
-(BOOL)saveBluetoothPairingInfo;
-(BOOL)saveScreenSaverConfig:(id)arg0 ;
-(BOOL)setDeviceLanguage:(id)arg0 andRegion:(id)arg1 ;
-(BOOL)setIdleDelay:(NSInteger)arg0 ;
-(BOOL)setStoreOpenAt:(NSInteger)arg0 openMinute:(NSInteger)arg1 closeHour:(NSInteger)arg2 closeMinute:(NSInteger)arg3 ;
-(BOOL)setupConnection;
-(BOOL)setupConnection:(id)arg0 withMachService:(id)arg1 ;
-(BOOL)setupHelperConnection;
-(BOOL)storeDataBlob:(id)arg0 ;
-(BOOL)unenroll:(BOOL)arg0 ;
-(BOOL)unlockDemoContent;
-(NSInteger)getDemoInstallState;
-(NSUInteger)typeOfDemoDevice;
-(id)errorWithXPCDictionary:(id)arg0 ;
-(id)getCacheIdentifier;
-(id)getDeviceOptions;
-(id)getFriendlyDeviceName;
-(id)getPersistentWiFiSsid;
-(id)getScreenSaverConfig;
-(id)getStoreID;
-(id)init;
-(id)readNVRam:(id)arg0 ;
-(id)retrieveDataBlob;
-(id)saveScreenSaverIdleDelay:(id)arg0 ;
-(id)saveStoreHour:(id)arg0 ;
-(void)handleContentUpdateStatus:(char *)arg0 event:(id)arg1 ;
-(void)handleMessage:(id)arg0 ;


@end


#endif