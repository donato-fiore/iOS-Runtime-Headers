// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEINDEXDATABASEQUERYENUMERATOR_H
#define QLCACHEINDEXDATABASEQUERYENUMERATOR_H

@class NSDictionary, NSArray, QLTBitmapFormat, QLCacheFileIdentifier, NSDate;


#import "QLCacheIndexDatabaseGenericEnumerator.h"
#import "QLCacheBlobInfo.h"

@interface QLCacheIndexDatabaseQueryEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    NSDictionary *_fileRequests;
    NSArray *_allFileRequests;
}


@property (readonly, nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) QLCacheBlobInfo *bitmapDataBlobInfo; // ivar: _bitmapDataBlobInfo
@property (readonly, nonatomic) QLTBitmapFormat *bitmapFormat; // ivar: _bitmapFormat
@property (readonly, nonatomic) NSUInteger cacheId; // ivar: _cacheId
@property (readonly, nonatomic) CGRect contentRect; // ivar: _contentRect
@property (readonly, nonatomic) NSUInteger externalGeneratorDataHash; // ivar: _externalGeneratorDataHash
@property (readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property (readonly, nonatomic) int flavor; // ivar: _flavor
@property (readonly, nonatomic) unsigned int hitCount; // ivar: _hitCount
@property (readonly, nonatomic) unsigned char iconMode; // ivar: _iconMode
@property (readonly, nonatomic) NSInteger iconVariant; // ivar: _iconVariant
@property (readonly, nonatomic) int interpolationQuality; // ivar: _interpolationQuality
@property (readonly, nonatomic) NSDate *lastHitDate; // ivar: _lastHitDate
@property (readonly, nonatomic) QLCacheBlobInfo *metadataBlobInfo; // ivar: _plistBufferBlobInfo
@property (readonly, nonatomic) float size; // ivar: _size


-(BOOL)nextThumbnailInfo;
-(id)initWithSqliteDatabase:(id)arg0 fileRequests:(id)arg1 ;
-(void)_getCacheIds;
-(void)_getCacheIdsForHomogeneousArrayOfRequests:(id)arg0 ;
-(void)dealloc;


@end


#endif