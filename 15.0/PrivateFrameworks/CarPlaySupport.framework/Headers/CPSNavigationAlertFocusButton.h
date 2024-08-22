// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSNAVIGATIONALERTFOCUSBUTTON_H
#define CPSNAVIGATIONALERTFOCUSBUTTON_H



#import "CPSButton.h"
#import "CPSNavigationAlertProgressView.h"

@interface CPSNavigationAlertFocusButton : CPSButton

@property (weak, nonatomic) CPSNavigationAlertProgressView *altFocusProgressView; // ivar: _altFocusProgressView


-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif