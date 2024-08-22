// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUBUTTONCELL_H
#define HUBUTTONCELL_H

@class UITableViewCell, NSString, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUResizableCellDelegate;



@interface HUButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) BOOL textColorFollowsTintColor; // ivar: _textColorFollowsTintColor


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)tintColorDidChange;
-(void)updateTitle;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif