// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUNANENDPOINT_H
#define CUNANENDPOINT_H

@class NSData, WiFiAwareDiscoveryResult, NSString, WiFiMACAddress, NSDictionary;

#import <Foundation/Foundation.h>


@interface CUNANEndpoint : NSObject

@property (copy, nonatomic) NSData *customData; // ivar: _customData
@property (retain, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // ivar: _discoveryResult
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) unsigned char instanceID; // ivar: _instanceID
@property (retain, nonatomic) WiFiMACAddress *macAddress; // ivar: _macAddress
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int port; // ivar: _port
@property (nonatomic) int rssi; // ivar: _rssi
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, copy, nonatomic) NSDictionary *textInfo; // ivar: _textInfo


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithEndpointID:(char *)arg0 error:(*id)arg1 ;
-(unsigned int)updateWithDiscoveryResult:(id)arg0 ;


@end


#endif