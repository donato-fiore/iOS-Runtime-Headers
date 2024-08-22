// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERCONTAINERVIEW_H
#define _UIPLATTERCONTAINERVIEW_H



#import "UIView.h"
#import "_UIPlatterView.h"

@interface _UIPlatterContainerView : UIView {
    UIView *_updatedTargetWrapper;
}


@property (retain, nonatomic) _UIPlatterView *source; // ivar: _source
@property (retain, nonatomic) _UIPlatterView *target; // ivar: _target
@property (retain, nonatomic) _UIPlatterView *updatedTarget; // ivar: _updatedTarget


-(void)_updateTransforms;
-(void)applyRotation:(CGFloat)arg0 ;
-(void)applyTransform:(struct CGAffineTransform )arg0 withSize:(struct CGSize )arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif