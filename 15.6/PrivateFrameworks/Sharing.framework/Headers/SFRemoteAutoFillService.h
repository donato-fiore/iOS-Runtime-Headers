// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREMOTEAUTOFILLSERVICE_H
#define SFREMOTEAUTOFILLSERVICE_H

@class NSMutableDictionary, NSString, NSData, CUSystemMonitor, NSURL, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFDeviceDiscovery.h"
#import "SFService.h"
#import "SFSession.h"

@interface SFRemoteAutoFillService : NSObject {
    BOOL _activateCalled;
    id *_activateCompletion;
    SFDeviceDiscovery *_discovery;
    int _discoveryState;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSString *_receivedPassword;
    NSString *_receivedUsername;
    BOOL _requestingAutoFill;
    SFService *_service;
    int _serviceState;
    SFSession *_session;
    NSData *_systemBTAddress;
    CUSystemMonitor *_systemMonitor;
    int _systemMonitorState;
    NSURL *_urlForVisualScanning;
}


@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSUInteger discoveredDevices;
@property (copy, nonatomic) id *discoveredDevicesChanged; // ivar: _discoveredDevicesChanged
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) NSString *fixedPIN; // ivar: _fixedPIN
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (readonly, nonatomic) BOOL needsSetup;
@property (copy, nonatomic) id *receivedCredentialsHandler; // ivar: _receivedCredentialsHandler
@property (copy, nonatomic) id *sessionEndedHandler; // ivar: _sessionEndedHandler
@property (copy, nonatomic) id *sessionStartedHandler; // ivar: _sessionStartedHandler
@property (copy, nonatomic) id *showPINHandlerEx; // ivar: _showPINHandlerEx
@property (nonatomic) BOOL unitTesting; // ivar: _unitTesting
@property (copy, nonatomic) NSString *unlocalizedAppName; // ivar: _unlocalizedAppName
@property (copy, nonatomic) id *urlForVisualScanningChanged; // ivar: _urlForVisualScanningChanged
@property (copy, nonatomic) NSString *urlString; // ivar: _urlString


-(id)description;
-(id)init;
-(id)urlForVisualScanning;
-(int)_readyForAutoFillRequest;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_activated;
-(void)_bluetoothAddressChanged;
-(void)_cleanup;
-(void)_completedWithError:(id)arg0 ;
-(void)_discoveryChanged:(id)arg0 ;
-(void)_discoveryFound:(id)arg0 ;
-(void)_discoveryLost:(id)arg0 ;
-(void)_discoveryStart;
-(void)_serviceHandleReceivedContextRequest:(id)arg0 handler:(id)arg1 ;
-(void)_serviceHandleReceivedCredentialRequest:(id)arg0 handler:(id)arg1 ;
-(void)_serviceHandleReceivedRequest:(id)arg0 handler:(id)arg1 ;
-(void)_serviceHidePIN;
-(void)_serviceSessionEnded:(id)arg0 withError:(id)arg1 ;
-(void)_serviceSessionStarted:(id)arg0 ;
-(void)_serviceStart;
-(void)_systemMonitorStart;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)startRequestingAutoFill;
-(void)stopRequestingAutoFill;
-(void)updateURLForVisualScanning;


@end


#endif