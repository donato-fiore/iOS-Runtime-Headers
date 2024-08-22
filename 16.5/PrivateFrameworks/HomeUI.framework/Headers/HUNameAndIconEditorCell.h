// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNAMEANDICONEDITORCELL_H
#define HUNAMEANDICONEDITORCELL_H

@class UITableViewCell, UIView, NSString, HFItem, UITextField, UIFont, NSLayoutConstraint;
@protocol HUCellProtocol, HUEditableTextCellProtocol, HUDisableableCellProtocol, HUNameAndIconEditorCellDelegate, HUResizableCellDelegate;


#import "HUIconButton.h"

@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUEditableTextCellProtocol, HUDisableableCellProtocol>



@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUNameAndIconEditorCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideIconButton; // ivar: _hideIconButton
@property (retain, nonatomic) HUIconButton *iconButton; // ivar: _iconButton
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) UIFont *textFieldFont;
@property (retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint; // ivar: _textFieldLeadingConstraint


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_handleIconButtonTap:(id)arg0 ;
-(void)_setupConstraints;
-(void)_updateDisabled;
-(void)_updateTextFieldInset;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif