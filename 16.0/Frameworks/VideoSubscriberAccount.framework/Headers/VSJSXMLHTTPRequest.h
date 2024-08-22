// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSJSXMLHTTPREQUEST_H
#define VSJSXMLHTTPREQUEST_H

@class NSMutableURLRequest, NSString, NSURLSession, NSURLSessionTask, NSURLResponse;
@protocol VSJSXMLHTTPRequest;


#import "VSJSEventTargetObject.h"

@interface VSJSXMLHTTPRequest : VSJSEventTargetObject <VSJSXMLHTTPRequest>



@property (nonatomic) NSUInteger readyState; // ivar: _readyState
@property (retain, nonatomic) NSMutableURLRequest *request; // ivar: _request
@property (nonatomic) BOOL requestSent; // ivar: _requestSent
@property (retain, nonatomic) id *response; // ivar: response
@property (retain, nonatomic) NSString *responseText; // ivar: responseText
@property (retain, nonatomic) NSString *responseType; // ivar: responseType
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSURLSessionTask *sessionTask; // ivar: _sessionTask
@property (nonatomic) NSUInteger status; // ivar: status
@property (retain, nonatomic) NSString *statusText; // ivar: statusText
@property (nonatomic) NSUInteger timeout; // ivar: timeout
@property (retain, nonatomic) NSURLResponse *urlResponse; // ivar: _urlResponse


-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_cancelCurrentRequestAndNotify:(BOOL)arg0 ;
-(void)_notifyWithFunctionName:(id)arg0 eventName:(id)arg1 info:(id)arg2 ;
-(void)abort;
-(void)open:(id)arg0 ;
-(void)send:(id)arg0 ;


@end


#endif