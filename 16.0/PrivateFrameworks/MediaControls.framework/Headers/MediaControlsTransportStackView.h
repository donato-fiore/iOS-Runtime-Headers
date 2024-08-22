// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSTRANSPORTSTACKVIEW_H
#define MEDIACONTROLSTRANSPORTSTACKVIEW_H

@class UIView, NSString, MPCPlayerResponse, MTVisualStylingProvider;
@protocol MTVisualStylingProviderObservingPrivate, MediaControlsActionsDelegate;


#import "MediaControlsTransportButton.h"

@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate>



@property (weak, nonatomic) NSObject<MediaControlsActionsDelegate> *actionsDelegate; // ivar: _actionsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MediaControlsTransportButton *languageOptionsButton; // ivar: _languageOptionsButton
@property (retain, nonatomic) MediaControlsTransportButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) MediaControlsTransportButton *middleButton; // ivar: _middleButton
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (retain, nonatomic) MediaControlsTransportButton *rightButton; // ivar: _rightButton
@property (nonatomic) BOOL shouldShowTVRemoteButton; // ivar: _shouldShowTVRemoteButton
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) MediaControlsTransportButton *tvRemoteButton; // ivar: _tvRemoteButton
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(id)_createTransportButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetTransportButton:(id)arg0 ;
-(void)_updateButtonConfiguration;
-(void)_updateButtonLayout;
-(void)_updateButtonVisualStyling:(id)arg0 ;
-(void)_updateVisualStylingForButtons;
-(void)buttonHoldBegan:(id)arg0 ;
-(void)buttonHoldReleased:(id)arg0 ;
-(void)layoutSubviews;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)touchUpInsideCaptionsButton:(id)arg0 ;
-(void)touchUpInsideHangdogButton:(id)arg0 ;
-(void)touchUpInsideLeftButton:(id)arg0 ;
-(void)touchUpInsideMiddleButton:(id)arg0 ;
-(void)touchUpInsideRightButton:(id)arg0 ;
-(void)updateOnRouteChange;


@end


#endif