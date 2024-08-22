// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLEFIELD_H
#define WFVARIABLEFIELD_H

@class UIImageView, NSString;
@protocol UITextFieldDelegate;


#import "WFTextTokenTextField.h"

@interface WFVariableField : WFTextTokenTextField <UITextFieldDelegate>

 {
    UIImageView *_pillImageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg0 ;


@end


#endif