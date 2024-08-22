// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBWIDGETFOCUSABLEVIEW_H
#define DBWIDGETFOCUSABLEVIEW_H

@class UIView, CRSDashboardFocusableItem;
@protocol DBWidgetFocusableViewDelegate;



@interface DBWidgetFocusableView : UIView

@property (weak, nonatomic) NSObject<DBWidgetFocusableViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CRSDashboardFocusableItem *focusableItem; // ivar: _focusableItem


-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_selected;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif