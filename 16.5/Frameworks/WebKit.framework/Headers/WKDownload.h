// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKDOWNLOAD_H
#define WKDOWNLOAD_H

@class NSString, NSURLRequest, NSProgress;
@protocol WKObject, NSProgressReporting, WKDownloadDelegate;

#import <Foundation/Foundation.h>

#import "WKWebView.h"

@interface WKDownload : NSObject <WKObject, NSProgressReporting>

 {
    ObjectStorage<WebKit::DownloadProxy> _download;
    WeakObjCPtr<id<WKDownloadDelegate>> _delegate;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WKWebView *webView;


-(void)cancel:(id)arg0 ;
-(void)dealloc;


@end


#endif