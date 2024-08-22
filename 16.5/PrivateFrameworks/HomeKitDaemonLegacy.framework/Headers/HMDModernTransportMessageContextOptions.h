// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMODERNTRANSPORTMESSAGECONTEXTOPTIONS_H
#define HMDMODERNTRANSPORTMESSAGECONTEXTOPTIONS_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HMDModernTransportMessageContextOptions : NSObject

@property (readonly) BOOL expectsMultipleResponses; // ivar: _expectsMultipleResponses
@property (readonly) NSString *requestStartTimeHeaderKey; // ivar: _requestStartTimeHeaderKey
@property (readonly) CGFloat timeToLive; // ivar: _timeToLive
@property (readonly) NSString *timeToLiveHeaderKey; // ivar: _timeToLiveHeaderKey
@property (readonly) CGFloat timeoutOverride; // ivar: _timeoutOverride
@property (readonly, getter=isTrackingDeviceReachability) BOOL trackingDeviceReachability; // ivar: _trackingDeviceReachability
@property (readonly) NSSet *transports; // ivar: _transports


+(id)newWithBuilder:(id)arg0 ;
-(id)initWithBuilder:(id)arg0 ;


@end


#endif