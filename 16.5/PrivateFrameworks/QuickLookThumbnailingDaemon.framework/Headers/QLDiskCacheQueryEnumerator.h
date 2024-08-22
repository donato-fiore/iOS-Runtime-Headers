// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDISKCACHEQUERYENUMERATOR_H
#define QLDISKCACHEQUERYENUMERATOR_H

@class NSDictionary, QLCacheFileIdentifier, QLTBitmapFormat, NSData, NSMutableDictionary, NSMutableArray;


#import "QLDiskCacheEnumerator.h"
#import "QLCacheIndexDatabaseQueryEnumerator.h"
#import "QLCacheThumbnailData.h"
#import "QLTGeneratorThumbnailRequest.h"
#import "QLCacheBlobInfo.h"

@interface QLDiskCacheQueryEnumerator : QLDiskCacheEnumerator {
    NSDictionary *_generatorRequests;
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;
    QLCacheThumbnailData *_thumbnailData;
    QLTGeneratorThumbnailRequest *_generatorRequest;
    BOOL _valueFound;
    NSUInteger _cacheId;
    QLCacheFileIdentifier *_fileIdentifier;
    QLTBitmapFormat *_bitmapFormat;
    NSData *_bitmapData;
    NSData *_metadata;
    QLCacheBlobInfo *_metadataBlobInfo;
    int _flavor;
    CGRect _contentRect;
}


@property NSUInteger badgeType; // ivar: _badgeType
@property (retain) QLCacheBlobInfo *bitmapDataBlobInfo; // ivar: _bitmapDataBlobInfo
@property NSUInteger externalGeneratorDataHash; // ivar: _externalGeneratorDataHash
@property (retain) NSMutableDictionary *generatorRequestBeingProcessed; // ivar: _generatorRequestBeingProcessed
@property BOOL iconMode; // ivar: _iconMode
@property NSInteger iconVariant; // ivar: _iconVariant
@property int interpolationQuality; // ivar: _interpolationQuality
@property (retain) NSMutableArray *sameGeneratorRequests; // ivar: _sameGeneratorRequests
@property float size; // ivar: _size


-(id)initWithDiskCache:(id)arg0 thumbnailRequests:(id)arg1 ;
-(id)nextThumbnailRequestWithThumbnailData:(*id)arg0 ;
-(void)_cleanUpValues;
-(void)_createNewCacheIndexDatabaseEnumerator;
-(void)_findThumbnailRequestsToProcess;
-(void)dealloc;
-(void)moveThumbnailRequestsFromBeingProcessedToSameRequestIfTheyMatch:(id)arg0 ;


@end


#endif