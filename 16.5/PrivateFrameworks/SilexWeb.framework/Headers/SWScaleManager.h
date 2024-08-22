// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSCALEMANAGER_H
#define SWSCALEMANAGER_H

@class NSString, WKWebView;
@protocol SWScaleManager;

#import <Foundation/Foundation.h>


@interface SWScaleManager : NSObject <SWScaleManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 scale:(CGFloat)arg1 ;


@end


#endif