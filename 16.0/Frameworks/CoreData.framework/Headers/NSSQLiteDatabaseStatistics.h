// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLITEDATABASESTATISTICS_H
#define NSSQLITEDATABASESTATISTICS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSSQLiteDatabaseStatistics : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger cacheHitPages; // ivar: _cacheHitPages
@property (readonly, nonatomic) NSInteger cacheMissPages; // ivar: _cacheMissPages
@property (readonly, nonatomic) NSInteger cacheSpillPages; // ivar: _cacheSpillPages
@property (readonly, nonatomic) NSInteger pageSize; // ivar: _pageSize
@property (readonly, nonatomic) NSInteger totalCachePages;


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseStatisticsBySubtracting:(id)arg0 ;
-(id)description;
-(id)initWithPageSize:(NSInteger)arg0 ;


@end


#endif