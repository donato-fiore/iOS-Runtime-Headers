// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REHTTPREQUEST_H
#define REHTTPREQUEST_H

@class NSInputStream, NSMutableData, NSData, NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "REHTTPConnection.h"

@interface REHTTPRequest : NSObject {
    NSInputStream *_stream;
    NSMutableData *_bodyData;
}


@property (readonly, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) REHTTPConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSDictionary *headerFields; // ivar: _headerFields
@property (readonly, nonatomic) NSString *method; // ivar: _method
@property (readonly, nonatomic) *_CFHTTPServerRequest request; // ivar: _request
@property (readonly, nonatomic) NSInputStream *stream;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithConnect:(id)arg0 request:(struct _CFHTTPServerRequest *)arg1 ;
-(id)responseWithStatusCode:(NSInteger)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)dealloc;


@end


#endif