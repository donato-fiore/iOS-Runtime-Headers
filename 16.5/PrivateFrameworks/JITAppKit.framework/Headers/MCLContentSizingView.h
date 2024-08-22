// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLCONTENTSIZINGVIEW_H
#define MCLCONTENTSIZINGVIEW_H

@class UIView, UIScrollView;


#import "TKKeyPathObserver.h"

@interface MCLContentSizingView : UIView {
    TKKeyPathObserver *_observer;
}


@property (retain, nonatomic) UIScrollView *contentView; // ivar: _contentView


-(struct CGSize )intrinsicContentSize;


@end


#endif