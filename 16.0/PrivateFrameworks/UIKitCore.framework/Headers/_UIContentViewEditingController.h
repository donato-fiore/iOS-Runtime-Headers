// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTENTVIEWEDITINGCONTROLLER_H
#define _UICONTENTVIEWEDITINGCONTROLLER_H

@class NSString;
@protocol UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UILongPressGestureRecognizer.h"
#import "_UIPassthroughScrollInteraction.h"
#import "UIView.h"
#import "UILabel.h"
#import "_UIContentViewEditingConfiguration.h"
#import "_UIContentViewLabelConfiguration.h"
#import "UITextField.h"

@interface _UIContentViewEditingController : NSObject <UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate>

 {
    UILongPressGestureRecognizer *_longPressRecognizer;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    BOOL _hasEdits;
}


@property (readonly, weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingEditedText) BOOL displayingEditedText;
@property (readonly, nonatomic) UILabel *editableLabel; // ivar: _editableLabel
@property (readonly, nonatomic) _UIContentViewEditingConfiguration *editingConfiguration; // ivar: _editingConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *labelConfiguration; // ivar: _labelConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textInputView; // ivar: _textInputView


-(BOOL)makeTextInputFirstResponderWithInitialLayoutBlock:(id)arg0 ;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithContentView:(id)arg0 editableLabel:(id)arg1 ;
-(void)dealloc;
-(void)longPressRecognizerChanged:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateLabelConfiguration:(id)arg0 editingConfiguration:(id)arg1 ;


@end


#endif