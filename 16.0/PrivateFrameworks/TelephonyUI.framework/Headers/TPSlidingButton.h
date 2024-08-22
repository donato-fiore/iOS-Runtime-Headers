// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSLIDINGBUTTON_H
#define TPSLIDINGBUTTON_H

@class UIView, _UIActionSlider, NSString, UIImageView, UIButton;
@protocol _UIActionSliderDelegate, TPSlidingButtonDelegateProtocol;



@interface TPSlidingButton : UIView <_UIActionSliderDelegate>



@property (retain) _UIActionSlider *acceptButton; // ivar: _acceptButton
@property (readonly, copy) NSString *debugDescription;
@property NSObject<TPSlidingButtonDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) UIImageView *dialImageView; // ivar: _dialImageView
@property (readonly) NSUInteger hash;
@property (retain) UIButton *sideButtonRight; // ivar: _sideButtonRight
@property (readonly) Class superclass;
@property int type; // ivar: _type


-(id)initWithSlidingButtonType:(int)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)actionSlider:(id)arg0 didUpdateSlideWithValue:(CGFloat)arg1 ;
-(void)actionSliderDidCompleteSlide:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif