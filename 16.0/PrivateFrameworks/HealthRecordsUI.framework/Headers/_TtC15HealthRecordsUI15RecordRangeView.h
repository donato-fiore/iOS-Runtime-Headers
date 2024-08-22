// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI15RECORDRANGEVIEW_H
#define _TTC15HEALTHRECORDSUI15RECORDRANGEVIEW_H

@class UIView;



@interface _TtC15HealthRecordsUI15RecordRangeView : UIView {
    ? rangeContext;
    ? activeConstraints;
    ? dotConstraint;
    ? dotMultiplier;
    ? state;
    ? $__lazy_storage_$_dotView;
    ? $__lazy_storage_$_innerDotView;
    ? $__lazy_storage_$_pillsStackView;
    ? $__lazy_storage_$_rangeLabel;
    ? $__lazy_storage_$_lowBookend;
    ? $__lazy_storage_$_highBookened;
    ? style;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif