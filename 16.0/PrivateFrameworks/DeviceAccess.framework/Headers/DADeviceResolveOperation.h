// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADEVICERESOLVEOPERATION_H
#define DADEVICERESOLVEOPERATION_H


#import <Foundation/Foundation.h>

#import "DAEndpoint.h"
#import "DADeviceResolver.h"

@interface DADeviceResolveOperation : NSObject

@property (nonatomic) *_DNSServiceRef_t addrInfoQuery; // ivar: _addrInfoQuery
@property (retain, nonatomic) DAEndpoint *endpoint; // ivar: _endpoint
@property (retain, nonatomic) DADeviceResolver *resolver; // ivar: _resolver
@property (nonatomic) *_DNSServiceRef_t srvQuery; // ivar: _srvQuery


-(void)invalidate;


@end


#endif