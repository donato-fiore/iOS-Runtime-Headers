// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDEVICE_H
#define ICDEVICE_H

@class NSString, NSArray, NSNumber, NSMutableSet, NSMutableDictionary;
@protocol ICDeviceDelegate;

#import <Foundation/Foundation.h>

#import "ICDeviceManager.h"

@interface ICDevice : NSObject

@property (copy, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property BOOL autoOpenSession; // ivar: _autoOpenSession
@property (copy, nonatomic) NSString *autolaunchApplicationPath; // ivar: _autolaunchApplicationPath
@property (nonatomic) BOOL autolaunchDevice; // ivar: _autolaunchDevice
@property (readonly) BOOL canCancelSoftwareInstallation; // ivar: _canCancelSoftwareInstallation
@property (readonly, nonatomic) NSArray *capabilities;
@property BOOL closeSessionPending; // ivar: _closeSessionPending
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSNumber *connectionID; // ivar: _connectionID
@property (nonatomic) NSObject<ICDeviceDelegate> *delegate;
@property (retain, nonatomic) NSMutableSet *deviceCapabilities; // ivar: _deviceCapabilities
@property (nonatomic) id *deviceDelegate; // ivar: _deviceDelegate
@property (copy, nonatomic) NSNumber *deviceHandle; // ivar: _deviceHandle
@property (readonly, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (retain, nonatomic) ICDeviceManager *deviceManager; // ivar: _deviceManager
@property (readonly, nonatomic) NSNumber *deviceRef; // ivar: _deviceRef
@property (nonatomic) NSInteger fwGUID; // ivar: _fwGUID
@property (nonatomic) BOOL hasOpenSession; // ivar: _hasOpenSession
@property (retain, nonatomic) *CGImage icon; // ivar: _icon
@property (readonly, nonatomic) NSString *iconPath; // ivar: _iconPath
@property (copy, nonatomic) NSString *internalUUID; // ivar: _internalUUID
@property (readonly, nonatomic) BOOL isAppleDevice;
@property (copy, nonatomic) NSString *locationDescription; // ivar: _locationDescription
@property (readonly) int moduleExecutableArchitecture; // ivar: _moduleExecutableArchitecture
@property (copy, nonatomic) NSString *modulePath; // ivar: _modulePath
@property (copy, nonatomic) NSString *moduleVersion; // ivar: _moduleVersion
@property (copy, nonatomic) NSString *name; // ivar: _name
@property BOOL openSessionPending; // ivar: _openSessionPending
@property (copy, nonatomic) NSString *persistentIDString; // ivar: _persistentIDString
@property (readonly) BOOL preferred; // ivar: _preferred
@property (copy, nonatomic) NSString *productKind; // ivar: _productKind
@property (nonatomic) BOOL ready; // ivar: _ready
@property (readonly, getter=isRemote) BOOL remote;
@property (copy, nonatomic) NSString *serialNumberString; // ivar: _serialNumberString
@property (nonatomic) int sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger sessionState; // ivar: _sessionState
@property (readonly) CGFloat softwareInstallPercentDone; // ivar: _softwareInstallPercentDone
@property (nonatomic) BOOL systemReportsEjectable; // ivar: _systemReportsEjectable
@property (copy, nonatomic) NSString *systemSymbolName; // ivar: _systemSymbolName
@property (copy, nonatomic) NSString *transportType; // ivar: _transportType
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) int usbIntefaceClass; // ivar: _usbIntefaceClass
@property (nonatomic) int usbInterfaceProtocol; // ivar: _usbInterfaceProtocol
@property (nonatomic) int usbInterfaceSubClass; // ivar: _usbInterfaceSubClass
@property (nonatomic) int usbLocationID; // ivar: _usbLocationID
@property (nonatomic) int usbProductID; // ivar: _usbProductID
@property (nonatomic) int usbVendorID; // ivar: _usbVendorID
@property (retain, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (copy, nonatomic) NSString *volumePath; // ivar: _volumePath


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)handleCommandCompletion:(id)arg0 ;
-(BOOL)updateProperties:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)addCapability:(id)arg0 ;
-(void)cleanupDeviceWithErrorCode:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)fetchAutolaunchApplicationPath;
-(void)handleCommandCompletionNotification:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 completion:(id)arg1 ;
-(void)imageCaptureEventNotification:(id)arg0 completion:(id)arg1 ;
-(void)notifyObservers:(id)arg0 ;
-(void)removeCapabilities;
-(void)removeCapability:(id)arg0 ;
-(void)requestCloseSession;
-(void)requestCloseSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestEject;
-(void)requestEjectOrDisconnect;
-(void)requestEjectWithCompletion:(id)arg0 ;
-(void)requestOpenSession;
-(void)requestOpenSessionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)requestSendMessage:(unsigned int)arg0 outData:(id)arg1 maxReturnedDataSize:(unsigned int)arg2 sendMessageDelegate:(id)arg3 didSendMessageSelector:(SEL)arg4 contextInfo:(*void)arg5 ;
-(void)requestYield;
-(void)updateCapabilities:(id)arg0 ;


@end


#endif