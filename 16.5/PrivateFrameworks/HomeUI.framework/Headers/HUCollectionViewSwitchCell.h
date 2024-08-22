// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCOLLECTIONVIEWSWITCHCELL_H
#define HUCOLLECTIONVIEWSWITCHCELL_H

@class UICollectionViewListCell, HFItem;
@protocol HUCellProtocol, HUDisableableCellProtocol, _TtP6HomeUI34HUCollectionViewSwitchCellDelegate_;



@interface HUCollectionViewSwitchCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol>

 {
    ? _disabled;
    ? switchView;
}


@property (nonatomic, retain) NSObject<_TtP6HomeUI34HUCollectionViewSwitchCellDelegate_> *delegate; // ivar: delegate
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, retain) HFItem *item; // ivar: item
@property (nonatomic) BOOL selected;


-(BOOL)isDisabled;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_toggleOn;
-(void)configure;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif