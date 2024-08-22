// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFMESSAGEINTERNAL_H
#define CARPFMESSAGEINTERNAL_H

@class NSDictionary, NSUUID, NSString;
@protocol NSCopying;


#import "CARPFObject.h"
#import "CARPFActivity.h"
#import "CARPFMessageDestination.h"
#import "CARPFLogEventSession.h"
#import "CARPFMessageTransport.h"

@interface CARPFMessageInternal : CARPFObject <NSCopying>



@property (retain, nonatomic) CARPFActivity *activity; // ivar: _activity
@property (retain, nonatomic) CARPFMessageDestination *destination; // ivar: _destination
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) CARPFLogEventSession *logEventSession; // ivar: _logEventSession
@property (copy, nonatomic) NSDictionary *messagePayload; // ivar: _messagePayload
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (weak, nonatomic) CARPFMessageTransport *transport; // ivar: _transport
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif