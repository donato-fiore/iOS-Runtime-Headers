// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMFCFHTTPSERVERRESPONSE_H
#define _HMFCFHTTPSERVERRESPONSE_H



#import "HMFHTTPResponseInternal.h"
#import "_HMFCFHTTPServerRequest.h"
#import "_HMFCFHTTPMessage.h"

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) _HMFCFHTTPServerRequest *request; // ivar: _request
@property (readonly, nonatomic) _HMFCFHTTPMessage *response; // ivar: _response
@property (readonly, nonatomic) *_CFHTTPServerResponse responseRef; // ivar: _responseRef


-(id)attributeDescriptions;
-(id)body;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)headerFields;
-(id)initWithRequest:(id)arg0 statusCode:(NSInteger)arg1 ;
-(void)dealloc;
-(void)setBody:(id)arg0 ;
-(void)setHeaderValue:(id)arg0 forHeaderKey:(id)arg1 ;


@end


#endif