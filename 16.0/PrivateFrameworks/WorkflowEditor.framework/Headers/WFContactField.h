// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTACTFIELD_H
#define WFCONTACTFIELD_H

@class UIView, NSString, NSArray, UIButton, WFTextScrollView, NSSet;
@protocol UITextViewDelegate, WFContactFieldDelegate;


#import "WFContactPickerCoordinator.h"
#import "WFContactTextView.h"

@interface WFContactField : UIView <UITextViewDelegate>



@property (nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (retain, nonatomic) WFContactPickerCoordinator *contactPicker; // ivar: _contactPicker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFContactFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (weak, nonatomic) UIButton *plusButton; // ivar: _plusButton
@property (weak, nonatomic) WFTextScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (nonatomic) BOOL shouldEndEditing; // ivar: _shouldEndEditing
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (weak, nonatomic) WFContactTextView *textView; // ivar: _textView
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(BOOL)text:(id)arg0 containsMatchesForProperties:(id)arg1 ;
-(BOOL)text:(id)arg0 containsMatchesForProperty:(int)arg1 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSInteger)tokenizeFreeTextFromRange:(struct _NSRange )arg0 freeTextModificationBlock:(*id)arg1 ;
-(NSUInteger)numberOfValuesForProperties:(id)arg0 inContact:(id)arg1 ;
-(id)containingViewController;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)typingAttributes;
-(void)chooseMultivalueIndexIfNecessaryForContact:(id)arg0 sender:(id)arg1 ;
-(void)deleteFreeText:(id)arg0 replacementRange:(struct _NSRange )arg1 newValue:(id)arg2 ;
-(void)insertContact:(id)arg0 ;
-(void)layoutSubviews;
-(void)presentContactSelectionActionSheetForText:(id)arg0 attributedText:(id)arg1 replacementRange:(struct _NSRange )arg2 ;
-(void)selectContact;
-(void)showContactPicker;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)tintColorDidChange;
-(void)tokenizeFreeText:(id)arg0 replacementRange:(struct _NSRange )arg1 newValue:(id)arg2 ;
-(void)updateContactsFromTextField:(BOOL)arg0 ;
-(void)updateEditableState;


@end


#endif