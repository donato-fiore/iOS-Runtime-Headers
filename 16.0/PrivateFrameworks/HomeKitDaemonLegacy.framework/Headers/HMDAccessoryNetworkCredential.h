// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKCREDENTIAL_H
#define HMDACCESSORYNETWORKCREDENTIAL_H

@class NSNumber, NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface HMDAccessoryNetworkCredential : NSObject

@property (readonly) NSNumber *clientIdentifier; // ivar: _clientIdentifier
@property (readonly) NSUUID *networkRouterUUID; // ivar: _networkRouterUUID
@property (readonly) NSData *wiFiPSK; // ivar: _wiFiPSK


-(id)initWithNetworkRouterUUID:(id)arg0 clientIdentifier:(id)arg1 wiFiPSK:(id)arg2 ;


@end


#endif