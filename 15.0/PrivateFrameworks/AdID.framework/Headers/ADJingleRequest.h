// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADJINGLEREQUEST_H
#define ADJINGLEREQUEST_H

@class NSString, NSError, NSData, NSMutableDictionary, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface ADJingleRequest : NSObject

@property (copy, nonatomic) NSString *DSID; // ivar: _DSID
@property (retain, nonatomic) NSString *bagKey; // ivar: _bagKey
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy) NSError *error; // ivar: _error
@property (retain, nonatomic) NSData *requestBody; // ivar: _requestBody
@property (retain, nonatomic) NSMutableDictionary *requestHeaders; // ivar: _requestHeaders
@property (retain) NSData *responseBody; // ivar: _responseBody
@property (retain) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property NSInteger statusCode; // ivar: _statusCode
@property (retain, nonatomic) NSNumber *token; // ivar: _token


+(id)incrementToken;
-(id)init:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleJingleResponse;
-(void)send;
-(void)sendJingleRequest:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif