// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDNAVIGATIONBAR_H
#define HUDASHBOARDNAVIGATIONBAR_H

@class UINavigationBar;
@protocol HUDashboardNavigationTitleViewDelegate;


#import "HUDashboardNavigationTitleView.h"

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate>



@property (nonatomic) BOOL isBackgroundVisible; // ivar: _isBackgroundVisible
@property (retain, nonatomic) HUDashboardNavigationTitleView *titleView; // ivar: _titleView


-(NSInteger)_sceneDraggingBehaviorOnPan;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popNavigationItemAnimated:(BOOL)arg0 ;
-(void)_updateTintColor;
-(void)_updateTitleViewForNavigationItem:(id)arg0 ;
-(void)largeTitleHeightDidChange:(CGFloat)arg0 ;
-(void)pushNavigationItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif