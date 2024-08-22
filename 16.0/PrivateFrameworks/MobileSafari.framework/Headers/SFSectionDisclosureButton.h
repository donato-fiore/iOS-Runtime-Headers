// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSECTIONDISCLOSUREBUTTON_H
#define SFSECTIONDISCLOSUREBUTTON_H

@class UIButton, UILabel, NSLayoutConstraint, UIImageView;



@interface SFSectionDisclosureButton : UIButton {
    UILabel *_labelWhenCollapsed;
    NSLayoutConstraint *_labelWhenCollapsedLeadingConstraint;
    UILabel *_labelWhenExpanded;
    NSLayoutConstraint *_labelWhenExpandedLeadingConstraint;
    UIImageView *_imageView;
    BOOL _expandsModally;
}


@property (readonly, nonatomic) UIImageView *chevron;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden; // ivar: _labelHidden
@property (readonly, nonatomic) CGSize sizeIncludingLabels;


-(id)initWithFrame:(struct CGRect )arg0 expanded:(BOOL)arg1 modally:(BOOL)arg2 ;
-(void)buttonShapesEnabledDidChange;
-(void)dealloc;
-(void)toggleExpanded;
-(void)updateExpanded;


@end


#endif