// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUMUTABLEROUTE_H
#define TUMUTABLEROUTE_H

@class NSArray;


#import "TURoute.h"

@interface TUMutableRoute : TURoute

@property (nonatomic, getter=isAirTunes) BOOL airTunes;
@property (nonatomic, getter=isBluetooth) BOOL bluetooth;
@property (nonatomic) NSInteger bluetoothEndpointType;
@property (nonatomic, getter=isBluetoothLE) BOOL bluetoothLE;
@property (nonatomic, getter=isBluetoothManaged) BOOL bluetoothManaged;
@property (nonatomic, getter=isCarAudio) BOOL carAudio;
@property (nonatomic, getter=isCarPlayConnected) BOOL carPlayConnected;
@property (nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property (nonatomic, getter=isDefaultRoute) BOOL defaultRoute;
@property (nonatomic) NSInteger deviceType;
@property (nonatomic, getter=isGuest) BOOL guest;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic, getter=isInEarDetectionEnabled) BOOL inEarDetectionEnabled;
@property (nonatomic, getter=isInEarDetectionSupported) BOOL inEarDetectionSupported;
@property (nonatomic, getter=isPreferred) BOOL preferred;
@property (nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive;
@property (nonatomic, getter=isReceiver) BOOL receiver;
@property (nonatomic, getter=isSpeaker) BOOL speaker;
@property (nonatomic) BOOL supportsRelay;
@property (nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) BOOL wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;




@end


#endif