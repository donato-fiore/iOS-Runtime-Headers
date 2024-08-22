// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHFIELD_H
#define UISEARCHFIELD_H



#import "UITextField.h"

@interface UISearchField : UITextField



+(CGFloat)defaultHeight;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(id)_placeholderColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_availableTextRectExcludingButtonsForBounds:(struct CGRect )arg0 ;
-(struct CGRect )iconRect;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(void)setPaddingTop:(float)arg0 paddingLeft:(float)arg1 ;


@end


#endif