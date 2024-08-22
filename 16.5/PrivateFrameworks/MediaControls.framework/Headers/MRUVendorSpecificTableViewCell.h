// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVENDORSPECIFICTABLEVIEWCELL_H
#define MRUVENDORSPECIFICTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MRUVolumeControllerDelegate, MRUVendorSpecificTableViewCellDelegate;


#import "MRURoutingAccessoryView.h"
#import "MRUVisualStylingProvider.h"
#import "MRURoutingSubtitleController.h"
#import "MRURoutingSubtitleView.h"
#import "MRUVolumeController.h"
#import "MRUSlider.h"

@interface MRUVendorSpecificTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MRUVolumeControllerDelegate>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVendorSpecificTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *deviceIconImage; // ivar: _deviceIconImage
@property (retain, nonatomic) UIImageView *deviceIconImageView; // ivar: _deviceIconImageView
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) UILabel *deviceNameLabel; // ivar: _deviceNameLabel
@property (retain, nonatomic) UIImageView *expandChevronView; // ivar: _expandChevronView
@property (retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // ivar: _expandGestureRecognizer
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *protocolIcon; // ivar: _protocolIcon
@property (copy, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // ivar: _routingAccessoryView
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // ivar: _subtitleStateController
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (weak, nonatomic) MRUVolumeController *volumeController; // ivar: _volumeController
@property (retain, nonatomic) MRUSlider *volumeSlider; // ivar: _volumeSlider


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )expandRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)adjustExpandChevronAngle;
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


@end


#endif