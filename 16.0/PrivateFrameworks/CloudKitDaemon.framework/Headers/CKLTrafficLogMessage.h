// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLTRAFFICLOGMESSAGE_H
#define CKLTRAFFICLOGMESSAGE_H

@class NSString, NSDictionary, NSArray, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface CKLTrafficLogMessage : NSObject

@property (nonatomic) NSInteger bodyStreamResetCount; // ivar: _bodyStreamResetCount
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSDictionary *requestHeaders; // ivar: _requestHeaders
@property (retain, nonatomic) NSString *requestMethod; // ivar: _requestMethod
@property (retain, nonatomic) NSArray *requestObjects; // ivar: _requestObjects
@property (retain, nonatomic) NSDate *requestTime; // ivar: _requestTime
@property (retain, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (retain, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (retain, nonatomic) NSArray *responseObjects; // ivar: _responseObjects
@property (nonatomic) NSInteger responseStatus; // ivar: _responseStatus
@property (readonly, nonatomic) NSDate *responseTime; // ivar: _responseTime
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(id)CKPropertiesDescription;
-(id)_initWithUUID:(id)arg0 requestMetadata:(id)arg1 requestObjects:(id)arg2 bodyStreamResetCount:(NSInteger)arg3 responseMetadata:(id)arg4 responseObjects:(id)arg5 ;
-(id)description;


@end


#endif