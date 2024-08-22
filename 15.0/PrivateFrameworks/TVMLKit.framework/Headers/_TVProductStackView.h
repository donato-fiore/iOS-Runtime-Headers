// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVPRODUCTSTACKVIEW_H
#define _TVPRODUCTSTACKVIEW_H

@class TVFocusRedirectView, UIView, NSString, IKViewElement, NSArray;
@protocol TVAppTemplateImpressionable;



@interface _TVProductStackView : TVFocusRedirectView <TVAppTemplateImpressionable>

 {
    UIView *_lastFocusedView;
}


@property (retain, nonatomic) UIView *buttonsRowView; // ivar: _buttonsRowView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *descriptionView; // ivar: _descriptionView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *initialFocusView; // ivar: _initialFocusView
@property (retain, nonatomic) IKViewElement *stackElement; // ivar: _stackElement
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (retain, nonatomic) NSArray *viewsAboveDescription; // ivar: _viewsAboveDescription
@property (retain, nonatomic) NSArray *viewsBelowDescription; // ivar: _viewsBelowDescription


+(id)productStackViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif