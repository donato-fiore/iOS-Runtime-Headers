// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI29DATATYPEDETAILDESCRIPTIONCELL_H
#define _TTC18HEALTHEXPERIENCEUI29DATATYPEDETAILDESCRIPTIONCELL_H

@class UICollectionViewCell, UITextView, UILabel, NSLayoutConstraint;



@interface _TtC18HealthExperienceUI29DataTypeDetailDescriptionCell : UICollectionViewCell {
    ? item;
}


@property (nonatomic, weak) UITextView *attributionTextView; // ivar: attributionTextView
@property (nonatomic, weak) UILabel *detailTextLabel; // ivar: detailTextLabel
@property (nonatomic, weak) NSLayoutConstraint *labelSpacingConstraint; // ivar: labelSpacingConstraint


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;


@end


#endif