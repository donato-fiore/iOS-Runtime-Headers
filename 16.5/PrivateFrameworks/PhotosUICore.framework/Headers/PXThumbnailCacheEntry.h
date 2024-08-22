// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTHUMBNAILCACHEENTRY_H
#define PXTHUMBNAILCACHEENTRY_H

@class NSData, NSManagedObjectID;

#import <Foundation/Foundation.h>


@interface PXThumbnailCacheEntry : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) PHAssetResourceTableDataSpecification dataSpec; // ivar: _dataSpec
@property (readonly, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID


-(id)initWithObjectID:(id)arg0 dataSpec:(struct PHAssetResourceTableDataSpecification *)arg1 data:(id)arg2 ;


@end


#endif