// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTWARNINGCELL_H
#define BTWARNINGCELL_H

@class PSTableCell, UITextView, NSArray, NSString;
@protocol UITextViewDelegate;



@interface BTWarningCell : PSTableCell <UITextViewDelegate>

 {
    UITextView *_titleTextView;
    UITextView *_bodyTextView;
    NSArray *_constraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)cellStyle;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif