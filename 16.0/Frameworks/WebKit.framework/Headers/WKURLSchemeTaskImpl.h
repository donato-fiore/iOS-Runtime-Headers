// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKURLSCHEMETASKIMPL_H
#define WKURLSCHEMETASKIMPL_H

@class NSString, NSURLRequest;
@protocol WKObject, WKURLSchemeTaskPrivate;

#import <Foundation/Foundation.h>

#import "WKFrameInfo.h"

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate>

 {
    ObjectStorage<WebKit::WebURLSchemeTask> _urlSchemeTask;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, nonatomic) BOOL _requestOnlyIfCached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly) Class superclass;


-(id)init;
-(void)_didPerformRedirection:(id)arg0 newRequest:(id)arg1 ;
-(void)_willPerformRedirection:(id)arg0 newRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 ;
-(void)didFinish;
-(void)didReceiveData:(id)arg0 ;
-(void)didReceiveResponse:(id)arg0 ;


@end


#endif