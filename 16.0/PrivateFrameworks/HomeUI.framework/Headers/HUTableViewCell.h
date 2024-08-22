// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTABLEVIEWCELL_H
#define HUTABLEVIEWCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUResizableCellDelegate;



@interface HUTableViewCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL titleColorFollowsTintColor; // ivar: _titleColorFollowsTintColor
@property (nonatomic) BOOL valueColorFollowsTintColor; // ivar: _valueColorFollowsTintColor


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateDetailTextLabel;
-(void)_updateTitle;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif