// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTEXTVIEWCELL_H
#define SUTEXTVIEWCELL_H

@class UIScrollView, NSString;
@protocol UITextContentViewDelegate, SUTextViewCellDelegate;


#import "SUTableCell.h"
#import "SUTextContentView.h"

@interface SUTextViewCell : SUTableCell <UITextContentViewDelegate>

 {
    UIScrollView *_scrollView;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUTextViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SUTextContentView *textContentView; // ivar: _textContentView


-(BOOL)resignFirstResponder;
-(BOOL)textContentView:(id)arg0 shouldChangeSizeForContentSize:(struct CGSize )arg1 ;
-(BOOL)textContentView:(id)arg0 shouldScrollForPendingContentSize:(struct CGSize )arg1 ;
-(BOOL)textContentViewShouldBeginEditing:(id)arg0 ;
-(BOOL)textContentViewShouldEndEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)textContentView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)textContentViewDidChange:(id)arg0 ;


@end


#endif