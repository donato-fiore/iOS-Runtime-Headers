// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI25MESSAGEWITHACTIONTILEVIEW_H
#define _TTC18HEALTHEXPERIENCEUI25MESSAGEWITHACTIONTILEVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI25MessageWithActionTileView : UIView {
    ? titleLabel;
    ? bodyLabel;
    ? actionButton;
    ? $__lazy_storage_$_separator;
    ? separatorTopConstraint;
    ? actionButtonTopConstraint;
    ? bottomConstraint;
    ? didTapActionButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapAction:(id)arg0 ;
-(void)updateConstraints;


@end


#endif