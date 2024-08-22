// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES29ARTICLETHUMBNAILCOMPONENTVIEW_H
#define _TTC12NEWSARTICLES29ARTICLETHUMBNAILCOMPONENTVIEW_H

@class SXComponentView;



@interface _TtC12NewsArticles29ArticleThumbnailComponentView : SXComponentView {
    ? linkedContentProvider;
    ? articleThumbnailViewRenderer;
    ? articleThumbnailView;
}




-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 ;
-(void)discardContents;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;


@end


#endif