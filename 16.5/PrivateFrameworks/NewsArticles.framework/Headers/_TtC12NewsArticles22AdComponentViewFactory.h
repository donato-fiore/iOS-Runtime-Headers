// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES22ADCOMPONENTVIEWFACTORY_H
#define _TTC12NEWSARTICLES22ADCOMPONENTVIEWFACTORY_H

@class SXComponentViewFactory, NSString;



@interface _TtC12NewsArticles22AdComponentViewFactory : SXComponentViewFactory {
    ? resolver;
    ? bannerAdFactory;
    ? viewManager;
    ? requestManager;
    ? bannerAdRenderer;
    ? integrator;
    ? exposureMonitor;
    ? journal;
    ? trackerFactory;
}


@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *type;


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 ;


@end


#endif