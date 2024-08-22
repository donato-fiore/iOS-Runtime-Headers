// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERHEADERCELL_H
#define HUTRIGGERHEADERCELL_H

@class UITableViewCell, NSArray, NSString, HFItem, UILabel;
@protocol HUCellProtocol, HUResizableCellDelegate;


#import "HUGridLayoutOptions.h"

@interface HUTriggerHeaderCell : UITableViewCell <HUCellProtocol>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) CGFloat contentBottomMargin; // ivar: _contentBottomMargin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateTitleLabel;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif