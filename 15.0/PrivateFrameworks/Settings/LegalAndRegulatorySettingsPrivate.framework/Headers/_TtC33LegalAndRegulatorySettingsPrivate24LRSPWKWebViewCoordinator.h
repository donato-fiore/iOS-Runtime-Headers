// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC33LEGALANDREGULATORYSETTINGSPRIVATE24LRSPWKWEBVIEWCOORDINATOR_H
#define _TTC33LEGALANDREGULATORYSETTINGSPRIVATE24LRSPWKWEBVIEWCOORDINATOR_H

@protocol WKNavigationDelegate, UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC33LegalAndRegulatorySettingsPrivate24LRSPWKWebViewCoordinator : NSObject <WKNavigationDelegate, UIScrollViewDelegate>





-(id)init;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif