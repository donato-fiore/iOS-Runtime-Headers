// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEFILEINFO_H
#define QLCACHEFILEINFO_H

@class QLCacheVersionedFileIdentifier;

#import <Foundation/Foundation.h>


@interface QLCacheFileInfo : NSObject

@property (readonly, nonatomic) NSUInteger cacheId; // ivar: _cacheId
@property (readonly, nonatomic) QLCacheVersionedFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property (readonly, nonatomic) float maxSize; // ivar: _maxSize
@property (readonly, nonatomic) float minSize; // ivar: _minSize
@property (readonly, nonatomic) NSUInteger thumbnailCount; // ivar: _thumbnailCount
@property (readonly, nonatomic) NSUInteger totalDataLength; // ivar: _totalDataLength


-(id)initWithCacheId:(NSUInteger)arg0 versionedFileIdentifier:(id)arg1 ;
-(id)initWithCacheId:(NSUInteger)arg0 versionedFileIdentifier:(id)arg1 thumbnailCount:(NSUInteger)arg2 minSize:(float)arg3 maxSize:(float)arg4 totalDataLength:(NSUInteger)arg5 ;


@end


#endif