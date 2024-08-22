// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUARTWORKVIEW_H
#define MRUARTWORKVIEW_H

@class UIControl, UIImage, UIImageView, MSVTimer, MPArtworkCatalog, NSString, NSHashTable, UIView, UIPointerStyle;
@protocol MRUVisualStylingProviderObserver;


#import "MRUArtwork.h"
#import "MRUShadowView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUArtworkView : UIControl <MRUVisualStylingProviderObserver>



@property (retain, nonatomic) MRUArtwork *artwork; // ivar: _artwork
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
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) UIView *placeholderBackground; // ivar: _placeholderBackground
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (readonly, nonatomic) UIPointerStyle *pointerStyle;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(BOOL)isSquare:(struct CGSize )arg0 ;
-(BOOL)isSquareArtwork;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeObserver:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateCatalogFittingSize;
-(void)updateStyle;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif