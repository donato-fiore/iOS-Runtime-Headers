// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISCROLLINGTABBARBACKGROUNDVIEW_H
#define SKUISCROLLINGTABBARBACKGROUNDVIEW_H

@class UIView, _UIBackdropView, NSString;



@interface SKUIScrollingTabBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
}


@property (copy, nonatomic) NSString *backdropBarGroupName; // ivar: _backdropBarGroupName
@property (nonatomic) BOOL showsBackdrop; // ivar: _showsBackdrop
@property (nonatomic) BOOL showsBottomHairline; // ivar: _showsBottomHairline
@property (nonatomic) BOOL showsTopHairline; // ivar: _showsTopHairline
@property (nonatomic) BOOL usesOpaqueColorForTopHairline; // ivar: _usesOpaqueColorForTopHairline


-(void)_updateTopHairlineColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif