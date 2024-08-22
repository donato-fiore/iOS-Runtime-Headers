// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILTEDTABITEMLAYOUTINFO_H
#define TILTEDTABITEMLAYOUTINFO_H

@class UIView;

#import <Foundation/Foundation.h>

#import "TiltedTabThumbnailView.h"
#import "TiltedTabView.h"
#import "TiltedTabItem.h"

@interface TiltedTabItemLayoutInfo : NSObject {
    CGPoint _borrowedContentBoundsOrigin;
    BOOL _reordering;
    BOOL _closing;
    BOOL _finishedClosing;
    CGFloat _borrowedContentScale;
    UIView *_borrowedContentView;
    CGFloat _contentOpacity;
    TiltedTabThumbnailView *_contentView;
    CGFloat _topBackdropHeight;
    CGFloat _bottomInset;
    CGFloat _initialCornerRadius;
    CGFloat _contentOffsetDeltaY;
    CGFloat _zPosition;
    TiltedTabView *_tiltedTabView;
    TiltedTabItem *_item;
    NSInteger _transition;
    NSUInteger _indexForLayout;
    NSUInteger _countForLayout;
    CGFloat _verticalScrollAdjustment;
    CGRect _closeButtonHitRect;
    CGRect _contentFrame;
    CATransform3D _contentTransform;
}




-(void)dealloc;


@end


#endif