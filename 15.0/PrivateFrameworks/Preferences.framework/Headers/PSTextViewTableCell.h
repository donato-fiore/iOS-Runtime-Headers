// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTEXTVIEWTABLECELL_H
#define PSTEXTVIEWTABLECELL_H

@class NSString;
@protocol UITextContentViewDelegate;


#import "PSTableCell.h"
#import "PSTextView.h"

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate>

 {
    PSTextView *_textView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PSTextView *textView;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_adjustTextView:(id)arg0 updateTable:(BOOL)arg1 withSpecifier:(id)arg2 ;
-(void)cellRemovedFromView;
-(void)drawTitleInRect:(struct CGRect )arg0 selected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setValue:(id)arg0 ;
-(void)textContentViewDidChange:(id)arg0 ;
-(void)textContentViewDidEndEditing:(id)arg0 ;


@end


#endif