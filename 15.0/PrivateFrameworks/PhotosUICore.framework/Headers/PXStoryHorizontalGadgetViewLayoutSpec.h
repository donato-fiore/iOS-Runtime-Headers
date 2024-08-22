// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYHORIZONTALGADGETVIEWLAYOUTSPEC_H
#define PXSTORYHORIZONTALGADGETVIEWLAYOUTSPEC_H

@class NSShadow;
@protocol PXStoryFeedViewLayoutSpec;

#import <Foundation/Foundation.h>

#import "PXGridLayoutMetrics.h"

@interface PXStoryHorizontalGadgetViewLayoutSpec : NSObject <PXStoryFeedViewLayoutSpec>

 {
    PXGridLayoutMetrics *_cachedGridLayoutMetrics;
}


@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (readonly, nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) NSShadow *itemShadow; // ivar: _itemShadow
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) ? scrollBehavior; // ivar: _scrollBehavior
@property (readonly, nonatomic) UIEdgeInsets viewOutsets; // ivar: _viewOutsets
@property (readonly, nonatomic) BOOL wantsScrollIndicators;


-(id)_metricsWithReferenceSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithGadgetSpec:(id)arg0 ;
-(id)layoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif