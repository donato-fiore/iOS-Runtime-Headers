// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCLASSICPEER_H
#define CBCLASSICPEER_H

@class NSHashTable, NSNumber, NSData, NSString, NSArray, NSUUID;


#import "CBPeer.h"

@interface CBClassicPeer : CBPeer

@property (nonatomic) unsigned char EQConfigBass; // ivar: _EQConfigBass
@property (nonatomic) BOOL EQConfigEnabled; // ivar: _EQConfigEnabled
@property (nonatomic) unsigned char EQConfigMid; // ivar: _EQConfigMid
@property (nonatomic) unsigned char EQConfigTreble; // ivar: _EQConfigTreble
@property (retain, nonatomic) NSHashTable *L2CAPChannels; // ivar: _L2CAPChannels
@property (nonatomic) BOOL LRDetectionEnabled; // ivar: _LRDetectionEnabled
@property (retain, nonatomic) NSHashTable *RFCOMMChannels; // ivar: _RFCOMMChannels
@property (retain, nonatomic) NSNumber *RSSI; // ivar: _RSSI
@property (retain, nonatomic) NSData *aacpCapabilityBits; // ivar: _aacpCapabilityBits
@property (copy, nonatomic) NSString *addressString; // ivar: _addressString
@property (nonatomic) NSUInteger appleExtendedFeatureBitMask; // ivar: _appleExtendedFeatureBitMask
@property (nonatomic) unsigned int appleFeatureBitMask; // ivar: _appleFeatureBitMask
@property (copy, nonatomic) NSString *appleModelIdentifier; // ivar: _appleModelIdentifier
@property (nonatomic) BOOL autoAnswerCalls; // ivar: _autoAnswerCalls
@property (nonatomic) unsigned char batteryPercentCase; // ivar: _batteryPercentCase
@property (nonatomic) unsigned char batteryPercentCombined; // ivar: _batteryPercentCombined
@property (nonatomic) unsigned char batteryPercentLeft; // ivar: _batteryPercentLeft
@property (nonatomic) unsigned char batteryPercentRight; // ivar: _batteryPercentRight
@property (nonatomic) unsigned char batteryPercentSingle; // ivar: _batteryPercentSingle
@property (nonatomic) BOOL browsingEnabled; // ivar: _browsingEnabled
@property (nonatomic) unsigned int clickHoldInterval; // ivar: _clickHoldInterval
@property (nonatomic) unsigned char clickHoldModeLeft; // ivar: _clickHoldModeLeft
@property (nonatomic) unsigned char clickHoldModeRight; // ivar: _clickHoldModeRight
@property (nonatomic) unsigned char colorID; // ivar: _colorID
@property (copy) id *connectL2CAPCallback; // ivar: _connectL2CAPCallback
@property (copy) id *connectRFCOMMCallback; // ivar: _connectRFCOMMCallback
@property (nonatomic) unsigned short connectionHandle; // ivar: _connectionHandle
@property (nonatomic) unsigned char crownRotationDirection; // ivar: _crownRotationDirection
@property (nonatomic) unsigned char deviceType; // ivar: _deviceType
@property (copy) id *disconnectL2CAPCallback; // ivar: _disconnectL2CAPCallback
@property (copy) id *disconnectRFCOMMCallback; // ivar: _disconnectRFCOMMCallback
@property (nonatomic) unsigned int doubleClickInterval; // ivar: _doubleClickInterval
@property (nonatomic) unsigned char doubleClickMode; // ivar: _doubleClickMode
@property (nonatomic) unsigned short doubleTapAction; // ivar: _doubleTapAction
@property (nonatomic) unsigned short doubleTapActionLeft; // ivar: _doubleTapActionLeft
@property (nonatomic) unsigned short doubleTapActionRight; // ivar: _doubleTapActionRight
@property (nonatomic) unsigned char doubleTapCapability; // ivar: _doubleTapCapability
@property (nonatomic) BOOL inEarDetectionEnabled; // ivar: _inEarDetectionEnabled
@property (nonatomic) NSInteger internalState; // ivar: _internalState
@property (nonatomic) BOOL isAppleAccessoryServer; // ivar: _isAppleAccessoryServer
@property (nonatomic) BOOL isConnectedOverUSB; // ivar: _isConnectedOverUSB
@property (nonatomic) BOOL isDevFused; // ivar: _isDevFused
@property (nonatomic) BOOL isIncoming; // ivar: _isIncoming
@property (nonatomic) unsigned char listeningMode; // ivar: _listeningMode
@property (nonatomic) unsigned int listeningModeConfigs; // ivar: _listeningModeConfigs
@property (nonatomic) unsigned char micMode; // ivar: _micMode
@property (nonatomic) unsigned char modeSupported; // ivar: _modeSupported
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL objectPushEnabled; // ivar: _objectPushEnabled
@property (nonatomic) unsigned char oneBudANCMode; // ivar: _oneBudANCMode
@property (nonatomic) BOOL panEnabled; // ivar: _panEnabled
@property (nonatomic) unsigned char primaryInEarStatus; // ivar: _primaryInEarStatus
@property (nonatomic) unsigned short productID; // ivar: _productID
@property (nonatomic) BOOL remoteTimeSyncEnabled; // ivar: _remoteTimeSyncEnabled
@property (retain, nonatomic) NSData *sdpRecordData; // ivar: _sdpRecordData
@property (nonatomic) unsigned char secondaryInEarStatus; // ivar: _secondaryInEarStatus
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSArray *services; // ivar: _services
@property (nonatomic) unsigned char singleClickMode; // ivar: _singleClickMode
@property (nonatomic) unsigned char smartRoutingEnabled; // ivar: _smartRoutingEnabled
@property (nonatomic) BOOL smartRoutingSupported; // ivar: _smartRoutingSupported
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) unsigned char switchControlMode; // ivar: _switchControlMode
@property (retain, nonatomic) NSArray *syncGroups; // ivar: _syncGroups
@property (nonatomic) unsigned short syncSettings; // ivar: _syncSettings
@property (nonatomic) BOOL traceLogging; // ivar: _traceLogging
@property (retain, nonatomic) NSUUID *trustedUID; // ivar: _trustedUID
@property (nonatomic) unsigned short vendorID; // ivar: _vendorID
@property (nonatomic) unsigned short vendorIDSource; // ivar: _vendorIDSource
@property (nonatomic) unsigned short version; // ivar: _version


-(BOOL)isAACPCapabilityBit:(unsigned int)arg0 ;
-(BOOL)isAppleDevice;
-(BOOL)isAppleFeatureSupported:(unsigned int)arg0 ;
-(BOOL)isGameController;
-(BOOL)isMac;
-(BOOL)isMultiBatteryDevice;
-(BOOL)isNintendoGameController;
-(BOOL)isRFCOMMServiceSupported:(id)arg0 ;
-(BOOL)isReportingBatteryPercent;
-(BOOL)isServiceSupported:(id)arg0 ;
-(BOOL)isSonyGameController;
-(BOOL)isXboxGameController;
-(BOOL)isiPad;
-(BOOL)isiPhone;
-(NSUInteger)hash;
-(id)channelWithID:(unsigned char)arg0 ;
-(id)channelWithPSM:(unsigned short)arg0 ;
-(id)description;
-(id)importServices:(id)arg0 ;
-(id)initWithInfo:(id)arg0 manager:(id)arg1 ;
-(id)service:(id)arg0 ;
-(id)serviceForPSM:(unsigned short)arg0 ;
-(id)serviceForRFCOMMChannelID:(unsigned char)arg0 ;
-(unsigned char)rfcommChannelIDForService:(id)arg0 ;
-(unsigned int)getConnectedServices;
-(unsigned short)psmForService:(id)arg0 ;
-(void)closeL2CAPChannel:(unsigned short)arg0 ;
-(void)closeRFCOMMChannel:(unsigned char)arg0 ;
-(void)configureRFCOMMPortParams:(id)arg0 ;
-(void)dealloc;
-(void)handleDisconnection;
-(void)handleFailedConnection;
-(void)handleGetPeerState:(id)arg0 ;
-(void)handleL2CAPChannelClosed:(id)arg0 ;
-(void)handleL2CAPChannelOpened:(id)arg0 ;
-(void)handleMsg:(int)arg0 args:(id)arg1 ;
-(void)handlePeerUpdated:(id)arg0 ;
-(void)handleRFCOMMChannelClosed:(id)arg0 ;
-(void)handleRFCOMMChannelOpened:(id)arg0 ;
-(void)handleSuccessfulConnection:(id)arg0 ;
-(void)openL2CAPChannel:(unsigned short)arg0 ;
-(void)openRFCOMMChannel:(unsigned char)arg0 ;
-(void)openRFCOMMChannel:(unsigned char)arg0 options:(id)arg1 ;
-(void)sendMsg:(int)arg0 args:(id)arg1 ;
-(void)sendMsg:(int)arg0 requiresConnected:(BOOL)arg1 args:(id)arg2 ;
-(void)setOrphan;


@end


#endif