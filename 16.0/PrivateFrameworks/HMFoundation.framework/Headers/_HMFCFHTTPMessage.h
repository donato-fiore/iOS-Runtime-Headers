// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMFCFHTTPMESSAGE_H
#define _HMFCFHTTPMESSAGE_H

@class NSData, NSDictionary;


#import "HMFObject.h"

@interface _HMFCFHTTPMessage : HMFObject

@property (copy, nonatomic) NSData *body;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) *__CFHTTPMessage message; // ivar: _message


+(id)dateFormatter;
+(id)requestWithMethod:(id)arg0 url:(id)arg1 protocolVersion:(NSInteger)arg2 ;
+(id)responseWithStatusCode:(NSInteger)arg0 statusDescription:(id)arg1 protocolVersion:(NSInteger)arg2 ;
-(NSInteger)contentLength;
-(id)contentType;
-(id)date;
-(id)init;
-(id)initWithMessageRef:(struct __CFHTTPMessage *)arg0 ;
-(id)valueForHeaderField:(id)arg0 ;
-(void)dealloc;
-(void)setContentLength:(NSInteger)arg0 ;
-(void)setContentType:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setValue:(id)arg0 forHeaderField:(id)arg1 ;


@end


#endif