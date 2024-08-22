// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUROUTE_H
#define TUROUTE_H

@class NSArray, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (nonatomic, getter=isA2DPRoute) BOOL A2DPRoute; // ivar: _A2DPRoute
@property (nonatomic, getter=isAirTunes) BOOL airTunes; // ivar: _airTunes
@property (nonatomic, getter=isBluetooth) BOOL bluetooth; // ivar: _bluetooth
@property (nonatomic) NSInteger bluetoothEndpointType; // ivar: _bluetoothEndpointType
@property (nonatomic, getter=isBluetoothLE) BOOL bluetoothLE; // ivar: _bluetoothLE
@property (nonatomic, getter=isBluetoothManaged) BOOL bluetoothManaged; // ivar: _bluetoothManaged
@property (nonatomic, getter=isCarAudio) BOOL carAudio; // ivar: _carAudio
@property (readonly, nonatomic, getter=isCarKitRoute) BOOL carKitRoute;
@property (nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked; // ivar: _currentlyPicked
@property (nonatomic, getter=isDefaultRoute) BOOL defaultRoute; // ivar: _defaultRoute
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic, getter=isGuest) BOOL guest; // ivar: _guest
@property (readonly, nonatomic, getter=isHomePodFamily) BOOL homePodFamily;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices; // ivar: _identifiersOfOtherConnectedDevices
@property (readonly, nonatomic, getter=isInEarDetected) BOOL inEarDetected;
@property (nonatomic, getter=isInEarDetectionEnabled) BOOL inEarDetectionEnabled; // ivar: _inEarDetectionEnabled
@property (nonatomic, getter=isInEarDetectionSupported) BOOL inEarDetectionSupported; // ivar: _inEarDetectionSupported
@property (readonly, nonatomic) BOOL isAirPodsRoute;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPartnerRoutePresent) BOOL partnerRoutePresent; // ivar: _partnerRoutePresent
@property (nonatomic, getter=isPreferred) BOOL preferred; // ivar: _preferred
@property (nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive; // ivar: _preferredAndActive
@property (nonatomic, getter=isReceiver) BOOL receiver; // ivar: _receiver
@property (nonatomic, getter=isSiblingRoutePresent) BOOL siblingRoutePresent; // ivar: _siblingRoutePresent
@property (nonatomic, getter=isSpeaker) BOOL speaker; // ivar: _speaker
@property (nonatomic) BOOL supportsHighQualityVoiceWithMedia; // ivar: _supportsHighQualityVoiceWithMedia
@property (readonly, nonatomic) BOOL supportsPreferredAndActive;
@property (nonatomic) BOOL supportsRelay; // ivar: _supportsRelay
@property (nonatomic) BOOL supportsSharePlay; // ivar: _supportsSharePlay
@property (readonly, nonatomic, getter=isTipiParticipant) BOOL tipiParticipant;
@property (readonly, nonatomic, getter=isTriangleParticipant) BOOL triangleParticipant;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones; // ivar: _wiredHeadphones
@property (nonatomic, getter=isWiredHeadset) BOOL wiredHeadset; // ivar: _wiredHeadset
@property (nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset; // ivar: _wirelessHeadset


+(BOOL)supportsSecureCoding;
+(id)predicateForInEarAudioRoute:(SEL)arg0 ;
+(id)predicateForPreferredRoute:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRoute:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoute:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 name:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif