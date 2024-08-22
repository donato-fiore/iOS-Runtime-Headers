// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREWARDSEDUCATIONHEADERFOOTERVIEW_H
#define PKREWARDSEDUCATIONHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UILabel;



@interface PKRewardsEducationHeaderFooterView : UITableViewHeaderFooterView {
    BOOL _isTemplateLayout;
    UILabel *_labelView;
}




-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif