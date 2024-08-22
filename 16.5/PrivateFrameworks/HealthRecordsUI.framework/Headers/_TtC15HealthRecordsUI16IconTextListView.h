// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI16ICONTEXTLISTVIEW_H
#define _TTC15HEALTHRECORDSUI16ICONTEXTLISTVIEW_H

@class UIView;



@interface _TtC15HealthRecordsUI16IconTextListView : UIView {
    ? textStyle;
    ? items;
    ? font;
    ? iconSize;
    ? interItemSpacingVertical;
    ? interItemSpacingHorizontal;
    ? hidesIconsForAccessibilityTextSizes;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif