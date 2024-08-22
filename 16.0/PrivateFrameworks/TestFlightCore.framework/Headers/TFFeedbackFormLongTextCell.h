// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFFEEDBACKFORMLONGTEXTCELL_H
#define TFFEEDBACKFORMLONGTEXTCELL_H

@class NSString, UITextView;
@protocol UITextViewDelegate;


#import "TFFeedbackFormBaseCell.h"
#import "TFFeedbackEntryLongText.h"

@interface TFFeedbackFormLongTextCell : TFFeedbackFormBaseCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TFFeedbackEntryLongText *longTextEntry; // ivar: _longTextEntry
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView


+(CGFloat)_adjustedTextViewHeightForCandidateHeight:(CGFloat)arg0 font:(id)arg1 ;
+(id)_createTextViewFontForTraitCollection:(id)arg0 ;
+(struct CGSize )_sizeToFitText:(id)arg0 fittingSize:(struct CGSize )arg1 inTraitEnvironment:(id)arg2 ;
+(struct CGSize )sizeForEntry:(id)arg0 dataSource:(id)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;
+(struct UIEdgeInsets )_textViewInsetsInTraitEnvironment:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(NSUInteger)displayableDataType;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg0 ;
-(void)_updateCellHeightForTextIfNecessary;
-(void)_updateCellHeightForTextUpdatesInTableView:(id)arg0 ;
-(void)applyContentsOfEntry:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDisplayedDataString:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif