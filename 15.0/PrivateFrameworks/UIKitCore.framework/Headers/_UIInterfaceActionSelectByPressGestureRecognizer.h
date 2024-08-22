// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERFACEACTIONSELECTBYPRESSGESTURERECOGNIZER_H
#define _UIINTERFACEACTIONSELECTBYPRESSGESTURERECOGNIZER_H

@protocol UIFocusedInterfaceActionPressDelegate;


#import "UITapGestureRecognizer.h"
#import "UIInterfaceActionGroupView.h"
#import "UIInterfaceAction.h"

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView; // ivar: _actionGroupView
@property (weak, nonatomic) UIInterfaceAction *interfaceActionOnPressBegan; // ivar: _interfaceActionOnPressBegan
@property (weak, nonatomic) NSObject<UIFocusedInterfaceActionPressDelegate> *pressDelegate; // ivar: _pressDelegate


-(id)initWithFocusedInterfaceActionPressDelegate:(id)arg0 ;
-(void)_gestureChanged:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;


@end


#endif