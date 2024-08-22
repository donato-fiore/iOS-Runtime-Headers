// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI230ARTICLETOARTICLESWIPETESTSUITE_H
#define _TTC7NEWSUI230ARTICLETOARTICLESWIPETESTSUITE_H

@class SNTestSuite;
@protocol SNTestSetup;



@interface _TtC7NewsUI230ArticleToArticleSwipeTestSuite : SNTestSuite <SNTestSetup>

 {
    ? scrollViewObserver;
    ? scrollViewContentOffsetObserver;
    ? activity;
}




-(id)init;
-(void)setupTestWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif