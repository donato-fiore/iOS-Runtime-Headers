// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDASHBOARDNAVIGATIONTITLEVIEW_H
#define HUDASHBOARDNAVIGATIONTITLEVIEW_H

@class UINavigationBarTitleView;
@protocol HUDashboardNavigationTitleViewDelegate;



@interface HUDashboardNavigationTitleView : UINavigationBarTitleView

@property (weak, nonatomic) NSObject<HUDashboardNavigationTitleViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat previousLargeTitleHeight; // ivar: _previousLargeTitleHeight


-(id)initWithDelegate:(id)arg0 ;
-(void)contentDidChange;


@end


#endif