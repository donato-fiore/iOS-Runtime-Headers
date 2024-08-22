// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPREQUESTENTRY_H
#define RPREQUESTENTRY_H

@class NSDictionary, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface RPRequestEntry : NSObject

@property (nonatomic) NSUInteger length; // ivar: _length
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) NSUInteger sendTicks; // ivar: _sendTicks
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic) unsigned int xpcID; // ivar: _xpcID




@end


#endif