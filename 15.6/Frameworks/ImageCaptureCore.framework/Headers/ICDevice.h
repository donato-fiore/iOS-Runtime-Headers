// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICE_H
#define ICDEVICE_H

@class NSString, NSDictionary, NSArray, NSNumber, NSMutableSet, NSMutableDictionary;
@protocol ICDeviceDelegate;

#import <Foundation/Foundation.h>

#import "ICDeviceManager.h"

@interface ICDevice : NSObject

@property (copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property BOOL autoOpenSession; // ivar: _autoOpenSession
@property (copy, nonatomic) NSString *autolaunchApplicationPath; // ivar: _autolaunchApplicationPath
@property (readonly, nonatomic) NSString *bonjourServiceName; // ivar: _bonjourServiceName
@property (readonly, nonatomic) NSString *bonjourServiceType; // ivar: _bonjourServiceType
@property (readonly, nonatomic) NSDictionary *bonjourTXTRecord; // ivar: _bonjourTXTRecord
@property (readonly) BOOL canCancelSoftwareInstallation; // ivar: _canCancelSoftwareInstallation
@property (readonly, nonatomic) NSArray *capabilities;
@property BOOL closeSessionPending; // ivar: _closeSessionPending
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSNumber *connectionID; // ivar: _connectionID
@property (nonatomic) NSObject<ICDeviceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *deviceCapabilities; // ivar: _deviceCapabilities
@property (copy, nonatomic) NSNumber *deviceHandle; // ivar: _deviceHandle
@property (readonly, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (retain, nonatomic) ICDeviceManager *deviceManager; // ivar: _deviceManager
@property (readonly, nonatomic) NSNumber *deviceRef; // ivar: _deviceRef
@property (nonatomic) BOOL hasOpenSession; // ivar: _hasOpenSession
@property (nonatomic) *CGImage icon; // ivar: _icon
@property (readonly, nonatomic) NSString *iconPath; // ivar: _iconPath
@property (copy, nonatomic) NSString *internalUUID; // ivar: _internalUUID
@property (readonly, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (readonly, nonatomic) int ipPort; // ivar: _ipPort
@property (readonly, nonatomic) BOOL isAppleDevice;
@property (readonly, nonatomic) NSString *locationDescription; // ivar: _locationDescription
@property (readonly) int moduleExecutableArchitecture; // ivar: _moduleExecutableArchitecture
@property (readonly, nonatomic) NSString *modulePath; // ivar: _modulePath
@property (readonly, nonatomic) NSString *moduleVersion; // ivar: _moduleVersion
@property (copy, nonatomic) NSString *name; // ivar: _name
@property BOOL openSessionPending; // ivar: _openSessionPending
@property (copy, nonatomic) NSString *persistentIDString; // ivar: _persistentIDString
@property (readonly) BOOL preferred; // ivar: _preferred
@property (copy, nonatomic) NSString *productKind; // ivar: _productKind
@property (readonly, getter=isRemote) BOOL remote; // ivar: _remote
@property (readonly, nonatomic) NSString *serialNumberString; // ivar: _serialNumberString
@property (readonly) CGFloat softwareInstallPercentDone; // ivar: _softwareInstallPercentDone
@property (readonly, copy, nonatomic) NSString *systemSymbolName; // ivar: _systemSymbolName
@property (copy, nonatomic) NSString *transportType; // ivar: _transportType
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) int usbLocationID; // ivar: _usbLocationID
@property (nonatomic) int usbProductID; // ivar: _usbProductID
@property (nonatomic) int usbVendorID; // ivar: _usbVendorID
@property (readonly, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (retain) id *userObject; // ivar: _userObject
@property (copy, nonatomic) NSString *volumePath; // ivar: _volumePath


-(BOOL)canEject;
-(id)description;
-(id)init;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)addCapability:(id)arg0 ;
-(void)dealloc;
-(void)handleCommandCompletionNotification:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 ;
-(void)removeCapability:(id)arg0 ;
-(void)requestCloseSession;
-(void)requestCloseSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestEject;
-(void)requestEjectWithCompletion:(id)arg0 ;
-(void)requestOpenSession;
-(void)requestOpenSessionWithOptions:(id)arg0 ;
-(void)requestOpenSessionWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif