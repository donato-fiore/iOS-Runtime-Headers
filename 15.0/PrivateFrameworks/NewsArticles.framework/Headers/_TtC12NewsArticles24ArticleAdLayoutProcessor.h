// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12NEWSARTICLES24ARTICLEADLAYOUTPROCESSOR_H
#define _TTC12NEWSARTICLES24ARTICLEADLAYOUTPROCESSOR_H

@protocol SXLayoutProcessor;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles24ArticleAdLayoutProcessor : NSObject <SXLayoutProcessor>

 {
    ? layoutEnvironmentProvider;
    ? bannerAdRequesterFactory;
    ? layoutEnvironment;
}




-(id)init;
-(void)processLayoutTask:(id)arg0 layoutBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;


@end


#endif