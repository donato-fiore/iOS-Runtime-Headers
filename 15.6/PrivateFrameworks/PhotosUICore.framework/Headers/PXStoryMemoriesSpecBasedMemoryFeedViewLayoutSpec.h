// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMEMORIESSPECBASEDMEMORYFEEDVIEWLAYOUTSPEC_H
#define PXSTORYMEMORIESSPECBASEDMEMORYFEEDVIEWLAYOUTSPEC_H

@class NSShadow;
@protocol PXStoryFeedViewLayoutSpec;

#import <Foundation/Foundation.h>

#import "PXMemoriesSpec.h"

@interface PXStoryMemoriesSpecBasedMemoryFeedViewLayoutSpec : NSObject <PXStoryFeedViewLayoutSpec>



@property (nonatomic) BOOL isFullScreen; // ivar: _isFullScreen
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) NSShadow *itemShadow; // ivar: _itemShadow
@property (readonly, nonatomic) PXMemoriesSpec *memoriesSpec; // ivar: _memoriesSpec
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) ? scrollBehavior; // ivar: _scrollBehavior
@property (readonly, nonatomic) UIEdgeInsets viewOutsets; // ivar: _viewOutsets
@property (readonly, nonatomic) BOOL wantsScrollIndicators;


-(id)init;
-(id)initWithMemoriesSpec:(id)arg0 ;
-(id)layoutGeneratorWithReferenceSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif