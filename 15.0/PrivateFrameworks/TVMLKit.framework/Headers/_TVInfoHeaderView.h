// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVINFOHEADERVIEW_H
#define _TVINFOHEADERVIEW_H

@class UIView, NSString;
@protocol TVAppTemplateImpressionable;



@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (readonly) Class superclass;


+(id)infoHeaderViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif