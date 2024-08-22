// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYNOTECELL_H
#define CNPROPERTYNOTECELL_H

@class UILabel, UITextView;


#import "CNPropertyCell.h"

@interface CNPropertyNoteCell : CNPropertyCell

@property (readonly, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


+(BOOL)shouldIndentWhileEditing;
-(BOOL)allowsCellSelection;
-(BOOL)displaysCellSelectionState;
-(BOOL)shouldPerformDefaultAction;
-(BOOL)supportsTintColorValue;
-(CGFloat)valueViewBottomMargin;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)valueView;
-(void)dealloc;
-(void)performDefaultAction;
-(void)setAllowsEditing:(BOOL)arg0 ;
-(void)setProperty:(id)arg0 ;
-(void)setValueTextAttributes:(id)arg0 ;
-(void)textViewChanged:(id)arg0 ;
-(void)textViewEditingDidEnd:(id)arg0 ;


@end


#endif