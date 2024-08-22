// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMEDIASUGGESTIONCOLLECTIONVIEWCELL_H
#define MRUMEDIASUGGESTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIActivityIndicatorView, UIImage, NSString, UIImageView, BSUIEmojiLabelView, UILabel;
@protocol MRUVisualStylingProviderObserver, UIPointerInteractionDelegate;


#import "MRUArtworkView.h"
#import "MRUShadowView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityView; // ivar: _activityView
@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) MRUArtworkView *artworkView; // ivar: _artworkView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) MRUShadowView *iconShadowView; // ivar: _iconShadowView
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) BSUIEmojiLabelView *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *suggestionIdentifier; // ivar: _suggestionIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateIconView;
-(void)updateVisiblity;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif