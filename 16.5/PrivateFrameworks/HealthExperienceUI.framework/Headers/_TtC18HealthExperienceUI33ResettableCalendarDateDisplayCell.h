// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI33RESETTABLECALENDARDATEDISPLAYCELL_H
#define _TTC18HEALTHEXPERIENCEUI33RESETTABLECALENDARDATEDISPLAYCELL_H

@class UICollectionViewListCell;



@interface _TtC18HealthExperienceUI33ResettableCalendarDateDisplayCell : UICollectionViewListCell {
    ? item;
    ? titleLabel;
    ? dateLabel;
    ? clearButton;
    ? titleAndValueFieldSideBySideConstraints;
    ? titleAndValueFieldStackedConstraints;
    ? clearButtonWidthConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapClear;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif