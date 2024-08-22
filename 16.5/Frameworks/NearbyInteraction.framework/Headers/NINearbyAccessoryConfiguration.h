// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NINEARBYACCESSORYCONFIGURATION_H
#define NINEARBYACCESSORYCONFIGURATION_H

@class NSData, NSUUID, NSDictionary;


#import "NIConfiguration.h"
#import "NIDiscoveryToken.h"

@interface NINearbyAccessoryConfiguration : NIConfiguration {
    NSData *_rawData;
}


@property (readonly, copy) NSData *accessoryConfigData;
@property (readonly, copy, nonatomic) NIDiscoveryToken *accessoryDiscoveryToken; // ivar: _accessoryDiscoveryToken
@property (nonatomic) NSInteger backgroundMode; // ivar: _backgroundMode
@property (copy) NSUUID *bluetoothDeviceIdentifier; // ivar: _bluetoothDeviceIdentifier
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled; // ivar: _cameraAssistanceEnabled
@property (copy) NSDictionary *debugParameters; // ivar: _debugParameters


+(BOOL)supportsSecureCoding;
-(BOOL)_internalIsCameraAssistanceEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithAccessoryData:(id)arg0 bluetoothPeerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif