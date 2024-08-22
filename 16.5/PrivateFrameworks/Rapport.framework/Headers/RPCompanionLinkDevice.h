// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPCOMPANIONLINKDEVICE_H
#define RPCOMPANIONLINKDEVICE_H

@class NSString, NSUUID, NSDictionary;
@protocol NSSecureCoding;


#import "RPEndpoint.h"

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding>



@property (nonatomic) BOOL changed; // ivar: _changed
@property (nonatomic) BOOL daemon; // ivar: _daemon
@property (copy, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (nonatomic) unsigned char deviceFlags; // ivar: _deviceFlags
@property (readonly, copy, nonatomic) NSString *effectiveIdentifier;
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSUUID *homeKitIdentifier; // ivar: _homeKitIdentifier
@property (copy, nonatomic) NSString *idsPersonalDeviceIdentifier; // ivar: _idsPersonalDeviceIdentifier
@property (copy, nonatomic) NSUUID *launchInstanceID; // ivar: _launchInstanceID
@property (nonatomic) int listeningPort; // ivar: _listeningPort
@property (nonatomic) int mediaAccessControlSetting; // ivar: _mediaAccessControlSetting
@property (copy, nonatomic) NSUUID *mediaSystemIdentifier; // ivar: _mediaSystemIdentifier
@property (copy, nonatomic) NSUUID *mediaSystemIdentifierEffective; // ivar: _mediaSystemIdentifierEffective
@property (copy, nonatomic) NSString *mediaSystemName; // ivar: _mediaSystemName
@property (nonatomic) int mediaSystemRole; // ivar: _mediaSystemRole
@property (nonatomic) int mediaSystemRoleEffective; // ivar: _mediaSystemRoleEffective
@property (nonatomic) int mediaSystemState; // ivar: _mediaSystemState
@property (copy, nonatomic) NSUUID *pairingIdentifier; // ivar: _pairingIdentifier
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic, getter=isPersonal) BOOL personal; // ivar: _personal
@property (nonatomic) int personalDeviceState; // ivar: _personalDeviceState
@property (nonatomic) int personalRequestsState; // ivar: _personalRequestsState
@property (copy, nonatomic) NSString *publicIdentifier; // ivar: _publicIdentifier
@property (copy, nonatomic) NSString *role; // ivar: _role
@property (copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (nonatomic) int serversChangedState; // ivar: _serversChangedState
@property (copy, nonatomic) NSDictionary *siriInfo; // ivar: _siriInfo
@property (nonatomic) BOOL uiTriggered; // ivar: _uiTriggered


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)updateWithBonjourDevice:(id)arg0 ;
-(unsigned int)updateWithSFDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif