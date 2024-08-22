// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERTEXTFIELDVIEW_H
#define _UIALERTCONTROLLERTEXTFIELDVIEW_H

@class NSArray;


#import "UIView.h"
#import "_UIAlertControllerTextField.h"
#import "UITextField.h"

@interface _UIAlertControllerTextFieldView : UIView {
    UIView *_containerView;
    _UIAlertControllerTextField *_textField;
    NSArray *_containerViewConstraints;
}


@property (retain, nonatomic) UIView *containerView;
@property (readonly) UITextField *textField;


-(CGFloat)_borderWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_loadConstraints;
-(void)dealloc;


@end


#endif