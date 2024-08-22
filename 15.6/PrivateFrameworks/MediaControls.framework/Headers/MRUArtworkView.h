// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUARTWORKVIEW_H
#define MRUARTWORKVIEW_H

@class UIView, UIImage, UIImageView, MSVTimer, MPArtworkCatalog, NSString, UIPointerStyle;
@protocol MRUVisualStylingProviderObserver;


#import "MRUShadowView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUArtworkView : UIView <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) UIImageView *artworkImageView; // ivar: _artworkImageView
@property (retain, nonatomic) MRUShadowView *artworkShadowView; // ivar: _artworkShadowView
@property (retain, nonatomic) MSVTimer *artworkTimer; // ivar: _artworkTimer
@property (retain, nonatomic) MPArtworkCatalog *catalog; // ivar: _catalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger failedRetryCount; // ivar: _failedRetryCount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) MRUShadowView *iconShadowView; // ivar: _iconShadowView
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIView *placeholderBackground; // ivar: _placeholderBackground
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (readonly, nonatomic) UIPointerStyle *pointerStyle;
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(BOOL)isDeviceIcon;
-(BOOL)isSquare:(struct CGSize )arg0 ;
-(BOOL)isSquareArtwork;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )artworkFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updatePlaceholderSymbolConfiguration;
-(void)updateStyle;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif