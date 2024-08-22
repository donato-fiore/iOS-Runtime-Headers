// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSSERVICE_H
#define RMSSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RMSService : NSObject

@property (retain, nonatomic) id *device; // ivar: _device
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *homeSharingGroupKey; // ivar: _homeSharingGroupKey
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) int port; // ivar: _port
@property (nonatomic) NSInteger serviceDiscoverySource; // ivar: _serviceDiscoverySource
@property (nonatomic) NSInteger serviceFlags; // ivar: _serviceFlags
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)protobufsFromServices:(id)arg0 ;
+(id)servicesFromProtobufs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToService:(id)arg0 ;
-(BOOL)isLegacyAppleTV;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif