// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUROUTINGTABLEVIEWCELL_H
#define MRUROUTINGTABLEVIEWCELL_H

@class UITableViewCell, NSString, UITapGestureRecognizer, UIImage, UIImageView, UIView, UILabel;
@protocol MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, MRUVolumeControllerDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MRURoutingTableViewCellDelegate;


#import "MRURoutingAccessoryView.h"
#import "MRUVisualStylingProvider.h"
#import "MRURoutingSubtitleController.h"
#import "MRURoutingSubtitleView.h"
#import "MRUVolumeController.h"
#import "MRUSlider.h"

@interface MRURoutingTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, MRUVolumeControllerDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRURoutingTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // ivar: _expandGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UIImageView *outlineImageView; // ivar: _outlineImageView
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // ivar: _routingAccessoryView
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic) BOOL showChevron; // ivar: _showChevron
@property (nonatomic) BOOL showChevronExpanded; // ivar: _showChevronExpanded
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // ivar: _subtitleStateController
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (weak, nonatomic) MRUVolumeController *volumeController; // ivar: _volumeController
@property (retain, nonatomic) MRUSlider *volumeSlider; // ivar: _volumeSlider


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )expandRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg0 ;
-(void)didTapToExpand;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)routingSubtitleStateController:(id)arg0 didUpdateText:(id)arg1 icon:(id)arg2 accessory:(NSInteger)arg3 ;
-(void)setIcon:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setSubtitleAccessory:(NSInteger)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)transitionToNextVisibleStateWithDuration:(CGFloat)arg0 ;
-(void)updateContentSizeCategory;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;
-(void)volumeController:(id)arg0 volumeControlAvailableDidChange:(BOOL)arg1 ;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;
-(void)volumeControllerDidFinishEqualization:(id)arg0 ;
-(void)volumeControllerWillBeginEqualization:(id)arg0 ;


@end


#endif