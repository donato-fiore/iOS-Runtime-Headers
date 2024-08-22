// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRMONOGRAMVIEW_H
#define PRMONOGRAMVIEW_H

@class UIView, CAGradientLayer, UITextField, NSString;
@protocol UITextFieldDelegate;


#import "PRMonogram.h"

@interface PRMonogramView : UIView <UITextFieldDelegate>

 {
    CAGradientLayer *_circleGradientLayer;
    UITextField *_textField;
}


@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL bordered; // ivar: _bordered
@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) PRMonogram *monogram; // ivar: _monogram
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCornerRadii;
-(void)_updateTextLabel;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldResignFirstResponder;


@end


#endif