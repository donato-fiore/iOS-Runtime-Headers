// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUNOWPLAYINGCELLCONTENTVIEW_H
#define MRUNOWPLAYINGCELLCONTENTVIEW_H

@class UIView;


#import "MRUArtworkView.h"
#import "MRUNowPlayingHeaderView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingCellContentView : UIView

@property (readonly, nonatomic) MRUArtworkView *artworkView; // ivar: _artworkView
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) CGFloat textInset;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif