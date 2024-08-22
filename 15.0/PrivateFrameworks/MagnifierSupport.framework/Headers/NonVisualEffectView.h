// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NONVISUALEFFECTVIEW_H
#define NONVISUALEFFECTVIEW_H

@class UIView, _UIVisualEffectBackdropView, NSString, UIVisualEffect;



@interface NonVisualEffectView : UIView {
    UIView *_contentView;
    CGFloat _cornerRadius;
}


@property (weak, nonatomic, setter=_setCaptureView:) _UIVisualEffectBackdropView *_captureView; // ivar: __captureView
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // ivar: __groupName
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect; // ivar: _effect


-(CGFloat)_cornerRadius;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffect:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;


@end


#endif