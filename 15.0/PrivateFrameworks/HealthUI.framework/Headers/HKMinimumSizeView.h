// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMINIMUMSIZEVIEW_H
#define HKMINIMUMSIZEVIEW_H

@class UIView;



@interface HKMinimumSizeView : UIView

@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) CGFloat minimumWidth; // ivar: _minimumWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif