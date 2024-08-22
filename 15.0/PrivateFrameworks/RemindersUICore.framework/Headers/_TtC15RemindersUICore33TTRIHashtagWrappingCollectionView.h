// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15REMINDERSUICORE33TTRIHASHTAGWRAPPINGCOLLECTIONVIEW_H
#define _TTC15REMINDERSUICORE33TTRIHASHTAGWRAPPINGCOLLECTIONVIEW_H

@class UIView;



@interface _TtC15RemindersUICore33TTRIHashtagWrappingCollectionView : UIView {
    ? delegate;
    ? isEnabled;
    ? allTagsButtonState;
    ? showsAddTagButton;
    ? hashtagLabels;
    ? allowsEmptySelection;
    ? focusStyle;
    ? wrappingContainer;
    ? populator;
    ? internalSelection;
    ? lastLayoutResult;
    ? dropState;
    ? targetHashtagLabelForPerformingDrop;
    ? updateFlags;
    ? focusGuide;
}




-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addTagButtonAction:(id)arg0 ;
-(void)hashtagButtonAction:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif