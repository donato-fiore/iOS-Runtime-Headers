// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC25HEALTHMEDICATIONSVISIONUI10CUTOUTVIEW_H
#define _TTC25HEALTHMEDICATIONSVISIONUI10CUTOUTVIEW_H

@class UIView;



@interface _TtC25HealthMedicationsVisionUI10CutoutView : UIView {
    ? cutoutFrame;
    ? borderWidth;
    ? cornerRadius;
    ? checkmarkDiameter;
    ? expansionAmountForOutlineBox;
    ? animationSquishAmount;
    ? $__lazy_storage_$_blurView;
    ? $__lazy_storage_$_checkmarkView;
    ? $__lazy_storage_$_backgroundLayer;
    ? $__lazy_storage_$_backgroundLayerMask;
    ? $__lazy_storage_$_borderLayer;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif