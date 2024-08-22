// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSWITCHCELL_H
#define HUSWITCHCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUSwitchCellDelegate, HUResizableCellDelegate;



@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSwitchCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)_switch;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_toggleOn:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif