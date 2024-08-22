// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHLEGENDVIEWCACHE_H
#define TSCHLEGENDVIEWCACHE_H


#import <Foundation/Foundation.h>

#import "TSCHLegendModelCache.h"

@interface TSCHLegendViewCache : NSObject {
    TSCHLegendModelCache *_modelCache;
    NSUInteger _cellCount;
    *CGPoint _cellOrigins;
}


@property (readonly) CGSize legendSize; // ivar: _finalSize
@property (readonly) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly) NSUInteger numberOfRows; // ivar: _numberOfRows


-(id)initWithLegendModelCache:(id)arg0 legendWidth:(CGFloat)arg1 ;
-(struct CGPoint )originForCell:(id)arg0 ;
-(void)dealloc;


@end


#endif