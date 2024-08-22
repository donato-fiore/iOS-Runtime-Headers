// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI27DATATYPEDETAILFAVORITESCELL_H
#define _TTC18HEALTHEXPERIENCEUI27DATATYPEDETAILFAVORITESCELL_H

@class UICollectionViewListCell;



@interface _TtC18HealthExperienceUI27DataTypeDetailFavoritesCell : UICollectionViewListCell {
    ? item;
    ? parentViewController;
    ? textStyle;
    ? $__lazy_storage_$_notFavoritedImage;
    ? $__lazy_storage_$_favoritedImage;
    ? $__lazy_storage_$_accessoryImageView;
}


@property (nonatomic, readonly) BOOL axItemIsFavorited;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;


@end


#endif