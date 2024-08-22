// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEDITABLECHECKMARKTEXTCELL_H
#define HUEDITABLECHECKMARKTEXTCELL_H

@class UITableViewCell, UIView, UITapGestureRecognizer, NSString, NSArray, HFItem, UITextField;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol, HUEditableCheckmarkDelegate, HUResizableCellDelegate;


#import "HUCheckmarkAccessoryView.h"

@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol>

 {
    UIView *_accessoryView;
}


@property (nonatomic) BOOL allowCheckmarkSelectionWhileDisabled; // ivar: _allowCheckmarkSelectionWhileDisabled
@property (retain, nonatomic) UITapGestureRecognizer *checkmarkTapRecognizer; // ivar: _checkmarkTapRecognizer
@property (retain, nonatomic) HUCheckmarkAccessoryView *checkmarkView; // ivar: _checkmarkView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUEditableCheckmarkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableCheckmark; // ivar: _disableCheckmark
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSArray *dynamicConstraints; // ivar: _dynamicConstraints
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setChecked:) BOOL isChecked; // ivar: _isChecked
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (nonatomic) BOOL removeCheckmark; // ivar: _removeCheckmark
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) NSArray *staticConstraints; // ivar: _staticConstraints
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


+(BOOL)requiresConstraintBasedLayout;
-(id)accessoryView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_checkmarkTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryView:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif