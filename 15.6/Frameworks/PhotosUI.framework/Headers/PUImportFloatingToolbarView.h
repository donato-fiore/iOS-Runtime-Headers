// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTFLOATINGTOOLBARVIEW_H
#define PUIMPORTFLOATINGTOOLBARVIEW_H

@class UIView, NSString, NSArray, UIToolbar, UIVisualEffectView;



@interface PUImportFloatingToolbarView : UIView

@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (nonatomic) BOOL shouldBlurBackground; // ivar: _shouldBlurBackground
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateBackdropViewGroupName;
-(void)_updateBackground;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif