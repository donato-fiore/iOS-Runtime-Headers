// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDFOCUSCONTAINERVIEW_H
#define GKDASHBOARDFOCUSCONTAINERVIEW_H

@class UIView;



@interface GKDashboardFocusContainerView : UIView

@property (nonatomic) UIView *focusView; // ivar: _focusView


-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;


@end


#endif