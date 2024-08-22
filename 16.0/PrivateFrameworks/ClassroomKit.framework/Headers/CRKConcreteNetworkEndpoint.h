// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETENETWORKENDPOINT_H
#define CRKCONCRETENETWORKENDPOINT_H

@class NSString;
@protocol CRKNetworkEndpoint, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface CRKConcreteNetworkEndpoint : NSObject <CRKNetworkEndpoint>



@property (readonly, copy, nonatomic) NSString *IPAddress; // ivar: _IPAddress
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *underlyingEndpoint; // ivar: _underlyingEndpoint


-(id)initWithUnderlyingEndpoint:(id)arg0 ;


@end


#endif