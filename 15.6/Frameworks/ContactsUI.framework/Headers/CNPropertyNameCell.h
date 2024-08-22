// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYNAMECELL_H
#define CNPROPERTYNAMECELL_H

@class UIResponder, UITextField;
@protocol CNPropertyCellDelegate;


#import "CNContactCell.h"
#import "CNPropertyGroupItem.h"

@interface CNPropertyNameCell : CNContactCell

@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIResponder *firstResponderItem; // ivar: _firstResponderItem
@property (retain, nonatomic) CNPropertyGroupItem *propertyItem;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


+(BOOL)shouldIndentWhileEditing;
-(CGFloat)minCellHeight;
-(id)constantConstraints;
-(id)displayStringForValue:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)placeholderString;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCardGroupItem:(id)arg0 ;
-(void)textFieldChanged:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif