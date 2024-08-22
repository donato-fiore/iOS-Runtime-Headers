// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVHEADERCOLUMNVIEW_H
#define _TVHEADERCOLUMNVIEW_H

@class UIView, NSArray;



@interface _TVHeaderColumnView : UIView

@property (copy, nonatomic) NSArray *labelViews; // ivar: _labelViews
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif