// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABHOVERPREVIEW_H
#define TABHOVERPREVIEW_H

@class UIView, UILabel, NSLayoutConstraint, NSString;


#import "TabSnapshotImageView.h"

@interface TabHoverPreview : UIView {
    TabSnapshotImageView *_snapshotView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingEdgeConstraint;
    NSLayoutConstraint *_trailingEdgeConstraint;
    NSLayoutConstraint *_snapshotHeightWidthRatioConstraint;
}


@property (nonatomic) BOOL insetsPreviewFromTabBarEdge; // ivar: _insetsPreviewFromTabBarEdge
@property (retain, nonatomic) NSString *secondaryTitleText;
@property (readonly, weak) UIView *tabBar; // ivar: _tabBar
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) CGFloat topInset; // ivar: _topInset


-(id)initWithTabBar:(id)arg0 ;
-(void)_setPositionalConstraintsActive:(BOOL)arg0 ;
-(void)_updateConstraintsWithItemView:(id)arg0 ;
-(void)dismissPreview;
-(void)setSnapshotImage:(id)arg0 ;
-(void)showPreviewForItemView:(id)arg0 ;


@end


#endif