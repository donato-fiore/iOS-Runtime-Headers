// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REHTTPRESPONSE_H
#define REHTTPRESPONSE_H

@class NSData, NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "REHTTPRequest.h"

@interface REHTTPResponse : NSObject {
    REHTTPRequest *_request;
    *__CFHTTPMessage _message;
}


@property (copy, nonatomic) NSData *body;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)headerValueForKey:(id)arg0 ;
-(id)initWithRequest:(id)arg0 statusCode:(NSInteger)arg1 ;
-(struct _CFHTTPServerResponse *)response;
-(void)dealloc;
-(void)setHeaderValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif