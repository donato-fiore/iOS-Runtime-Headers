// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCAPTIONBARVIEW_H
#define LPCAPTIONBARVIEW_H

@class LPComponentView<LPTextStyleable>, LPComponentView<LPTextStyleable><LPSubtitleButtonContainer>, NSString, NSRegularExpression;
@protocol CAAnimationDelegate, LPComponentMediaPlayable;


#import "LPComponentView.h"
#import "LPCaptionBarStyle.h"
#import "LPCaptionBarPresentationProperties.h"
#import "LPPlayButtonView.h"
#import "LPCaptionBarAccessoryView.h"
#import "LPCaptionBarButtonView.h"
#import "LPVerticalTextStackView.h"
#import "LPInlineMediaPlaybackInformation.h"
#import "LPCollaborationFooterView.h"

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate, LPComponentMediaPlayable>

 {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    LPComponentView *_leftIconView;
    LPComponentView *_rightIconView;
    LPPlayButtonView *_playButton;
    LPCaptionBarAccessoryView *_leftAccessoryView;
    LPCaptionBarAccessoryView *_rightAccessoryView;
    LPCaptionBarButtonView *_buttonView;
    LPComponentView *_leftIconBadgeView;
    LPComponentView *_rightIconBadgeView;
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
    LPComponentView<LPTextStyleable> *_topCaptionView;
    LPComponentView<LPTextStyleable><LPSubtitleButtonContainer> *_bottomCaptionView;
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
    LPVerticalTextStackView *_textStackView;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    BOOL _hasEverBuilt;
}


@property (retain, nonatomic) LPCollaborationFooterView *collaborationFooterView; // ivar: _collaborationFooterView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // ivar: _emphasizedTextExpression
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets textSafeAreaInset; // ivar: _textSafeAreaInset
@property (nonatomic) BOOL useProgressSpinner; // ivar: _useProgressSpinner


-(id)button;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 style:(id)arg1 presentationProperties:(id)arg2 ;
-(id)playable;
-(id)primaryIconView;
-(id)subtitleButton;
-(struct CGSize )_layoutCaptionBarForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buildViewsForCaptionBarIfNeeded;
-(void)animateInWithBaseAnimation:(id)arg0 currentTime:(CGFloat)arg1 ;
-(void)animateOut;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutComponentView;
-(void)setPlaybackInformation:(id)arg0 ;
-(void)setPresentationProperties:(id)arg0 ;
-(void)updateTextStack;


@end


#endif