// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDIMENSIONMAXCACHE_H
#define ICDIMENSIONMAXCACHE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICDimensionMaxCache : NSObject

@property (readonly, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSMutableDictionary *dimensions; // ivar: _dimensions
@property (readonly, nonatomic) CGFloat max;
@property (readonly, nonatomic) NSMutableArray *sortedDimensions; // ivar: _sortedDimensions


-(CGFloat)dimensionForKey:(id)arg0 ;
-(id)init;
-(id)initWithComparator:(id)arg0 ;
-(void)removeDimensionForKey:(id)arg0 ;
-(void)setDimension:(CGFloat)arg0 forKey:(id)arg1 ;


@end


#endif