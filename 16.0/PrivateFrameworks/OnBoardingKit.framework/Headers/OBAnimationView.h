// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBANIMATIONVIEW_H
#define OBANIMATIONVIEW_H

@class UIView, CAPackage, CALayer;
@protocol OBAnimationAppearanceChangeDelegate;



@interface OBAnimationView : UIView

@property (weak, nonatomic) NSObject<OBAnimationAppearanceChangeDelegate> *appearanceChangeDelegate; // ivar: _appearanceChangeDelegate
@property BOOL flipForRTL; // ivar: _flipForRTL
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CALayer *packageLayer; // ivar: _packageLayer
@property (nonatomic) CGRect preferredFrame; // ivar: _preferredFrame
@property CGFloat scale; // ivar: _scale


-(CGFloat)defaultScale;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif