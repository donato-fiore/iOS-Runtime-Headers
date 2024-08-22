// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIJSFAKEXMLHTTPREQUEST_H
#define SKUIJSFAKEXMLHTTPREQUEST_H

@class IKJSObject, NSData, NSDictionary, NSHTTPURLResponse, NSString, IKJSXMLDocument;
@protocol SKUIJSFakeXMLHTTPRequest;



@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest>

 {
    NSData *_data;
    NSDictionary *_performanceMetrics;
    NSHTTPURLResponse *_response;
}


@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned int readyState;
@property (readonly) id *response;
@property (readonly) NSString *responseText;
@property (readonly) unsigned int responseType;
@property (readonly) IKJSXMLDocument *responseXML;
@property (readonly) unsigned int status;
@property (readonly, retain) NSString *statusText;


-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 data:(id)arg1 URLResponse:(id)arg2 performanceMetrics:(id)arg3 ;


@end


#endif