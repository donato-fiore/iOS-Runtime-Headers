// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONTROLPANELCELL_H
#define HUCONTROLPANELCELL_H

@class UITableViewCell, NSSet, NSString, HFItem, NSLayoutConstraint;
@protocol HUCellProtocol, HUResizableCellDelegate;



@interface HUControlPanelCell : UITableViewCell <HUCellProtocol>



@property (readonly, nonatomic) NSSet *allControlViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // ivar: _minHeightConstraint
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif