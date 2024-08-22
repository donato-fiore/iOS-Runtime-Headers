// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEBOOTSTRAPFOOTERVIEW_H
#define PXPEOPLEBOOTSTRAPFOOTERVIEW_H

@class UICollectionReusableView, UILabel, NSString;



@interface PXPeopleBootstrapFooterView : UICollectionReusableView

@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText


+(struct CGSize )sizeForBoundingSize:(struct CGSize )arg0 descriptionText:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif