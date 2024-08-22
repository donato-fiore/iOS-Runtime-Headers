// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYPOSTALADDRESSEDITINGCELL_H
#define CNPROPERTYPOSTALADDRESSEDITINGCELL_H

@class UIColor;


#import "CNPropertyEditingCell.h"
#import "CNPostalAddressEditorView.h"

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor; // ivar: _addressEditor
@property (copy, nonatomic) UIColor *editorSeparatorColor;


-(CGFloat)leftValueMargin;
-(id)firstResponderItem;
-(id)valueView;
-(id)variableConstraints;
-(void)layoutChanged:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setPresentingDelegate:(id)arg0 ;
-(void)updateWithPropertyItem:(id)arg0 ;
-(void)valueChanged:(id)arg0 ;


@end


#endif