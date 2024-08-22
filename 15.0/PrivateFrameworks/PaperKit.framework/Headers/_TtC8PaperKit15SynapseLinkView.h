// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8PAPERKIT15SYNAPSELINKVIEW_H
#define _TTC8PAPERKIT15SYNAPSELINKVIEW_H

@class TtC8PaperKit8LinkView;
@protocol LPLinkViewDelegate;



@interface _TtC8PaperKit15SynapseLinkView : TtC8PaperKit8LinkView <LPLinkViewDelegate>

 {
    ? $__lazy_storage_$_linkPresentationView;
    ? $__lazy_storage_$_analytics;
    ? synapseLink;
    ? viewModelSize;
    ? viewScaleTransform;
    ? $__lazy_storage_$_hasUserActivityWithLinkContextInfo;
}




-(BOOL)_wantsContextMenuPreviewForLinkView:(id)arg0 ;
-(id)_contextMenuActionsForLinkView:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)linkViewNeedsResize:(id)arg0 ;


@end


#endif