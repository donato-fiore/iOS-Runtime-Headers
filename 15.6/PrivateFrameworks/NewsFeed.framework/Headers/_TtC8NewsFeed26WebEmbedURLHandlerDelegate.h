// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED26WEBEMBEDURLHANDLERDELEGATE_H
#define _TTC8NEWSFEED26WEBEMBEDURLHANDLERDELEGATE_H

@protocol NUURLHandlerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed26WebEmbedURLHandlerDelegate : NSObject <NUURLHandlerDelegate>

 {
    ? webLinkPresentingViewController;
}




-(id)init;
-(void)URLHandler:(id)arg0 wantsToPresentViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif