// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI11TILETIPVIEW_H
#define _TTC19HEALTHMEDICATIONSUI11TILETIPVIEW_H

@class UIView;



@interface _TtC19HealthMedicationsUI11TileTipView : UIView {
    ? onTap;
    ? onDismiss;
    ? isUsingVerticalLayout;
    ? currentConstraints;
    ? iconImageView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_detailLabel;
    ? $__lazy_storage_$_subdetailLabel;
    ? $__lazy_storage_$_separatorView;
    ? $__lazy_storage_$_dismissButton;
    ? $__lazy_storage_$_dismissImageView;
    ? $__lazy_storage_$_actionButton;
    ? detailLabelBottomConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapDismiss;
-(void)didTapView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif