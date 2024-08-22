// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRCONCEPTHEADERCELL_H
#define HRCONCEPTHEADERCELL_H

@class UIColor, UIImage, NSString;


#import "WDMedicalRecordGroupableCell.h"

@interface HRConceptHeaderCell : WDMedicalRecordGroupableCell {
    ? titleLabel;
    ? chevronView;
    ? $__lazy_storage_$_bottomConstraint;
    ? title;
}


@property (nonatomic, retain) UIColor *categoryColor; // ivar: categoryColor
@property (nonatomic, retain) UIImage *headerImage; // ivar: headerImage
@property (nonatomic) NSInteger intendedPlacement;
@property (nonatomic, copy) NSString *title;


+(id)defaultReuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)setUpConstraints;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif