// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI31EDITFAVORITESCOLLECTIONVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI31EDITFAVORITESCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell;



@interface _TtC18HealthExperienceUI31EditFavoritesCollectionViewCell : UICollectionViewListCell {
    ? item;
    ? textStyle;
    ? $__lazy_storage_$_font;
    ? $__lazy_storage_$_notFavoritedImage;
    ? $__lazy_storage_$_favoritedImage;
    ? $__lazy_storage_$_accessoryImageView;
}


@property (nonatomic, readonly) BOOL axItemIsFavorited;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif