// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWCELLLAYOUTMANAGEREDITABLE1_H
#define UITABLEVIEWCELLLAYOUTMANAGEREDITABLE1_H

@class NSString;
@protocol UITextFieldDelegate;


#import "UITableViewCellLayoutManager.h"

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)defaultTextFieldFontSizeForCell:(id)arg0 ;
-(id)detailTextLabelForCell:(id)arg0 ;
-(id)editableTextFieldForCell:(id)arg0 ;
-(struct CGSize )intrinsicContentSizeForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(void)_textFieldEndEditing:(id)arg0 ;
-(void)_textFieldEndEditingOnReturn:(id)arg0 ;
-(void)_textFieldStartEditing:(id)arg0 ;
-(void)_textValueChanged:(id)arg0 ;
-(void)layoutSubviewsOfCell:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif