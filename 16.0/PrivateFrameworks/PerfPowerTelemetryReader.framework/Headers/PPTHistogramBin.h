// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTHISTOGRAMBIN_H
#define PPTHISTOGRAMBIN_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PPTHistogramBin : NSObject

@property (readonly) NSArray *categories; // ivar: _categories
@property (readonly) NSUInteger count; // ivar: _count
@property (readonly) NSArray *indices; // ivar: _indices
@property (readonly) CGFloat max; // ivar: _max
@property (readonly) CGFloat mean; // ivar: _mean
@property (readonly) CGFloat min; // ivar: _min
@property (readonly) NSArray *ranges; // ivar: _ranges
@property (readonly) CGFloat sum; // ivar: _sum


-(id)initWithCount:(NSUInteger)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 mean:(CGFloat)arg3 sum:(CGFloat)arg4 ranges:(id)arg5 categories:(id)arg6 indices:(id)arg7 ;


@end


#endif