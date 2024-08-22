// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPENDPOINT_H
#define RPENDPOINT_H

@class NSString, NSDate, SFDevice, CUBonjourDevice, NSArray, IDSDevice, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPEndpoint : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) int activityLevel; // ivar: _activityLevel
@property (readonly, copy, nonatomic) NSDate *activityLevelTimeStamp; // ivar: _activityLevelTimeStamp
@property (retain, nonatomic) SFDevice *bleDevice; // ivar: _bleDevice
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice; // ivar: _bonjourDevice
@property (nonatomic) BOOL cameraCapabilityRequestIsActive; // ivar: _cameraCapabilityRequestIsActive
@property (readonly, nonatomic) unsigned char cameraState; // ivar: _cameraState
@property (copy, nonatomic) NSArray *homeKitUserIdentifiers; // ivar: _homeKitUserIdentifiers
@property (readonly, nonatomic) unsigned int hotspotInfo; // ivar: _hotspotInfo
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *idsCorrelationIdentifier; // ivar: _idsCorrelationIdentifier
@property (retain, nonatomic) IDSDevice *idsDevice; // ivar: _idsDevice
@property (copy, nonatomic) NSString *idsDeviceIdentifier; // ivar: _idsDeviceIdentifier
@property (copy, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (nonatomic) int linkType; // ivar: _linkType
@property (copy, nonatomic) NSString *mediaRemoteIdentifier; // ivar: _mediaRemoteIdentifier
@property (copy, nonatomic) NSString *mediaRouteIdentifier; // ivar: _mediaRouteIdentifier
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned char nearbyActionV2Type; // ivar: _nearbyActionV2Type
@property (nonatomic) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (nonatomic) BOOL present; // ivar: _present
@property (readonly, nonatomic) int proximity; // ivar: _proximity
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo; // ivar: _serviceInfo
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSArray *serviceTypes; // ivar: _serviceTypes
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (nonatomic) NSUInteger statusFlags; // ivar: _statusFlags
@property (retain, nonatomic) NSDictionary *verifiedAcl; // ivar: _verifiedAcl
@property (copy, nonatomic) NSString *verifiedIdentity; // ivar: _verifiedIdentity


+(BOOL)supportsSecureCoding;
+(id)nullEndpoint;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(BOOL)removeBonjourDevice:(id)arg0 ;
-(BOOL)removeSFDevice:(id)arg0 ;
-(id)bleTargetData;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)removeIDSDevice;
-(unsigned int)updateWithBonjourDevice:(id)arg0 ;
-(unsigned int)updateWithFamilyEndpoint:(id)arg0 ;
-(unsigned int)updateWithIDSDevice:(id)arg0 ;
-(unsigned int)updateWithSFDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif