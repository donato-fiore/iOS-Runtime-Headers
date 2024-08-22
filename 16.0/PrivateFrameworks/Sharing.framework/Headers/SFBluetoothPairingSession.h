// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFBLUETOOTHPAIRINGSESSION_H
#define SFBLUETOOTHPAIRINGSESSION_H

@class WPClient, NSString, NSData;
@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFBluetoothPairingSession : NSObject {
    char _btAddrStr;
    BOOL _btConfigured;
    BOOL _btConnecting;
    *BTDeviceImpl _btDevice;
    BOOL _btDisconnected;
    *BTPairingAgentImpl _btPairingAgent;
    BOOL _btPairingAgentStarted;
    *BTSessionImpl _btSession;
    BOOL _btSessionAddedServiceCallback;
    BOOL _btSessionAttaching;
    BOOL _btStarted;
    BOOL _invalidateCalled;
    unsigned int _retryCount;
    BOOL _retryOnDetach;
    NSObject<OS_dispatch_source> *_retryTimer;
    CGFloat _startTime;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_os_transaction> *_transaction;
    *LogCategory _ucat;
    WPClient *_wpClient;
}


@property (nonatomic) BOOL aggregate; // ivar: _aggregate
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL connectOnly; // ivar: _connectOnly
@property (copy, nonatomic) NSString *deviceAddress; // ivar: _deviceAddress
@property (readonly, nonatomic) unsigned int deviceVersion; // ivar: _deviceVersion
@property (nonatomic) BOOL disconnectOnly; // ivar: _disconnectOnly
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) NSString *guestAddress; // ivar: _guestAddress
@property (copy, nonatomic) NSData *guestKey; // ivar: _guestKey
@property (nonatomic) BOOL guestMode; // ivar: _guestMode
@property (readonly, nonatomic) BOOL inEarDetection; // ivar: _inEarDetection
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL softwareVolume; // ivar: _softwareVolume
@property (nonatomic) BOOL unpairOnly; // ivar: _unpairOnly
@property (nonatomic) BOOL userNotInContacts; // ivar: _userNotInContacts


-(id)init;
-(int)_btEnsureStarted;
-(void)_activate;
-(void)_btDeletePairingAndRetry;
-(void)_btEnsureStopped;
-(void)_completed:(int)arg0 ;
-(void)_invalidate;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif