// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMOSAICGALLERYGROUPLAYOUT_H
#define SXMOSAICGALLERYGROUPLAYOUT_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "SXMosaicGalleryCluster.h"
#import "SXMosaicGalleryColumnLayout.h"

@interface SXMosaicGalleryGroupLayout : NSObject

@property (readonly, nonatomic) SXMosaicGalleryCluster *cluster; // ivar: _cluster
@property (readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // ivar: _columnLayout
@property (readonly, nonatomic) NSMutableArray *columnRanges; // ivar: _columnRanges
@property (readonly, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns


-(CGFloat)calculateHeight;
-(CGFloat)desiredHeightForItem:(id)arg0 ;
-(id)calculateFrames;
-(id)init;
-(id)initWithCluster:(id)arg0 numberOfColumns:(NSUInteger)arg1 columnLayout:(id)arg2 ;
-(struct CGRect )frameForItemAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )columnRangeForItem:(id)arg0 ;


@end


#endif