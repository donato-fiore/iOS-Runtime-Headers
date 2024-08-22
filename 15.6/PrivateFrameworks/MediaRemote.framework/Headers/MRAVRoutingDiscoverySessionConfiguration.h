// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVROUTINGDISCOVERYSESSIONCONFIGURATION_H
#define MRAVROUTINGDISCOVERYSESSIONCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_MRDiscoverySessionConfigurationProtobuf.h"

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL alwaysAllowUpdates; // ivar: _alwaysAllowUpdates
@property (nonatomic) BOOL enableThrottling; // ivar: _enableThrottling
@property (readonly, nonatomic) unsigned int features; // ivar: _features
@property (copy, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (nonatomic) BOOL populatesExternalDevice; // ivar: _populatesExternalDevice
@property (readonly, copy, nonatomic) _MRDiscoverySessionConfigurationProtobuf *protobuf;
@property (copy, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID
@property (nonatomic) unsigned int targetAudioSessionID; // ivar: _targetAudioSessionID


+(BOOL)supportsSecureCoding;
+(id)configurationWithEndpointFeatures:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndpointFeatures:(unsigned int)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif