// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICE_H
#define SFDEVICE_H

@class NSString, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFBLEDevice.h"

@interface SFDevice : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (nonatomic) int audioRoutingScore; // ivar: _audioRoutingScore
@property (nonatomic) BOOL autoUnlockEnabled; // ivar: _autoUnlockEnabled
@property (nonatomic) BOOL autoUnlockWatch; // ivar: _autoUnlockWatch
@property (copy, nonatomic) NSArray *batteryInfo; // ivar: _batteryInfo
@property (retain, nonatomic) SFBLEDevice *bleDevice; // ivar: _bleDevice
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (nonatomic) unsigned char deviceActionType; // ivar: _deviceActionType
@property (nonatomic) unsigned char deviceClassCode; // ivar: _deviceClassCode
@property (nonatomic) unsigned int deviceFlags; // ivar: _deviceFlags
@property (nonatomic) unsigned char deviceModelCode; // ivar: _deviceModelCode
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic) NSInteger distance; // ivar: _distance
@property (readonly, nonatomic) BOOL duetSync; // ivar: _duetSync
@property (readonly, nonatomic) BOOL enhancedDiscovery; // ivar: _enhancedDiscovery
@property (nonatomic) BOOL hasProblem; // ivar: _hasProblem
@property (nonatomic) unsigned int hotspotInfo; // ivar: _hotspotInfo
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (readonly, nonatomic) BOOL idsIdentifierConflict; // ivar: _idsIdentifierConflict
@property (nonatomic) BOOL isBLEDeviceReplaced; // ivar: _isBLEDeviceReplaced
@property (readonly, copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID
@property (readonly, copy, nonatomic) NSString *mediaRouteID; // ivar: _mediaRouteID
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL needsAWDL; // ivar: _needsAWDL
@property (readonly, nonatomic) BOOL needsKeyboard; // ivar: _needsKeyboard
@property (readonly, nonatomic) BOOL needsKeyboardOnly;
@property (nonatomic) BOOL needsSetup; // ivar: _needsSetup
@property (nonatomic) unsigned char osVersion; // ivar: _osVersion
@property (nonatomic) BOOL paired; // ivar: _paired
@property (readonly, nonatomic) NSUInteger problemFlags; // ivar: _problemFlags
@property (readonly, nonatomic) NSString *rapportIdentifier; // ivar: _rapportIdentifier
@property (copy, nonatomic) NSString *requestSSID; // ivar: _requestSSID
@property (nonatomic) unsigned int systemPairState; // ivar: _systemPairState
@property (nonatomic) BOOL testMode; // ivar: _testMode
@property (nonatomic) BOOL wakeDevice; // ivar: _wakeDevice
@property (nonatomic) BOOL watchLocked; // ivar: _watchLocked
@property (readonly, nonatomic) BOOL wifiP2P; // ivar: _wifiP2P


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBLEDevice:(id)arg0 ;
-(void)updateWithPairedPeer:(id)arg0 ;
-(void)updateWithRPIdentity:(id)arg0 ;


@end


#endif