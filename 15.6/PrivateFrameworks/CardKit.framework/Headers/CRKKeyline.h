// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKKEYLINE_H
#define CRKKEYLINE_H

@class UIView;



@interface CRKKeyline : UIView {
    UIView *_keylineView;
}


@property (readonly) NSInteger direction; // ivar: _direction
@property (readonly) NSInteger type; // ivar: _type
@property (readonly) NSUInteger visualEffectStyle; // ivar: _visualEffectStyle


-(CGFloat)_roundedKeylineThickness;
-(CGFloat)defaultKeylineInsetForCurrentDevice;
-(id)_keylineColorForVisualEffectStyle:(NSUInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 direction:(NSInteger)arg1 visualEffectStyle:(NSUInteger)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif