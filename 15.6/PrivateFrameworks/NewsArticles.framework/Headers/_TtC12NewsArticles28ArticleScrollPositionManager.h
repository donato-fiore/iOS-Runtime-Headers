// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12NEWSARTICLES28ARTICLESCROLLPOSITIONMANAGER_H
#define _TTC12NEWSARTICLES28ARTICLESCROLLPOSITIONMANAGER_H

@class SwiftObject;
@protocol NUArticleScrollPositionManagerType;



@interface _TtC12NewsArticles28ArticleScrollPositionManager : SwiftObject <NUArticleScrollPositionManagerType>

 {
    ? readingHistory;
    ? currentlyPlayingObservable;
}




-(id)scrollPositionForHeadline:(id)arg0 ;
-(void)setPosition:(id)arg0 headline:(id)arg1 ;


@end


#endif