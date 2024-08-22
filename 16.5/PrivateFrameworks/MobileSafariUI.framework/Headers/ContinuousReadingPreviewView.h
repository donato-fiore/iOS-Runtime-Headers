// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTINUOUSREADINGPREVIEWVIEW_H
#define CONTINUOUSREADINGPREVIEWVIEW_H

@class UIView, SFBannerTheme, UIImageView, WKWebView, UIImage, UILabel;


#import "ContinuousReadingBannerView.h"
#import "ContinuousReadingItem.h"

@interface ContinuousReadingPreviewView : UIView {
    SFBannerTheme *_bannerTheme;
    UIView *_headerHairline;
    UIImageView *_snapshotView;
}


@property (retain, nonatomic) ContinuousReadingBannerView *bannerView; // ivar: _bannerView
@property (readonly, nonatomic) BOOL canShowContentView;
@property (retain, nonatomic) UIView *contentBackgroundView; // ivar: _contentBackgroundView
@property (retain, nonatomic) WKWebView *contentView; // ivar: _contentView
@property (nonatomic) CGSize contentViewSize; // ivar: _contentViewSize
@property (readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // ivar: _continuousReadingItem
@property (retain, nonatomic) UIImage *documentSnapshot; // ivar: _documentSnapshot
@property (readonly, nonatomic) CGFloat headerHeight;
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic, getter=isPrefetchingDisabled) BOOL prefetchingDisabled; // ivar: _prefetchingDisabled
@property (readonly, nonatomic, getter=isPreviewingNextDocument) BOOL previewingNextDocument; // ivar: _previewingNextDocument
@property (readonly, nonatomic) CGFloat rubberBandingHeight;


-(id)initWithContinuousReadingItem:(id)arg0 previewingNextDocument:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layOutContentView;
-(void)_layOutHeader;
-(void)layoutSubviews;
-(void)replaceContentViewWithItsSnapshot;
-(void)setBannerTheme:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif