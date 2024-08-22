// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUITEXTFIELD_H
#define SIRIUITEXTFIELD_H

@class UITextField;



@interface SiriUITextField : UITextField



+(id)imageWithImage:(id)arg0 tintColor:(id)arg1 ;
-(BOOL)_shouldRepeatInsertText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textInputContextIdentifier;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(void)_configureClearButton;


@end


#endif