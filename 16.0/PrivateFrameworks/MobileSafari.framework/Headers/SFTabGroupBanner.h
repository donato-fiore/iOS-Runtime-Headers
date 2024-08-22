// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTABGROUPBANNER_H
#define SFTABGROUPBANNER_H

@class UIToolbar, _SWCollaborationButtonView, WBTabGroup, UIAction;


#import "SFPinnableBanner.h"
#import "SFThemeColorEffectView.h"
#import "SFTabGroupTitleView.h"

@interface SFTabGroupBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    SFTabGroupTitleView *_titleView;
    UIToolbar *_toolbar;
}


@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton; // ivar: _collaborationButton
@property (retain, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (retain, nonatomic) UIAction *tabGroupTapAction; // ivar: _tabGroupTapAction


-(BOOL)shouldUsePlainTheme;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateToolbarItems;
-(void)themeDidChange;
-(void)updateTitle;


@end


#endif