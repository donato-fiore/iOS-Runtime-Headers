// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUMEDIASUGGESTIONCOLLECTIONVIEWCELL_H
#define MRUMEDIASUGGESTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIActivityIndicatorView, NSString, UILabel;
@protocol MRUVisualStylingProviderObserver, UIPointerInteractionDelegate;


#import "MRUArtworkView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityView; // ivar: _activityView
@property (readonly, nonatomic) MRUArtworkView *artworkView; // ivar: _artworkView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateVisiblity;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif