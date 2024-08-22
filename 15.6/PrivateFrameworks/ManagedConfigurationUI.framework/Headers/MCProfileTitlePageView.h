// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPROFILETITLEPAGEVIEW_H
#define MCPROFILETITLEPAGEVIEW_H

@class UIView, UIButton;


#import "MCSectionBasedTableView.h"

@interface MCProfileTitlePageView : MCSectionBasedTableView

@property (readonly, nonatomic) UIView *bottomBarView; // ivar: _bottomBarView
@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (readonly, nonatomic) UIButton *installButton; // ivar: _installButton
@property (readonly, nonatomic) UIView *topBarView; // ivar: _topBarView


-(id)_createBottomView;
-(id)_createCancelButton;
-(id)_createInfoButton;
-(id)_createInstallButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)showBottomView:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif