// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSALERTBUTTON_H
#define CPSALERTBUTTON_H



#import "CPSButton.h"

@interface CPSAlertButton : CPSButton



+(id)buttonWithCPAlertAction:(id)arg0 ;
-(id)_buttonFont;
-(id)_externalUnfocusedBorderColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif