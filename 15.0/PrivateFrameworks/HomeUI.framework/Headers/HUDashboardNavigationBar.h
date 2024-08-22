// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDNAVIGATIONBAR_H
#define HUDASHBOARDNAVIGATIONBAR_H

@class UINavigationBar, NSString, NSArray;
@protocol HUDashboardNavigationTitleViewDelegate, HUDashboardNavigationHost;


#import "HUNavigationBarLayoutOptions.h"
#import "HUDashboardNavigationTitleView.h"

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate, HUDashboardNavigationHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBackgroundVisible; // ivar: _isBackgroundVisible
@property (copy, nonatomic) HUNavigationBarLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) NSArray *leftDashboardNavigationButtons; // ivar: _leftDashboardNavigationButtons
@property (retain, nonatomic) NSArray *rightDashboardNavigationButtons; // ivar: _rightDashboardNavigationButtons
@property (readonly) Class superclass;
@property (retain, nonatomic) HUDashboardNavigationTitleView *titleView; // ivar: _titleView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popNavigationItemAnimated:(BOOL)arg0 ;
-(void)_updateAllBarButtonItemsForTopItem;
-(void)_updateLayoutMargins;
-(void)_updateLeftBarButtonItemsForTopItem;
-(void)_updateRightBarButtonItemsForTopItem;
-(void)_updateTintColor;
-(void)_updateTintColorForBarButtons:(id)arg0 ;
-(void)largeTitleHeightDidChange:(CGFloat)arg0 ;
-(void)pushNavigationItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif