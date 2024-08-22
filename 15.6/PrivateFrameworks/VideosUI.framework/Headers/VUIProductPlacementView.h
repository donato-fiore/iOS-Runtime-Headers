// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPRODUCTPLACEMENTVIEW_H
#define VUIPRODUCTPLACEMENTVIEW_H

@class UIView, _TVImageView;


#import "VUILabel.h"
#import "VUIVideoAdvisoryViewLayout.h"

@interface VUIProductPlacementView : UIView

@property (retain, nonatomic) VUILabel *blockDescriptionLabel; // ivar: _blockDescriptionLabel
@property (retain, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // ivar: _layout
@property (retain, nonatomic) _TVImageView *logoImageView; // ivar: _logoImageView


-(BOOL)_isPortrait;
-(id)initWithAdvisoryInfoDictionary:(id)arg0 ;
-(struct CGSize )_descriptionSize;
-(struct CGSize )_dividerSize;
-(struct CGSize )_logoSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_descriptionMargin;
-(struct UIEdgeInsets )_dividerMargin;
-(struct UIEdgeInsets )_logoMargin;
-(struct UIEdgeInsets )_margin;
-(void)_configureSubviewsWithDictionary:(id)arg0 ;
-(void)_hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(id)arg0 ;
-(void)_showAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_showWithAnimationWithCompletion:(id)arg0 ;
-(void)show:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif