// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSALERTBUTTON_H
#define CPSALERTBUTTON_H

@class CPAlertAction;


#import "CPSButton.h"

@interface CPSAlertButton : CPSButton

@property (retain, nonatomic) CPAlertAction *alertAction; // ivar: _alertAction


+(id)buttonWithCPAlertAction:(id)arg0 ;
-(id)_buttonFont;
-(id)_externalUnfocusedBorderColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif