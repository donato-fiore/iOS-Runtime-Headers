// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSHARINGLINKEXTRACTOR_H
#define _SFSHARINGLINKEXTRACTOR_H

@class WKWebView;

#import <Foundation/Foundation.h>


@interface _SFSharingLinkExtractor : NSObject {
    WKWebView *_webView;
}




-(id)initWithWebView:(id)arg0 ;
-(void)fetchSharingLinkWithCompletionHandler:(id)arg0 ;


@end


#endif