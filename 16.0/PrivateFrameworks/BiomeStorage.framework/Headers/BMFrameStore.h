// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFRAMESTORE_H
#define BMFRAMESTORE_H

@class NSMutableOrderedSet, NSString;

#import <Foundation/Foundation.h>

#import "BMFileHandle.h"
#import "BMMemoryMapping.h"

@interface BMFrameStore : NSObject {
    unsigned int _datastoreVersion;
    BMFileHandle *_backingFile;
    BMMemoryMapping *_frames;
    BMMemoryMapping *_header;
    NSUInteger _permission;
    CGFloat _lastAbsoluteTimestamp;
    NSMutableOrderedSet *_framePointers;
}


@property (readonly) unsigned int bytesUsed;
@property (nonatomic) BOOL filterByAgeOnRead; // ivar: _filterByAgeOnRead
@property (readonly, nonatomic) NSUInteger frameStoreSize; // ivar: _frameStoreSize
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (nonatomic) BOOL pruneOnAccess; // ivar: _pruneOnAccess
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly, nonatomic) NSString *segmentPath;
@property (readonly) *void start; // ivar: _start


+(id)new;
-(BOOL)expectedTimestamp:(CGFloat)arg0 ;
-(BOOL)isCheckSumValidAtOffset:(NSUInteger)arg0 ;
-(BOOL)isValidFrame:(*void)arg0 expectedState:(unsigned int)arg1 copyOfData:(*id)arg2 frameStatus:(struct ? )arg3 validations:(BOOL)arg4 enumerationOptions:(NSUInteger)arg5 errorCode:(*int)arg6 ;
-(BOOL)resizeBackingFileTo:(NSUInteger)arg0 ;
-(NSInteger)getReverseOffsetIndex:(NSUInteger)arg0 ;
-(id)_printablePath;
-(id)frameWithOffset:(NSUInteger)arg0 expectedState:(unsigned int)arg1 ;
-(id)init;
-(id)initWithFileHandle:(id)arg0 maxSize:(NSUInteger)arg1 permission:(NSUInteger)arg2 datastoreVersion:(NSUInteger)arg3 ;
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