// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFATTRIBUTEDALERTBUTTON_H
#define WFATTRIBUTEDALERTBUTTON_H

@class NSAttributedString, NSString;


#import "WFSelectableAlertButton.h"

@interface WFAttributedAlertButton : WFSelectableAlertButton

@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


+(id)buttonWithAttributedTitle:(id)arg0 label:(id)arg1 selected:(BOOL)arg2 style:(NSInteger)arg3 handler:(id)arg4 ;


@end


#endif