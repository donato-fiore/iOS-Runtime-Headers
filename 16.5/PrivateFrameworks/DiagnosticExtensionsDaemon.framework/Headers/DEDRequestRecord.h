// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDREQUESTRECORD_H
#define DEDREQUESTRECORD_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface DEDRequestRecord : NSObject

@property (retain) NSString *URL; // ivar: _URL
@property (retain) NSDate *date; // ivar: _date
@property BOOL isFailure; // ivar: _isFailure
@property (retain) NSString *method; // ivar: _method
@property (retain) NSString *requestBody; // ivar: _requestBody
@property (retain) NSString *requestHeader; // ivar: _requestHeader
@property (retain) NSString *responseBody; // ivar: _responseBody
@property (retain) NSString *responseHeader; // ivar: _responseHeader
@property NSInteger runtime; // ivar: _runtime


-(id)formattedBody:(id)arg0 error:(id)arg1 ;
-(id)formattedRequestHeader:(id)arg0 session:(id)arg1 cookies:(id)arg2 ;
-(id)formattedResponseHeader:(id)arg0 ;
-(id)initWithRequest:(id)arg0 response:(id)arg1 session:(id)arg2 cookies:(id)arg3 body:(id)arg4 error:(id)arg5 ;
-(id)initWithURL:(id)arg0 httpMethod:(id)arg1 responseData:(id)arg2 ;


@end


#endif