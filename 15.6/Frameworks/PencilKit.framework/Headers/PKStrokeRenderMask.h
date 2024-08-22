// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKERENDERMASK_H
#define PKSTROKERENDERMASK_H

@protocol NSCopying, PKStrokeRenderCache;

#import <Foundation/Foundation.h>

#import "PKStroke.h"

@interface PKStrokeRenderMask : NSObject <NSCopying>

 {
    vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> _maskPaths;
}


@property (readonly, nonatomic) NSObject<PKStrokeRenderCache> *renderCache; // ivar: _renderCache
@property (readonly, nonatomic) PKStroke *stroke; // ivar: _stroke


-(*void)maskPaths;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStroke:(id)arg0 renderCache:(id)arg1 maskPaths:(*void)arg2 ;


@end


#endif