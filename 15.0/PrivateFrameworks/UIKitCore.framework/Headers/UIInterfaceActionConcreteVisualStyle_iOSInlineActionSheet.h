// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONCONCRETEVISUALSTYLE_IOSINLINEACTIONSHEET_H
#define UIINTERFACEACTIONCONCRETEVISUALSTYLE_IOSINLINEACTIONSHEET_H

@class iOSSheet;


#import "_UIDimmingKnockoutBackdropView.h"

@interface UIInterfaceActionConcreteVisualStyle_iOSInlineActionSheet : iOSSheet {
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
}




-(CGFloat)_actionTitleFontSize;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)_preferredActionFont;
-(id)_regularActionFont;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )contentMargin;


@end


#endif