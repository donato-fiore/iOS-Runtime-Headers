// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAVIGATIONBAR_H
#define NAVIGATIONBAR_H

@class SFNavigationBar;


#import "UnifiedField.h"

@interface NavigationBar : SFNavigationBar

@property (readonly, nonatomic) UnifiedField *textField;


-(CGFloat)placeholderHorizontalInset;
-(id)newTextField;
-(void)setExpanded:(BOOL)arg0 textFieldSelectionRange:(struct _NSRange )arg1 ;


@end


#endif