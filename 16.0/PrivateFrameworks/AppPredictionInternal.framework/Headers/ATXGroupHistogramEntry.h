// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGROUPHISTOGRAMENTRY_H
#define ATXGROUPHISTOGRAMENTRY_H


#import <Foundation/Foundation.h>


@interface ATXGroupHistogramEntry : NSObject

@property (readonly, nonatomic) int count; // ivar: _count
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)initWithScore:(CGFloat)arg0 ;
-(void)addScore:(CGFloat)arg0 ;


@end


#endif