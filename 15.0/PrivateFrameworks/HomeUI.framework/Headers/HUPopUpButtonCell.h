// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPOPUPBUTTONCELL_H
#define HUPOPUPBUTTONCELL_H

@class UITableViewCell, UIButton, NSString, HFItem;
@protocol HUCellProtocol, HUResizableCellDelegate;



@interface HUPopUpButtonCell : UITableViewCell <HUCellProtocol>



@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif