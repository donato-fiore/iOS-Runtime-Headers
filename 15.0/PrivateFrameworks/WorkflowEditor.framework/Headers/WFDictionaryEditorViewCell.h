// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDICTIONARYEDITORVIEWCELL_H
#define WFDICTIONARYEDITORVIEWCELL_H

@class UIView;


#import "WFListEditorViewCell.h"
#import "WFTextTokenEditorView.h"

@interface WFDictionaryEditorViewCell : WFListEditorViewCell

@property (readonly, weak, nonatomic) WFTextTokenEditorView *keyEditor; // ivar: _keyEditor
@property (readonly, weak, nonatomic) UIView *separatorView; // ivar: _separatorView


-(BOOL)becomeFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)valueEditorValue;
-(id)valueTitle;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)configureEditorViewController:(id)arg0 ;
-(void)layoutSubviews;
-(void)setAllowedVariableTypes:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(id)arg0 ;
-(void)setVariableProvider:(id)arg0 ;
-(void)setVariablesDisabled:(BOOL)arg0 ;
-(void)updateEditorBlocks;
-(void)updateWithValueState:(id)arg0 ;


@end


#endif