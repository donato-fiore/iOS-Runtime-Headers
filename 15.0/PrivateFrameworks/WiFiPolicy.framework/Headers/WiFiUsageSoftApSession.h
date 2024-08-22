// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGESOFTAPSESSION_H
#define WIFIUSAGESOFTAPSESSION_H

@class NSMutableSet, NSDate, NSString;


#import "WiFiUsageSession.h"

@interface WiFiUsageSoftApSession : WiFiUsageSession

@property (nonatomic) NSUInteger appleClientConnectCount; // ivar: _appleClientConnectCount
@property (nonatomic) NSUInteger appliedCountryCode; // ivar: _appliedCountryCode
@property (nonatomic) NSUInteger autoHotspotClientConnectCount; // ivar: _autoHotspotClientConnectCount
@property (nonatomic) CGFloat awdlActiveDuration; // ivar: _awdlActiveDuration
@property (nonatomic) NSUInteger awdlStateChangedCount; // ivar: _awdlStateChangedCount
@property (nonatomic) NSUInteger bandTransitionCount; // ivar: _bandTransitionCount
@property (nonatomic) NSUInteger broadcastClientConnectCount; // ivar: _broadcastClientConnectCount
@property (nonatomic) NSUInteger clientDisconnectCount; // ivar: _clientDisconnectCount
@property (nonatomic) BOOL compatibilityEnabled; // ivar: _compatibilityEnabled
@property (retain, nonatomic) NSMutableSet *connectedClients; // ivar: _connectedClients
@property (nonatomic) NSUInteger fiveGHzChannelCount; // ivar: _fiveGHzChannelCount
@property (nonatomic) NSUInteger fiveGHzClientConnectCount; // ivar: _fiveGHzClientConnectCount
@property (nonatomic) NSUInteger fiveGHzDeniedUnii1ChannelCount; // ivar: _fiveGHzDeniedUnii1ChannelCount
@property (nonatomic) NSUInteger fiveGHzDeniedUnii2aChannelCount; // ivar: _fiveGHzDeniedUnii2aChannelCount
@property (nonatomic) NSUInteger fiveGHzDeniedUnii2cChannelCount; // ivar: _fiveGHzDeniedUnii2cChannelCount
@property (nonatomic) NSUInteger fiveGHzDeniedUnii3ChannelCount; // ivar: _fiveGHzDeniedUnii3ChannelCount
@property (nonatomic) NSUInteger hiddenClientConnectCount; // ivar: _hiddenClientConnectCount
@property (nonatomic) NSUInteger hiddenTransitionCount; // ivar: _hiddenTransitionCount
@property (nonatomic) CGFloat infraActiveDuration; // ivar: _infraActiveDuration
@property (nonatomic) NSUInteger infraStateChangedCount; // ivar: _infraStateChangedCount
@property (nonatomic) NSUInteger instantHotspotClientConnectCount; // ivar: _instantHotspotClientConnectCount
@property (nonatomic) NSUInteger knownNetworkScanCount; // ivar: _knownNetworkScanCount
@property (retain, nonatomic) NSDate *lastAwdlActiveTime; // ivar: _lastAwdlActiveTime
@property (nonatomic) NSUInteger lastChannel; // ivar: _lastChannel
@property (nonatomic) BOOL lastHiddenState; // ivar: _lastHiddenState
@property (retain, nonatomic) NSDate *lastInfraActiveTime; // ivar: _lastInfraActiveTime
@property (nonatomic) CGFloat lowPowerModeDuration; // ivar: _lowPowerModeDuration
@property (nonatomic) NSUInteger maxConnectedClientCount; // ivar: _maxConnectedClientCount
@property (nonatomic) NSUInteger otherClientConnectCount; // ivar: _otherClientConnectCount
@property (retain, nonatomic) NSString *requester; // ivar: _requester
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (retain, nonatomic) NSString *tearDownReason; // ivar: _tearDownReason
@property (nonatomic) NSUInteger twoFourGHzChannelCount; // ivar: _twoFourGHzChannelCount
@property (nonatomic) NSUInteger twoFourGHzClientConnectCount; // ivar: _twoFourGHzClientConnectCount
@property (nonatomic) NSUInteger twoFourGHzDeniedChannelCount; // ivar: _twoFourGHzDeniedChannelCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventDictionary:(BOOL)arg0 isInternalInstall:(BOOL)arg1 ;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)addSoftApClientEvent:(BOOL)arg0 identifier:(id)arg1 isAppleClient:(BOOL)arg2 isInstantHotspot:(BOOL)arg3 isAutoHotspot:(BOOL)arg4 isHidden:(BOOL)arg5 ;
-(void)addSoftApCoexEvent:(NSUInteger)arg0 deniedUnii1ChannelMap:(NSUInteger)arg1 deniedUnii2aChannelMap:(NSUInteger)arg2 deniedUnii2cChannelMap:(NSUInteger)arg3 deniedUnii3ChannelMap:(NSUInteger)arg4 ;
-(void)awdlStateDidChange:(BOOL)arg0 inMode:(NSInteger)arg1 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)softApStateDidChange:(BOOL)arg0 requester:(id)arg1 status:(id)arg2 changeReason:(id)arg3 channelNumber:(NSUInteger)arg4 countryCode:(NSUInteger)arg5 isHidden:(BOOL)arg6 isInfraConnected:(BOOL)arg7 isAwdlUp:(BOOL)arg8 lowPowerModeDuration:(CGFloat)arg9 compatibilityMode:(BOOL)arg10 ;
-(void)summarizeSession;


@end


#endif