// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMFCFHTTPSERVERREQUEST_H
#define _HMFCFHTTPSERVERREQUEST_H

@class NSMutableData;


#import "HMFHTTPRequestInternal.h"
#import "_HMFCFHTTPServerConnection.h"

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic) *__CFReadStream bodyStream; // ivar: _bodyStream
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection; // ivar: _connection
@property (readonly, nonatomic) *_CFHTTPServerRequest requestRef; // ivar: _requestRef


-(id)URL;
-(id)attributeDescriptions;
-(id)body;
-(id)headerFields;
-(id)init;
-(id)initWithConnection:(id)arg0 requestRef:(struct _CFHTTPServerRequest *)arg1 ;
-(id)method;
-(id)responseWithStatusCode:(NSInteger)arg0 ;
-(void)appendBodyData:(id)arg0 ;
-(void)dealloc;
-(void)setBody:(id)arg0 ;
-(void)setHeaders:(id)arg0 ;
-(void)setMethod:(id)arg0 ;
-(void)setURL:(id)arg0 ;


@end


#endif