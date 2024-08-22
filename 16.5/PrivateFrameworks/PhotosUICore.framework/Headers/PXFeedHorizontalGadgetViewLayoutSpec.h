// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDHORIZONTALGADGETVIEWLAYOUTSPEC_H
#define PXFEEDHORIZONTALGADGETVIEWLAYOUTSPEC_H

@class NSShadow, UIColor, UIFont;
@protocol PXFeedViewLayoutSpec;

#import <Foundation/Foundation.h>

#import "PXGridLayoutMetrics.h"

@interface PXFeedHorizontalGadgetViewLayoutSpec : NSObject <PXFeedViewLayoutSpec>

 {
    PXGridLayoutMetrics *_cachedGridLayoutMetrics;
    NSInteger _style;
}


@property (readonly, nonatomic) CGFloat gadgetHeight; // ivar: _gadgetHeight
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (readonly, nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) NSShadow *itemShadow; // ivar: _itemShadow
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) CGFloat overlayFeedPeekDistance;
@property (readonly, nonatomic) UIEdgeInsets placeholderMargins; // ivar: _placeholderMargins
@property (readonly, nonatomic) NSInteger rootLayoutOrientation; // ivar: _rootLayoutOrientation
@property (readonly, nonatomic) ? scrollBehavior; // ivar: _scrollBehavior
@property (readonly, nonatomic) UIColor *subtitleColor; // ivar: _subtitleColor
@property (readonly, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (readonly, nonatomic) UIEdgeInsets subtitleInsets; // ivar: _subtitleInsets
@property (readonly, nonatomic) UIEdgeInsets viewOutsets; // ivar: _viewOutsets
@property (readonly, nonatomic) BOOL wantsFirstItemFullscreen;
@property (readonly, nonatomic) BOOL wantsItemHoverEvents;
@property (readonly, nonatomic) BOOL wantsSafeAreaInsets;
@property (readonly, nonatomic) BOOL wantsScrollIndicators;


-(id)_metricsWithReferenceSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithGadgetSpec:(id)arg0 style:(NSInteger)arg1 ;
-(id)layoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(struct CGSize )gadgetSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif