// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12NEWSARTICLES13MAILPRESENTER_H
#define _TTC12NEWSARTICLES13MAILPRESENTER_H

@protocol SXMailPresenter;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles13MailPresenter : NSObject <SXMailPresenter>

 {
    ? host;
    ? viewControllerPresenting;
}




-(BOOL)canComposeMail;
-(id)init;
-(void)presentMail:(id)arg0 ;


@end


#endif