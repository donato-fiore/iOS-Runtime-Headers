// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI24CONCEPTFEEDITEMTITLEVIEW_H
#define _TTC15HEALTHRECORDSUI24CONCEPTFEEDITEMTITLEVIEW_H

@class UIView;



@interface _TtC15HealthRecordsUI24ConceptFeedItemTitleView : UIView {
    ? titleLabel;
    ? dateLabel;
    ? chevronView;
    ? $__lazy_storage_$_bottomConstraint;
    ? $__lazy_storage_$_dateChevronConstraint;
    ? $__lazy_storage_$_dateTrailingConstraint;
    ? activeConstraints;
    ? headerImage;
    ? title;
    ? dateString;
    ? categoryColor;
    ? hidesChevron;
    ? isInEditingMode;
    ? hidesHeaderSymbolForAccessibilitySizing;
    ? viewData;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif