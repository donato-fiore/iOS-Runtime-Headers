// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLDISKCACHEALLTHUMBNAILPERFILEENUMERATOR_H
#define QLDISKCACHEALLTHUMBNAILPERFILEENUMERATOR_H

@class QLCacheFileIdentifier, NSData;


#import "QLDiskCacheEnumerator.h"
#import "QLCacheIndexDatabaseQueryEnumerator.h"
#import "QLCacheThumbnailData.h"
#import "QLCacheBlobInfo.h"

@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator {
    QLCacheFileIdentifier *_fileIdentifier;
    QLCacheIndexDatabaseQueryEnumerator *_cacheIndexDatabaseEnumerator;
    QLCacheThumbnailData *_thumbnailData;
    NSData *_bitmapData;
    QLCacheBlobInfo *_bitmapDataBlobInfo;
    NSData *_metadata;
    QLCacheBlobInfo *_metadataBlobInfo;
}




-(id)initWithDiskCache:(id)arg0 fileIdentifier:(id)arg1 ;
-(id)nextThumbnailData;
-(void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)arg0 ;


@end


#endif