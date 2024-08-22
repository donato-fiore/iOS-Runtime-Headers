// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKOBSERVABLEPAGESTATE_H
#define WKOBSERVABLEPAGESTATE_H

@class NSURL, NSString;
@protocol _WKObservablePageState;

#import <Foundation/Foundation.h>


@interface WKObservablePageState : NSObject <_WKObservablePageState>

 {
    RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> _page;
    unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> _observer;
}


@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL _webProcessIsResponsive;
@property (readonly, nonatomic) CGFloat estimatedProgress;
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) *__SecTrust serverTrust;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *unreachableURL;


-(id)initWithPage:(*void)arg0 ;
-(void)dealloc;


@end


#endif