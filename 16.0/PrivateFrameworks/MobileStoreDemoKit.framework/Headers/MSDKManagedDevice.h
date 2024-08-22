// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(BOOL)_isContentFrozen_xpc:(*id)arg0 checkDemo:(BOOL)arg1 ;
-(BOOL)_isEnrolled:(*id)arg0 checkDemo:(BOOL)arg1 ;
-(BOOL)_needOwnershipWarning:(*id)arg0 error:(*id)arg1 ;
-(BOOL)_prepareWithOptions:(id)arg0 ;
-(BOOL)_unenrollWithOptions:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_unlockDemoContentWithOptions:(id)arg0 outError:(*id)arg1 ;
-(BOOL)cancelOperation;
-(BOOL)checkInBlockingUI;
-(BOOL)clearOwnershipWarning;
-(BOOL)collectAppUsageWithSessionStart:(id)arg0 andEnd:(id)arg1 ;
-(BOOL)commitNewDemoContent;
-(BOOL)configureWiFi:(id)arg0 password:(id)arg1 ;
-(BOOL)deleteDataBlob;
-(BOOL)disconnectAndForgetWiFi:(*id)arg0 ;
-(BOOL)inferContentFrozenFromPreferencesFile;
-(BOOL)isBetterTogetherDemoDevice;
-(BOOL)isContentFrozen;
-(BOOL)isContentFrozen:(*id)arg0 ;
-(BOOL)isContentFrozen_xpc;
-(BOOL)isDeviceClassSupported;
-(BOOL)isEnrolled;
-(BOOL)isEnrolled:(*id)arg0 ;
-(BOOL)lockDemoContent;
-(BOOL)needOwnershipWarning:(*id)arg0 ;
-(BOOL)needOwnershipWarning:(*id)arg0 error:(*id)arg1 ;
-(BOOL)prepare;
-(BOOL)prepareWithOptions:(id)arg0 ;
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
-(BOOL)unenrollWithOptions:(id)arg0 outError:(*id)arg1 ;
-(BOOL)unlockDemoContent;
-(BOOL)unlockDemoContentWithOptions:(id)arg0 outError:(*id)arg1 ;
-(NSInteger)getDemoInstallState;
-(NSUInteger)_typeOfDemoDevice:(*id)arg0 checkDemo:(BOOL)arg1 ;
-(NSUInteger)typeOfDemoDevice;
-(NSUInteger)typeOfDemoDevice:(*id)arg0 ;
-(id)_getCurrentNetworkInfoForKeys:(id)arg0 outError:(*id)arg1 ;
-(id)_getDeviceOptions:(*id)arg0 checkDemo:(BOOL)arg1 ;
-(id)_getStoreID:(*id)arg0 checkDemo:(BOOL)arg1 ;
-(id)errorWithXPCDictionary:(id)arg0 ;
-(id)getCacheIdentifier;
-(id)getCurrentNetworkInfoForKeys:(id)arg0 outError:(*id)arg1 ;
-(id)getDeviceOptions;
-(id)getDeviceOptions:(*id)arg0 ;
-(id)getFriendlyDeviceName;
-(id)getPersistentWiFiSsid;
-(id)getScreenSaverConfig;
-(id)getStoreID;
-(id)getStoreID:(*id)arg0 ;
-(id)init;
-(id)readNVRam:(id)arg0 ;
-(id)retrieveDataBlob;
-(id)saveScreenSaverIdleDelay:(id)arg0 ;
-(id)saveStoreHour:(id)arg0 ;
-(void)_handleCheckInXPCResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleMarkAsNotDemoXPCResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleSearchXPCResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)checkInWithCompletion:(id)arg0 ;
-(void)handleContentUpdateStatus:(char *)arg0 event:(id)arg1 ;
-(void)handleMessage:(id)arg0 ;
-(void)markAsNotDemoWithCompletion:(id)arg0 ;
-(void)searchStoreWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif