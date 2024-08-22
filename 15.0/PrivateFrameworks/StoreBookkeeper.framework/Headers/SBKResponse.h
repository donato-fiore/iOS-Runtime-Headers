// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKRESPONSE_H
#define SBKRESPONSE_H

@class NSString, NSError, NSDictionary;

#import <Foundation/Foundation.h>

#import "SBKResponseStatus.h"

@interface SBKResponse : NSObject

@property (readonly, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, copy, nonatomic) NSString *consoleDescription;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isError;
@property (readonly, nonatomic) BOOL isGenericError;
@property (readonly, nonatomic) BOOL isPuntedError;
@property (readonly, nonatomic) BOOL isRecoverable;
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly, nonatomic) BOOL isUnsupportedClient;
@property (readonly, nonatomic) BOOL isValidationError;
@property (readonly, nonatomic) NSError *requestError;
@property (readonly, nonatomic) NSUInteger responseCode; // ivar: _responseCode
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) NSDictionary *responseHeaderFields; // ivar: _responseHeaderFields
@property (readonly, nonatomic) SBKResponseStatus *responseStatus; // ivar: _responseStatus
@property (readonly, nonatomic) CGFloat retrySeconds; // ivar: _retrySeconds
@property (readonly, nonatomic) BOOL shouldFileRadar;
@property (readonly, nonatomic) NSInteger statusCode;


+(id)responseWithCode:(NSUInteger)arg0 headerFields:(id)arg1 responseDictionary:(id)arg2 MIMEType:(id)arg3 error:(id)arg4 ;
+(id)responseWithResponse:(id)arg0 ;
+(id)responseWithURLResponse:(id)arg0 responseDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCode:(NSUInteger)arg0 headerFields:(id)arg1 responseDictionary:(id)arg2 MIMEType:(id)arg3 error:(id)arg4 ;
-(id)initWithURLResponse:(id)arg0 responseDictionary:(id)arg1 ;


@end


#endif