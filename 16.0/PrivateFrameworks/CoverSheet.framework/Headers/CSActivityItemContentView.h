// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSACTIVITYITEMCONTENTVIEW_H
#define CSACTIVITYITEMCONTENTVIEW_H

@class UIView;
@protocol CSActivityItemContentViewSizeProviding;



@interface CSActivityItemContentView : UIView

@property (weak, nonatomic) NSObject<CSActivityItemContentViewSizeProviding> *sizeProvider; // ivar: _sizeProvider


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif