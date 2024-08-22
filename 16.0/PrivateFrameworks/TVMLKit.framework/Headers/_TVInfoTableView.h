// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVINFOTABLEVIEW_H
#define _TVINFOTABLEVIEW_H

@class TVFocusRedirectView, NSString, UIView, NSArray;
@protocol TVAppTemplateImpressionable;



@interface _TVInfoTableView : TVFocusRedirectView <TVAppTemplateImpressionable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSArray *infoViews; // ivar: _infoViews
@property (readonly) Class superclass;


+(id)infoTableViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(CGFloat)_normalizedInfoHeaderWidth;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif