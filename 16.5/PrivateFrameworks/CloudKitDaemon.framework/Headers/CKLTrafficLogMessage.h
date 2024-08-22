// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLTRAFFICLOGMESSAGE_H
#define CKLTRAFFICLOGMESSAGE_H

@class NSString, NSDictionary, NSArray, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface CKLTrafficLogMessage : NSObject

@property (readonly, nonatomic) NSInteger bodyStreamResetCount; // ivar: _bodyStreamResetCount
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders; // ivar: _requestHeaders
@property (readonly, copy, nonatomic) NSString *requestMethod; // ivar: _requestMethod
@property (readonly, copy, nonatomic) NSArray *requestObjects; // ivar: _requestObjects
@property (readonly, copy, nonatomic) NSDate *requestTime; // ivar: _requestTime
@property (readonly, copy, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (readonly, copy, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (readonly, copy, nonatomic) NSArray *responseObjects; // ivar: _responseObjects
@property (readonly, nonatomic) NSInteger responseStatus; // ivar: _responseStatus
@property (readonly, copy, nonatomic) NSDate *responseTime; // ivar: _responseTime
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithUUID:(id)arg0 requestMetadata:(id)arg1 requestObjects:(id)arg2 bodyStreamResetCount:(NSInteger)arg3 responseMetadata:(id)arg4 responseObjects:(id)arg5 ;


@end


#endif