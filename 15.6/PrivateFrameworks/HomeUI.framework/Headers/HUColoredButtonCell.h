// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCOLOREDBUTTONCELL_H
#define HUCOLOREDBUTTONCELL_H

@class UITableViewCell, UIColor, NSString, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUColoredButtonCellDelegate, HUResizableCellDelegate;


#import "HUColoredButton.h"

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (retain, nonatomic) HUColoredButton *button; // ivar: _button
@property (retain, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (nonatomic) BOOL buttonColorFollowsTintColor; // ivar: _buttonColorFollowsTintColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUColoredButtonCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)buttonPressed:(id)arg0 ;
-(void)prepareForReuse;
-(void)tintColorDidChange;
-(void)updateButtonColor;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif