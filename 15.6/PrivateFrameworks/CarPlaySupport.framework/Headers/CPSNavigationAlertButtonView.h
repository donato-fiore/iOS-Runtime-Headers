// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSNAVIGATIONALERTBUTTONVIEW_H
#define CPSNAVIGATIONALERTBUTTONVIEW_H

@class UIView;


#import "CPSNavigationAlertFocusButton.h"

@interface CPSNavigationAlertButtonView : UIView

@property (retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton; // ivar: _secondaryButton


-(id)initWithPrimaryAction:(id)arg0 secondaryAction:(id)arg1 progressView:(id)arg2 ;


@end


#endif