// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVPRODUCTINFOVIEW_H
#define _TVPRODUCTINFOVIEW_H

@class TVFocusRedirectView, NSString, UIView, NSArray;
@protocol TVAppTemplateImpressionable;



@interface _TVProductInfoView : TVFocusRedirectView <TVAppTemplateImpressionable>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *defaultFocusView; // ivar: _defaultFocusView
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *infoSectionViews; // ivar: _infoSectionViews
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewsAboveInfoSection; // ivar: _viewsAboveInfoSection
@property (retain, nonatomic) NSArray *viewsBelowInfoSection; // ivar: _viewsBelowInfoSection


+(id)productInfoViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif