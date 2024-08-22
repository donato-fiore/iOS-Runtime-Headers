// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPANBUTTON_H
#define CPSPANBUTTON_H

@class UIButton, UIView, NSString;
@protocol UIGestureRecognizerDelegate;



@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDirection:(NSInteger)arg0 ;
-(void)_setupPanImages;
-(void)_updateColors;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif