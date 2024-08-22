// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLHIGHLIGHTDISAMBIGUATIONPILLVIEW_H
#define SLHIGHLIGHTDISAMBIGUATIONPILLVIEW_H

@class UIView, UIVisualEffectView, NSString, UISSlotStyle, _UISlotView, UIPointerInteraction, UIButton, NSLayoutConstraint;
@protocol SLDServiceProxyDelegate, UIPointerInteractionDelegate, OS_dispatch_queue;


#import "SLAttribution.h"
#import "SLDServiceProxy.h"
#import "SLDHighlightDisambiguationPillEmptySlotContent.h"

@interface SLHighlightDisambiguationPillView : UIView <SLDServiceProxyDelegate, UIPointerInteractionDelegate>



@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) SLAttribution *attribution; // ivar: _attribution
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIVisualEffectView *buttonEffectView; // ivar: _buttonEffectView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle; // ivar: _lastRenderedSlotStyle
@property (nonatomic) CGFloat pillMaxWidth; // ivar: _pillMaxWidth
@property (retain, nonatomic) SLDServiceProxy *pillProxy; // ivar: _pillProxy
@property (retain, nonatomic) _UISlotView *pillSlotView; // ivar: _pillSlotView
@property (nonatomic) NSUInteger pillVariant; // ivar: _pillVariant
@property (retain, nonatomic) SLDHighlightDisambiguationPillEmptySlotContent *placeholderSlotContent; // ivar: _placeholderSlotContent
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (nonatomic) BOOL remoteContentIsLoaded; // ivar: _remoteContentIsLoaded
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteRenderingQueue; // ivar: _remoteRenderingQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *transcriptButton; // ivar: _transcriptButton
@property (retain, nonatomic) NSLayoutConstraint *transcriptButtonConstraint; // ivar: _transcriptButtonConstraint


-(id)_contentProviderForCurrentConfiguration:(SEL)arg0 ;
-(id)_layoutConstraintsForIndividualContact;
-(id)_loadButtonWithImageName:(id)arg0 ;
-(id)initWithAttribution:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_chevronButtonTapped:(id)arg0 ;
-(void)_loadBlurView;
-(void)_loadDisambiguationPillSlotView;
-(void)_loadTranscriptButton;
-(void)_macroPillTapped;
-(void)_presentTranscript;
-(void)_transcriptButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif