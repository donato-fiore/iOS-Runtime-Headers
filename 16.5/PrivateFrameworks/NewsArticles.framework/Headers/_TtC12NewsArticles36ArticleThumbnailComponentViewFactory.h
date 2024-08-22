// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES36ARTICLETHUMBNAILCOMPONENTVIEWFACTORY_H
#define _TTC12NEWSARTICLES36ARTICLETHUMBNAILCOMPONENTVIEWFACTORY_H

@class SXComponentViewFactory, NSString;



@interface _TtC12NewsArticles36ArticleThumbnailComponentViewFactory : SXComponentViewFactory {
    ? renderingView;
    ? resolver;
    ? linkedContentProvider;
}


@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *type;


-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 ;


@end


#endif