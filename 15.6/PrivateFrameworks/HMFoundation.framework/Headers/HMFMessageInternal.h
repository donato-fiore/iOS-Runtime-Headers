// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFMESSAGEINTERNAL_H
#define HMFMESSAGEINTERNAL_H

@class NSDictionary, NSUUID, NSString;
@protocol NSCopying;


#import "HMFObject.h"
#import "HMFActivity.h"
#import "HMFMessageDestination.h"
#import "HMFLogEventSession.h"
#import "HMFMessageTransport.h"

@interface HMFMessageInternal : HMFObject <NSCopying>



@property (retain, nonatomic) HMFActivity *activity; // ivar: _activity
@property (retain, nonatomic) HMFMessageDestination *destination; // ivar: _destination
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HMFLogEventSession *logEventSession; // ivar: _logEventSession
@property (copy, nonatomic) NSDictionary *messagePayload; // ivar: _messagePayload
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (weak, nonatomic) HMFMessageTransport *transport; // ivar: _transport
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif