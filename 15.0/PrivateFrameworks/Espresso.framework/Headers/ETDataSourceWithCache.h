// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETDATASOURCEWITHCACHE_H
#define ETDATASOURCEWITHCACHE_H

@protocol ETDataSource;

#import <Foundation/Foundation.h>


@interface ETDataSourceWithCache : NSObject <ETDataSource>

 {
    id<ETDataSource> *_source;
    map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> _cache;
    basic_string<char, std::char_traits<char>, std::allocator<char>> dump_path;
    BOOL dump_descriptors;
}




-(id)dataPointAtIndex:(int)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 dumpPath:(id)arg1 ;
-(int)numberOfDataPoints;


@end


#endif