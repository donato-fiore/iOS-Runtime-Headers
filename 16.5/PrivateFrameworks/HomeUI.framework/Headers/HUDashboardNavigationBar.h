// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)largeTitleHeightDidChange:(CGFloat)arg0 ;


@end


#endif