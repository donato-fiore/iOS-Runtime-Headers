// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI27DATATYPENODATAAVAILABLECELL_H
#define _TTC18HEALTHEXPERIENCEUI27DATATYPENODATAAVAILABLECELL_H

@class UICollectionViewListCell;



@interface _TtC18HealthExperienceUI27DataTypeNoDataAvailableCell : UICollectionViewListCell {
    ? item;
    ? mainTextLabel;
    ? disclosure;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif