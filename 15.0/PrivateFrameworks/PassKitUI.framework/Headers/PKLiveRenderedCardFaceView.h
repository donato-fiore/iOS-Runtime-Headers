// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKLIVERENDEREDCARDFACEVIEW_H
#define PKLIVERENDEREDCARDFACEVIEW_H

@class UIView, PKPass, PKTexturedCardView, UIImageView;



@interface PKLiveRenderedCardFaceView : UIView {
    PKPass *_pass;
    PKTexturedCardView *_cardView;
    UIImageView *_logoImageView;
    BOOL _invalidated;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pass:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg0 ;


@end


#endif