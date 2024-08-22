// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVQUEUEGUARDEDDATA_H
#define HVQUEUEGUARDEDDATA_H

@class NSMutableSet, BMContentStream, _PASBloomFilterForWriting, NSMutableArray;
@protocol BMBookmark;

#import <Foundation/Foundation.h>


@interface HVQueueGuardedData : NSObject

@property (nonatomic) unsigned int bloomFilterHits; // ivar: _bloomFilterHits
@property (nonatomic) unsigned int bloomFilterMisses; // ivar: _bloomFilterMisses
@property (nonatomic) unsigned char bookmarkLevelOfService; // ivar: _bookmarkLevelOfService
@property (nonatomic) unsigned int dequeuedCount; // ivar: _dequeuedCount
@property (readonly, nonatomic) NSMutableSet *dequeuedDiskContentIdentifiers; // ivar: _dequeuedDiskContentIdentifiers
@property (readonly, nonatomic) NSMutableSet *dequeuedMemoryContentIdentifiers; // ivar: _dequeuedMemoryContentIdentifiers
@property (readonly, nonatomic) BMContentStream *diskStorage; // ivar: _diskStorage
@property (retain, nonatomic) NSObject<BMBookmark> *diskStorageBookmark; // ivar: _diskStorageBookmark
@property (nonatomic) unsigned int diskStorageEventCount; // ivar: _diskStorageEventCount
@property (nonatomic) unsigned int enqueuedCount; // ivar: _enqueuedCount
@property (retain, nonatomic) _PASBloomFilterForWriting *enqueuedDiskContentIdentifiersBloomFilter; // ivar: _enqueuedDiskContentIdentifiersBloomFilter
@property (readonly, nonatomic) NSMutableArray *memoryStorage; // ivar: _memoryStorage
@property (readonly, nonatomic) short memoryStorageLimit; // ivar: _memoryStorageLimit


-(BOOL)isMemoryStorageFull;


@end


#endif