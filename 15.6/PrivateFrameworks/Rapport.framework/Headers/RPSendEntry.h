// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPSENDENTRY_H
#define RPSENDENTRY_H

@class NSData, NSString, NSDictionary, NSNumber;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RPSendEntry : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSData *eventData; // ivar: _eventData
@property (copy, nonatomic) NSString *eventID; // ivar: _eventID
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (nonatomic) NSUInteger queueTicks; // ivar: _queueTicks
@property (copy, nonatomic) NSDictionary *request; // ivar: _request
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic) unsigned int xid; // ivar: _xid
@property (retain, nonatomic) NSNumber *xidObj; // ivar: _xidObj
@property (nonatomic) unsigned int xpcID; // ivar: _xpcID




@end


#endif