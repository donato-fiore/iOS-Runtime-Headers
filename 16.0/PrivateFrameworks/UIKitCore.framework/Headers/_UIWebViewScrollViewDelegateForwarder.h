// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWEBVIEWSCROLLVIEWDELEGATEFORWARDER_H
#define _UIWEBVIEWSCROLLVIEWDELEGATEFORWARDER_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "UIWebView.h"

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIScrollViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) UIWebView *webView; // ivar: _webView


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif