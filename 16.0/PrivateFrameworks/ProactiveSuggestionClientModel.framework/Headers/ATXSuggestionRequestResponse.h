// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTIONREQUESTRESPONSE_H
#define ATXSUGGESTIONREQUESTRESPONSE_H

@class NSError, NSData, NSArray, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXSuggestionRequest.h"

@interface ATXSuggestionRequestResponse : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (readonly, nonatomic) ATXSuggestionRequest *originalRequest; // ivar: _originalRequest
@property (readonly, nonatomic) int responseCode; // ivar: _responseCode
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)dataFromNSError:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 feedbackMetadata:(id)arg1 originalRequest:(id)arg2 responseCode:(int)arg3 error:(id)arg4 ;
-(id)initWithSuggestions:(id)arg0 feedbackMetadata:(id)arg1 originalRequest:(id)arg2 responseCode:(int)arg3 error:(id)arg4 uuid:(id)arg5 ;
-(id)proto;
-(id)unarchivedNSErrorFromData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif