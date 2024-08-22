// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMODERNTRANSPORTMESSAGECONTEXTOPTIONSBUILDER_H
#define HMDMODERNTRANSPORTMESSAGECONTEXTOPTIONSBUILDER_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HMDModernTransportMessageContextOptionsBuilder : NSObject

@property BOOL expectsMultipleResponses; // ivar: _expectsMultipleResponses
@property (copy) NSString *requestStartTimeHeaderKey; // ivar: _requestStartTimeHeaderKey
@property CGFloat timeToLive; // ivar: _timeToLive
@property (copy) NSString *timeToLiveHeaderKey; // ivar: _timeToLiveHeaderKey
@property CGFloat timeoutOverride; // ivar: _timeoutOverride
@property BOOL trackingDeviceReachability; // ivar: _trackingDeviceReachability
@property (copy) NSSet *transports; // ivar: _transports




@end


#endif