// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACECOLLECTIONPULLQUOTEPLATTERVIEW_H
#define MUPLACECOLLECTIONPULLQUOTEPLATTERVIEW_H

@class UIView, UITapGestureRecognizer;
@protocol MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceCollectionPullQuoteViewModel;


#import "MUCuratedCollectionSummaryView.h"
#import "MUPullQuoteView.h"

@interface MUPlaceCollectionPullQuotePlatterView : UIView {
    MUCuratedCollectionSummaryView *_collectionSummaryView;
    MUPullQuoteView *_pullQuoteView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (weak, nonatomic) NSObject<MUPlaceCollectionPullQuotePlatterViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<MUPlaceCollectionPullQuoteViewModel> *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeDidChange;
-(void)_didSelectCollection;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif