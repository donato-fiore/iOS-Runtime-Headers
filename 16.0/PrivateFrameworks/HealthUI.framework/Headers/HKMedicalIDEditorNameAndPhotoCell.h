// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORNAMEANDPHOTOCELL_H
#define HKMEDICALIDEDITORNAMEANDPHOTOCELL_H

@class UIView, NSString, UIButton, UIImage;
@protocol UITextViewDelegate;


#import "HKMedicalIDEditorMultilineStringCell.h"

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell <UITextViewDelegate>

 {
    UIView *_nameBottomSeparator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIButton *editPhotoButton; // ivar: _editPhotoButton
@property (readonly, nonatomic) UIButton *editPhotoLabelButton; // ivar: _editPhotoLabelButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *photo;
@property (readonly) Class superclass;


+(BOOL)showsLabelAndValue;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustEditPhotoButtonFontSizeIfNecessary;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_largeTextLayoutSubviews;
-(void)_regularLayoutSubviews;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif