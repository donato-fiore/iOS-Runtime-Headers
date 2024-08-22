// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKLISTTEXTFIELDCONTENTVIEW_H
#define PKLISTTEXTFIELDCONTENTVIEW_H

@class UIView, UILabel, UITextField, NSString;
@protocol UITextFieldDelegate, UIContentView, PKListTextFieldContentViewDelegate;


#import "PKListTextFieldContentConfiguration.h"

@interface PKListTextFieldContentView : UIView <UITextFieldDelegate, UIContentView>

 {
    UILabel *_textLabel;
    UITextField *_textField;
    UILabel *_secondaryTextLabel;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) PKListTextFieldContentConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PKListTextFieldContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)_textAlignmentForListAlignment:(NSInteger)arg0 ;
-(NSInteger)_textAutocapTypeForTextTransform:(NSInteger)arg0 ;
-(id)_transformedText:(id)arg0 forTransform:(NSInteger)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textFieldText;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyConfiguration:(id)arg0 ;
-(void)_applyTextProperties:(id)arg0 toLabel:(id)arg1 ;
-(void)_applyTextProperties:(id)arg0 toTextField:(id)arg1 ;
-(void)_textFieldTextDidChange:(id)arg0 ;
-(void)_updateErrorState:(BOOL)arg0 ;
-(void)beginEditing;
-(void)endEditing;
-(void)layoutSubviews;
-(void)resetTextFieldTextFromLabel;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif