// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULINKEDAPPLICATIONCOLLECTIONVIEWCELL_H
#define HULINKEDAPPLICATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSString, HFItem;
@protocol HUCellProtocol, HUCollectionViewCellSeparatorsProtocol, HUResizableCellDelegate;


#import "HULinkedApplicationView.h"

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>



@property (readonly, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (nonatomic) BOOL bottomSeparatorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (readonly, nonatomic) HULinkedApplicationView *linkedApplicationView; // ivar: _linkedApplicationView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView
@property (nonatomic) BOOL topSeparatorVisible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif