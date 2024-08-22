// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFFEEDBACKFORMSHORTTEXTCELL_H
#define TFFEEDBACKFORMSHORTTEXTCELL_H

@class NSString, UITextField;
@protocol UITextFieldDelegate;


#import "TFFeedbackFormBaseCell.h"
#import "TFFeedbackEntryShortText.h"

@interface TFFeedbackFormShortTextCell : TFFeedbackFormBaseCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TFFeedbackEntryShortText *shortTextEntry; // ivar: _shortTextEntry
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


+(id)_createTextFieldFontWithTraitCollection:(id)arg0 ;
+(struct CGSize )_sizeToFitText:(id)arg0 fittingSize:(struct CGSize )arg1 inTraitEnvironment:(id)arg2 ;
+(struct CGSize )sizeForEntry:(id)arg0 dataSource:(id)arg1 fittingSize:(struct CGSize )arg2 inTraitEnvironment:(id)arg3 ;
+(struct UIEdgeInsets )_textFieldInsetsInTraitEnvironment:(id)arg0 ;
-(NSUInteger)displayableDataType;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureTextFieldForContentType:(NSUInteger)arg0 ;
-(void)_prepareForDisplayWithTraitCollection:(id)arg0 ;
-(void)applyContentsOfEntry:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDisplayedDataString:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif