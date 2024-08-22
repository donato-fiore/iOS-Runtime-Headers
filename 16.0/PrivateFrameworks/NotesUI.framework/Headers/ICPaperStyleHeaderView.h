// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPAPERSTYLEHEADERVIEW_H
#define ICPAPERSTYLEHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSLayoutConstraint, NSString;



@interface ICPaperStyleHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintBottom; // ivar: _labelConstraintBottom
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintLeading; // ivar: _labelConstraintLeading
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTop; // ivar: _labelConstraintTop
@property (retain, nonatomic) NSLayoutConstraint *labelConstraintTrailing; // ivar: _labelConstraintTrailing
@property (retain, nonatomic) NSString *title;
@property (nonatomic) UIEdgeInsets titleInsets;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contentSizeCategoryDidChange;


@end


#endif