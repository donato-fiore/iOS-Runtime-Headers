// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORMULTILINESTRINGCELL_H
#define HKMEDICALIDEDITORMULTILINESTRINGCELL_H

@class UILabel, NSString, UITextView;
@protocol UITextViewDelegate, HKMultilineCellHeightEstimatable, HKMedicalIDEditorCellHeightChangeDelegate;


#import "HKMedicalIDEditorCell.h"

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate, HKMultilineCellHeightEstimatable>

 {
    UILabel *_labelLabel;
    CGFloat _lastSeenTextViewContentHeight;
    UILabel *_placeholderLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HKMedicalIDEditorCellHeightChangeDelegate> *heightChangeDelegate; // ivar: _heightChangeDelegate
@property (retain, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView
@property (nonatomic) UIEdgeInsets textViewExtraMargins; // ivar: _textViewExtraMargins


+(BOOL)showsLabelAndValue;
-(CGFloat)estimatedHeightWithWidth:(CGFloat)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)label;
-(struct CGRect )_cursorRectForTextView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_labelTapped:(id)arg0 ;
-(void)commitEditing;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLabel:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif