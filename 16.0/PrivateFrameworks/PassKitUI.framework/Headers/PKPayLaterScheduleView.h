// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSCHEDULEVIEW_H
#define PKPAYLATERSCHEDULEVIEW_H

@class UIView, NSArray, PKPayLaterDynamicContentPageItem;



@interface PKPayLaterScheduleView : UIView {
    NSArray *_horizontalStacks;
    CGFloat _minimimLeadingLabelWidth;
}


@property (retain, nonatomic) PKPayLaterDynamicContentPageItem *dynamicContentItem; // ivar: _dynamicContentItem


+(BOOL)canFormScheduleViewForDynamincContentItem:(id)arg0 ;
-(CGFloat)_minimumRequiredWidthForLeadingLabels;
-(id)initWithDynamicContentItem:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;


@end


#endif