// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCKUPCOLLECTIONVIEWCELL_H
#define HULOCKUPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSString, HFItem;
@protocol HULockupInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol, HUResizableCellDelegate;


#import "HULockupView.h"

@interface HULockupCollectionViewCell : UICollectionViewCell <HULockupInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>



@property (readonly, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (nonatomic) BOOL bottomSeparatorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item;
@property (readonly, nonatomic) HULockupView *lockupView; // ivar: _lockupView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate; // ivar: _resizingDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView
@property (nonatomic) BOOL topSeparatorVisible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateRequiredHeightForLockupView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif