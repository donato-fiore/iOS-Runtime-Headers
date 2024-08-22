// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEBVIEWLINKEXTRACTOR_H
#define WFWEBVIEWLINKEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface WFWebViewLinkExtractor : NSObject



+(id)linkPositionRetrievalJavaScript;
+(void)extractLinksFromScriptResult:(id)arg0 withDestinationWidth:(CGFloat)arg1 completionHandler:(id)arg2 ;
+(void)extractLinksFromWKWebView:(id)arg0 withDestinationWidth:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif