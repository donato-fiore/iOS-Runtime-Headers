// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGHEADERVIEW_H
#define MRUNOWPLAYINGHEADERVIEW_H

@class UIControl, NSString, MPAVRoute;
@protocol MRUVisualStylingProviderObserver, UIPointerInteractionDelegate;


#import "MRUArtworkView.h"
#import "MRUNowPlayingLabelView.h"
#import "MRUNowPlayingRoutingButton.h"
#import "MRUVisualStylingProvider.h"
#import "MRUTransportButton.h"

@interface MRUNowPlayingHeaderView : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>



@property (nonatomic) CGRect artworkOverrideFrame; // ivar: _artworkOverrideFrame
@property (readonly, nonatomic) MRUArtworkView *artworkView; // ivar: _artworkView
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRUNowPlayingLabelView *labelView; // ivar: _labelView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (copy, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic) MRUNowPlayingRoutingButton *routingButton; // ivar: _routingButton
@property (nonatomic) BOOL showArtworkView; // ivar: _showArtworkView
@property (nonatomic) BOOL showPlaceholderText;
@property (nonatomic) BOOL showRoutingButton; // ivar: _showRoutingButton
@property (nonatomic) BOOL showTransportButton; // ivar: _showTransportButton
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textCenterOffsetY; // ivar: _textCenterOffsetY
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) MRUTransportButton *transportButton; // ivar: _transportButton
@property (nonatomic) BOOL useArtworkOverrideFrame; // ivar: _useArtworkOverrideFrame


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)textInsetForSize:(struct CGSize )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)prepareForReuse;
-(void)updateArtworkStyle;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif