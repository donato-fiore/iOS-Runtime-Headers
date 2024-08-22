// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKFRAMEINFO_H
#define WKFRAMEINFO_H

@class NSString, NSURLRequest;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>

#import "_WKFrameHandle.h"
#import "WKSecurityOrigin.h"
#import "WKWebView.h"

@interface WKFrameInfo : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::FrameInfo> _frameInfo;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) _WKFrameHandle *_handle;
@property (readonly, copy, nonatomic) _WKFrameHandle *_parentFrameHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMainFrame) BOOL mainFrame;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) WKSecurityOrigin *securityOrigin;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WKWebView *webView;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif