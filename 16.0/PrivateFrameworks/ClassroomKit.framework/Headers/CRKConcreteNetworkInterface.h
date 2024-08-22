// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETENETWORKINTERFACE_H
#define CRKCONCRETENETWORKINTERFACE_H

@class NSString;
@protocol CRKNetworkInterface, CRKNetworkEndpoint, OS_nw_interface;

#import <Foundation/Foundation.h>


@interface CRKConcreteNetworkInterface : NSObject <CRKNetworkInterface>



@property (readonly, nonatomic) NSObject<CRKNetworkEndpoint> *ipv4Endpoint; // ivar: _ipv4Endpoint
@property (readonly, nonatomic) NSObject<CRKNetworkEndpoint> *ipv6Endpoint; // ivar: _ipv6Endpoint
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<OS_nw_interface> *underlyingInterface; // ivar: _underlyingInterface


-(id)initWithUnderlyingInterface:(id)arg0 ;
-(id)makeLocalEndpointForRemoteEndpointWithHost:(id)arg0 port:(id)arg1 ;


@end


#endif