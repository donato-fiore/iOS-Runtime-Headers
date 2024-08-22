// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDIMENSIONSUMCACHE_H
#define ICDIMENSIONSUMCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICDimensionSumCache : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSMutableDictionary *dimensions; // ivar: _dimensions
@property (readonly, nonatomic) CGFloat estimateDimension; // ivar: _estimateDimension
@property (nonatomic) CGFloat sum; // ivar: _sum


-(CGFloat)dimensionForKey:(id)arg0 ;
-(id)init;
-(id)initWithKeys:(id)arg0 andEstimateDimension:(CGFloat)arg1 ;
-(void)removeDimensionForKey:(id)arg0 ;
-(void)setDimension:(CGFloat)arg0 forKey:(id)arg1 ;


@end


#endif