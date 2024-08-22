// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOETAREMOTEPROVIDER_H
#define _GEOETAREMOTEPROVIDER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _GEOETARemoteProvider : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *finishedHandler; // ivar: _finishedHandler
@property (copy, nonatomic) id *networkActivityHandler; // ivar: _networkActivityHandler
@property (copy, nonatomic) id *willSendRequestHandler; // ivar: _willSendRequestHandler


// +(id)provderWithWillSendRequest:(id)arg0 finished:(unk)arg1 networkActivity:(id)arg2 error:(unk)arg3  ;


@end


#endif