// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUAUDIOROUTE_H
#define TUAUDIOROUTE_H

@class NSString, NSDictionary;


#import "TURoute.h"

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName; // ivar: _avAudioRouteName
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route; // ivar: _route


+(BOOL)supportsSecureCoding;
-(BOOL)_routeTypeEqualTo:(id)arg0 ;
-(BOOL)isA2DPRoute;
-(BOOL)isAirTunes;
-(BOOL)isBluetooth;
-(BOOL)isBluetoothLE;
-(BOOL)isBluetoothManaged;
-(BOOL)isCarAudio;
-(BOOL)isCurrentlyPicked;
-(BOOL)isDefaultRoute;
-(BOOL)isHandset;
-(BOOL)isInEarDetectionEnabled;
-(BOOL)isInEarDetectionSupported;
-(BOOL)isPartnerRoutePresent;
-(BOOL)isPreferred;
-(BOOL)isPreferredAndActive;
-(BOOL)isReceiver;
-(BOOL)isSiblingRoutePresent;
-(BOOL)isSpeaker;
-(BOOL)isWiredHeadphones;
-(BOOL)isWiredHeadset;
-(BOOL)isWirelessHeadset;
-(BOOL)supportsHighQualityVoiceWithMedia;
-(BOOL)supportsSharePlay;
-(NSInteger)bluetoothEndpointType;
-(NSInteger)deviceType;
-(id)customDescription;
-(id)identifiersOfOtherConnectedDevices;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif