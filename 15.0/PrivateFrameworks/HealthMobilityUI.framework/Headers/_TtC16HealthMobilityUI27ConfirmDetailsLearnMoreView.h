// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16HEALTHMOBILITYUI27CONFIRMDETAILSLEARNMOREVIEW_H
#define _TTC16HEALTHMOBILITYUI27CONFIRMDETAILSLEARNMOREVIEW_H

@class UIView;



@interface _TtC16HealthMobilityUI27ConfirmDetailsLearnMoreView : UIView {
    ? delegate;
    ? configuration;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_detailLabel;
    ? $__lazy_storage_$_learnMoreLabel;
    ? $__lazy_storage_$_tapGestureRecognizer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)learnMoreTapped;
-(void)tintColorDidChange;


@end


#endif