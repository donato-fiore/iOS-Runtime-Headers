// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUBUTTONCOLLECTIONVIEWCELL_H
#define HUBUTTONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSString, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUCollectionViewCellSeparatorsProtocol, HUResizableCellDelegate;


#import "HUButtonCell.h"

@interface HUButtonCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUDisableableCellProtocol, HUCollectionViewCellSeparatorsProtocol>



@property (readonly, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (nonatomic) BOOL bottomSeparatorVisible;
@property (readonly, nonatomic) HUButtonCell *buttonView; // ivar: _buttonView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView
@property (nonatomic) BOOL topSeparatorVisible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif