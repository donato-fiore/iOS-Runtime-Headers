// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12NEWSARTICLES15ADCOMPONENTVIEW_H
#define _TTC12NEWSARTICLES15ADCOMPONENTVIEW_H

@class SXComponentView;



@interface _TtC12NewsArticles15AdComponentView : SXComponentView {
    ? bannerView;
    ? $__lazy_storage_$_debugView;
    ? bannerAdFactory;
    ? viewManager;
    ? requestManager;
    ? bannerAdRenderer;
    ? integrator;
    ? exposureMonitor;
    ? tracker;
    ? journal;
    ? layoutAttributes;
}




-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)renderContents;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;


@end


#endif