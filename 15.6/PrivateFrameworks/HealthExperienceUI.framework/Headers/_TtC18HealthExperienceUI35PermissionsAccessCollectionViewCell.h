// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI35PERMISSIONSACCESSCOLLECTIONVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI35PERMISSIONSACCESSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIImageView;



@interface _TtC18HealthExperienceUI35PermissionsAccessCollectionViewCell : UICollectionViewCell {
    ? item;
}


@property (nonatomic, weak) UILabel *detailLabel; // ivar: detailLabel
@property (nonatomic, weak) UIImageView *iconImageView; // ivar: iconImageView
@property (nonatomic, weak) UILabel *titleLabel; // ivar: titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;


@end


#endif