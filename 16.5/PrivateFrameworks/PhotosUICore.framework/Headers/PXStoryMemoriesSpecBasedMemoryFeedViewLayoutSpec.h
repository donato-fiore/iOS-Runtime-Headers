// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEMORIESSPECBASEDMEMORYFEEDVIEWLAYOUTSPEC_H
#define PXSTORYMEMORIESSPECBASEDMEMORYFEEDVIEWLAYOUTSPEC_H

@class NSShadow, UIColor, UIFont;
@protocol PXFeedViewLayoutSpec;

#import <Foundation/Foundation.h>

#import "PXMemoriesSpec.h"

@interface PXStoryMemoriesSpecBasedMemoryFeedViewLayoutSpec : NSObject <PXFeedViewLayoutSpec>



@property (nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) NSShadow *itemShadow; // ivar: _itemShadow
@property (readonly, nonatomic) PXMemoriesSpec *memoriesSpec; // ivar: _memoriesSpec
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) CGFloat overlayFeedPeekDistance; // ivar: _overlayFeedPeekDistance
@property (readonly, nonatomic) UIEdgeInsets placeholderMargins;
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


-(id)_fullscreenLayoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithMemoriesSpec:(id)arg0 ;
-(id)layoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(struct CGSize )gadgetSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif