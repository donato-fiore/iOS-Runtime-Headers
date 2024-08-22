// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMFRAMESTORE_H
#define BMFRAMESTORE_H

@class NSMutableOrderedSet, NSFileHandle, NSString;

#import <Foundation/Foundation.h>

#import "BMMemoryMapping.h"

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    NSUInteger _permission;
    CGFloat _lastAbsoluteTimestamp;
    unsigned int _usedBytes;
    NSMutableOrderedSet *_framePointers;
}


@property (retain, nonatomic) NSFileHandle *backingFile; // ivar: _backingFile
@property (readonly, nonatomic) BOOL filterByAgeOnRead; // ivar: _filterByAgeOnRead
@property (readonly, nonatomic) NSUInteger frameStoreSize; // ivar: _frameStoreSize
@property (readonly, nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (readonly, nonatomic) BOOL pruneOnAccess; // ivar: _pruneOnAccess
@property (copy, nonatomic) NSString *segmentName; // ivar: _segmentName
@property (readonly, nonatomic) NSString *segmentPath; // ivar: _segmentPath
@property (readonly) unsigned int usedBytes;


-(BOOL)expectedTimestamp:(CGFloat)arg0 ;
-(BOOL)isValidFrame:(*void)arg0 expectedState:(unsigned int)arg1 copyOfData:(*id)arg2 frameStatus:(struct ? )arg3 validations:(BOOL)arg4 ;
-(BOOL)resizeBackingFileTo:(NSUInteger)arg0 ;
-(NSInteger)getReverseOffsetIndex:(NSUInteger)arg0 ;
-(id)frameWithOffset:(NSUInteger)arg0 expectedState:(unsigned int)arg1 ;
-(id)init;
-(id)initWithFileHandle:(id)arg0 streamPath:(id)arg1 filename:(id)arg2 maxSize:(NSUInteger)arg3 permission:(NSUInteger)arg4 datastoreVersion:(NSUInteger)arg5 ;
-(struct ? )segmentHeaderFromFile:(id)arg0 withVersion:(unsigned int)arg1 fileSize:(*NSUInteger)arg2 ;
-(unsigned char)appendFrameHeader:(struct ? *)arg0 offset:(*NSUInteger)arg1 ;
-(unsigned char)writeFrameForBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 ;
-(unsigned char)writeFrameForBytes:(*void)arg0 length:(NSUInteger)arg1 dataVersion:(unsigned int)arg2 timestamp:(CGFloat)arg3 outOffset:(*NSUInteger)arg4 ;
-(void)dealloc;
-(void)enumerateFromOffset:(NSUInteger)arg0 withCallback:(id)arg1 ;
-(void)enumerateWithOptions:(NSUInteger)arg0 fromOffset:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)markFrameAsRemoved:(id)arg0 ;
-(void)sync;
-(void)updateFrameStoreIndex;
-(void)updateHeader;


@end


#endif