// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSTORAGEPOOLSTATS_H
#define NUSTORAGEPOOLSTATS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUStoragePoolStats : NSObject <NSCopying>



@property (nonatomic) NSInteger discardedCount; // ivar: _discardedCount
@property (nonatomic) NSInteger migrationBytes; // ivar: _migrationBytes
@property (nonatomic) NSInteger migrationCount; // ivar: _migrationCount
@property (nonatomic) NSInteger nonPurgeableBytes; // ivar: _nonPurgeableBytes
@property (nonatomic) NSInteger nonPurgeableCount; // ivar: _nonPurgeableCount
@property (readonly, nonatomic) NSInteger peakNonPurgeableBytes; // ivar: _peakNonPurgeableBytes
@property (readonly, nonatomic) NSInteger peakTotalBytes; // ivar: _peakTotalBytes
@property (readonly, nonatomic) NSInteger peakUsedBytes; // ivar: _peakUsedBytes
@property (readonly, nonatomic) NSInteger peakVolatileBytes; // ivar: _peakVolatileBytes
@property (nonatomic) NSInteger purgedBytes; // ivar: _purgedBytes
@property (nonatomic) NSInteger purgedCount; // ivar: _purgedCount
@property (nonatomic) NSInteger requestCount; // ivar: _requestCount
@property (readonly, nonatomic) NSInteger reusedCount;
@property (nonatomic) NSInteger reusedNonPurgeableCount; // ivar: _reusedNonPurgeableCount
@property (readonly, nonatomic) float reusedRate;
@property (nonatomic) NSInteger reusedVolatileCount; // ivar: _reusedVolatileCount
@property (readonly, nonatomic) NSInteger totalBytes;
@property (readonly, nonatomic) NSInteger totalCount;
@property (nonatomic) NSInteger usedBytes; // ivar: _usedBytes
@property (nonatomic) NSInteger usedCount; // ivar: _usedCount
@property (nonatomic) NSInteger volatileBytes; // ivar: _volatileBytes
@property (nonatomic) NSInteger volatileCount; // ivar: _volatileCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif