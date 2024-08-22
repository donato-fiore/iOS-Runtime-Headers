// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGVIEW_H
#define MRUNOWPLAYINGVIEW_H

@class UIView;


#import "MRUEmbeddingView.h"
#import "MRUNowPlayingContainerView.h"
#import "MRUNowPlayingControlsView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingView : UIView

@property (readonly, nonatomic) MRUEmbeddingView *collapsedEmbeddingView; // ivar: _collapsedEmbeddingView
@property (retain, nonatomic) MRUNowPlayingContainerView *containerView; // ivar: _containerView
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) MRUNowPlayingControlsView *controlsView; // ivar: _controlsView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL showSuggestionsView; // ivar: _showSuggestionsView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) UIView *suggestionsView; // ivar: _suggestionsView
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)updateVisibility;


@end


#endif