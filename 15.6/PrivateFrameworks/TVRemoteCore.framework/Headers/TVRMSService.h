// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRMSSERVICE_H
#define TVRMSSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRMSService : NSObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *homeSharingGroupKey; // ivar: _homeSharingGroupKey
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) int port; // ivar: _port
@property (nonatomic) NSInteger serviceDiscoverySource; // ivar: _serviceDiscoverySource
@property (nonatomic) NSInteger serviceLegacyFlags; // ivar: _serviceLegacyFlags
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType


+(id)protobufsFromServices:(id)arg0 ;
+(id)servicesFromProtobufs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToService:(id)arg0 ;
-(BOOL)isLegacy;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif