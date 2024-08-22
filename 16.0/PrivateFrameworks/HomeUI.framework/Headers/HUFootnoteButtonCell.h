// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFOOTNOTEBUTTONCELL_H
#define HUFOOTNOTEBUTTONCELL_H

@class UITableViewCell, NSString, HFItem, UIButton;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUResizableCellDelegate;



@interface HUFootnoteButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *titleButton; // ivar: _titleButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateTextColor;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif