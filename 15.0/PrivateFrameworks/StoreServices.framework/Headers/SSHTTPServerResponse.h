// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSHTTPSERVERRESPONSE_H
#define SSHTTPSERVERRESPONSE_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSHTTPServerResponse : NSObject

@property (retain, nonatomic) NSData *body; // ivar: _body
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (nonatomic) short statusCode; // ivar: _statusCode


-(id)bagFromBody;
-(id)initWithStatusCode:(short)arg0 ;
-(struct __CFHTTPMessage *)copyHTTPMessage;


@end


#endif