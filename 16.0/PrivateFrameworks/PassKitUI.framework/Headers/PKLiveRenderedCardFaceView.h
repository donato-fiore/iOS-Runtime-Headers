// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLIVERENDEREDCARDFACEVIEW_H
#define PKLIVERENDEREDCARDFACEVIEW_H

@class UIView, PKPass, PKTexturedCardView, PKPayLaterCardView, UIImageView, NSString;
@protocol PKForegroundActiveArbiterObserver;



@interface PKLiveRenderedCardFaceView : UIView <PKForegroundActiveArbiterObserver>

 {
    PKPass *_pass;
    PKTexturedCardView *_cardView;
    PKPayLaterCardView *_payLaterCardView;
    UIImageView *_logoImageView;
    BOOL _invalidated;
    BOOL _foregroundActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 ;
-(void)_showArmedState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)didAuthenticate;
-(void)didDismiss;
-(void)didPresent;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg0 ;


@end


#endif