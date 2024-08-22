// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPASSCODEFIELD_H
#define UIPASSCODEFIELD_H

@class NSMutableString, NSMutableArray, NSString;
@protocol UITextFieldDelegate;


#import "UIView.h"
#import "UIButton.h"

@interface UIPasscodeField : UIView <UITextFieldDelegate>

 {
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    NSInteger _keyboardType;
    NSInteger _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
+(Class)textFieldClass;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)showsOKButton;
-(BOOL)textField:(id)arg0 shouldInsertText:(id)arg1 replacingRange:(struct _NSRange )arg2 ;
-(BOOL)textFieldShouldStartEditing:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)stringValue;
-(int)numberOfEntryFields;
-(void)_textDidChange;
-(void)_updateFields;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)deleteLastCharacter;
-(void)okButtonClicked:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 appearance:(NSInteger)arg1 ;
-(void)setKeyboardType:(NSInteger)arg0 appearance:(NSInteger)arg1 emptyContentReturnKeyType:(int)arg2 ;
-(void)setNumberOfEntryFields:(int)arg0 ;
-(void)setNumberOfEntryFields:(int)arg0 opaqueBackground:(BOOL)arg1 ;
-(void)setShowsOKButton:(BOOL)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setTextCentersHorizontally:(BOOL)arg0 ;
-(void)textFieldDidResignFirstResponder:(id)arg0 ;


@end


#endif