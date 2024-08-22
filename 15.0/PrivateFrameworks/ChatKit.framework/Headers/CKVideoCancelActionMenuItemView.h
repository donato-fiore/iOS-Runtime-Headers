// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVIDEOCANCELACTIONMENUITEMVIEW_H
#define CKVIDEOCANCELACTIONMENUITEMVIEW_H

@class UIView, UIVisualEffectView, NSString, UIImageView;
@protocol CKActionMenuItemView;



@interface CKVideoCancelActionMenuItemView : UIView <CKActionMenuItemView>



@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImageView *maskView; // ivar: _maskView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *xView; // ivar: _xView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif