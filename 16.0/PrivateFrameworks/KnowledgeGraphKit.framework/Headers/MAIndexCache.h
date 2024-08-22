// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAINDEXCACHE_H
#define MAINDEXCACHE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MAIndexCache : NSObject

@property (readonly, nonatomic) NSDictionary *cache; // ivar: _cache
@property (readonly, copy, nonatomic) NSArray *labels; // ivar: _labels


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfLabel:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLabels:(id)arg0 ;


@end


#endif