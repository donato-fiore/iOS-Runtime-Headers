// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI25SPORTSCANONICALBANNERCELL_H
#define _TTC8VIDEOSUI25SPORTSCANONICALBANNERCELL_H



#import "VUIBaseCollectionViewCell.h"

@interface _TtC8VideosUI25SportsCanonicalBannerCell : VUIBaseCollectionViewCell {
    ? bannerViewModel;
    ? layout;
    ? uberBackgroundView;
    ? uberBackgroundImageViewModel;
    ? previousViewSize;
    ? accessibilityPreviouslyEnabled;
    ? transitionBackgroundView;
    ? sportsCanonicalBannerOpacityProxy;
    ? newBannerView;
    ? newBannerAccessoryView;
    ? bannerView;
    ? scoreboardUpdateTimer;
    ? scoreboardUpdateRequest;
    ? syndicationId;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)vui_cellDidEndDisplaying;
-(void)vui_cellWillBeDisplayed;
-(void)vui_prepareForReuse;


@end


#endif