// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSOFTWAREUPDATEINFOCOLLECTIONVIEWCELL_H
#define HUSOFTWAREUPDATEINFOCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSString, HFItem;
@protocol HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol, HUResizableCellDelegate;


#import "HUSoftwareUpdateInfoView.h"

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>



@property (readonly, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (nonatomic) BOOL bottomSeparatorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSoftwareUpdateInfoView *infoView; // ivar: _infoView
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate; // ivar: _resizingDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView
@property (nonatomic) BOOL topSeparatorVisible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif