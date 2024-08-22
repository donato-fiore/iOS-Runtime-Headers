// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABPOSTALNAMECONTACTEDITINGCELL_H
#define ABPOSTALNAMECONTACTEDITINGCELL_H

@class UITextField, NSString;
@protocol UITextFieldDelegate;


#import "CNContactCell.h"

@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate>

 {
    UITextField *_editingTextField;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)firstResponderItem;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setCardGroupItem:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;


@end


#endif