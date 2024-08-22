// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTAIRPODSCONTROLREQUEST_H
#define BTAIRPODSCONTROLREQUEST_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BTAirPodsControlServiceClient.h"

@interface BTAirPodsControlRequest : NSObject

@property (retain, nonatomic) BTAirPodsControlServiceClient *client; // ivar: _client
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *getHandler; // ivar: _getHandler
@property (copy, nonatomic) id *setHandler; // ivar: _setHandler
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer




@end


#endif