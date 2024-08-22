// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONCONCRETEVISUALSTYLE_CARPLAY_H
#define UIINTERFACEACTIONCONCRETEVISUALSTYLE_CARPLAY_H

@class NSString;
@protocol UIInterfaceActionConcreteVisualStyleImpl;


#import "UIInterfaceActionConcreteVisualStyle.h"

@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)selectByPressGestureRequired;
-(CGFloat)contentCornerRadius;
-(CGFloat)horizontalImageContentSpacing;
-(CGFloat)verticalImageContentSpacing;
-(id)_highlightedActionTitleLabelColorForViewState:(id)arg0 ;
-(id)_normalActionTitleLabelColorForViewState:(id)arg0 ;
-(id)_preferredActionFont;
-(id)_regularActionFont;
-(id)actionTitleLabelColorForViewState:(id)arg0 ;
-(id)actionTitleLabelFontForViewState:(id)arg0 ;
-(id)defaultScreen;
-(id)newActionBackgroundViewForViewState:(id)arg0 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg0 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg0 ;
-(struct CGSize )minimumActionContentSize;
-(struct UIEdgeInsets )contentMargin;


@end


#endif