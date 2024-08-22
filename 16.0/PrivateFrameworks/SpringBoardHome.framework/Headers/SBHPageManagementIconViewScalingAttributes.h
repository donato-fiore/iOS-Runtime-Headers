// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHPAGEMANAGEMENTICONVIEWSCALINGATTRIBUTES_H
#define SBHPAGEMANAGEMENTICONVIEWSCALINGATTRIBUTES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBHPageManagementIconViewScalingAttributes : NSObject

@property (readonly, nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (readonly, copy, nonatomic) NSString *minificationFilter; // ivar: _minificationFilter
@property (readonly, nonatomic) CGFloat rasterizationScale; // ivar: _rasterizationScale
@property (readonly, nonatomic) BOOL shouldRasterize; // ivar: _shouldRasterize


-(id)initWithMinificationFilter:(id)arg0 shouldRasterize:(BOOL)arg1 rasterizationScale:(CGFloat)arg2 allowsEdgeAntialiasing:(BOOL)arg3 ;


@end


#endif