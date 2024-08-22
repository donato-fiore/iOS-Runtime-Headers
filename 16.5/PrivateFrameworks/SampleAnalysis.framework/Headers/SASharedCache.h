// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASHAREDCACHE_H
#define SASHAREDCACHE_H

@class NSArray, NSString, NSUUID;
@protocol SAJSONSerialization, SASerializable, SALibraryCache;

#import <Foundation/Foundation.h>


@interface SASharedCache : NSObject <SAJSONSerialization, SASerializable, SALibraryCache>

 {
    NSUInteger _slide;
    NSUInteger _slidBaseAddress;
    BOOL _defunct;
    int _flags;
    unsigned int _sharedCacheID;
}


@property (retain) NSArray *binaryLoadInfos; // ivar: _binaryLoadInfos
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger endAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger slidBaseAddress;
@property (readonly) NSUInteger slide;
@property (readonly) NSUInteger startAddress;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSUInteger textSegmentsEndAddress;
@property (readonly) NSUInteger textSegmentsStartAddress;
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(id)classDictionaryKey;
+(id)currentSharedCache;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)sharedCacheWithUUID:(id)arg0 slide:(NSUInteger)arg1 ;
+(id)sharedCacheWithUUID:(id)arg0 slide:(NSUInteger)arg1 slidBaseAddress:(NSUInteger)arg2 ;
+(void)addDSCSymData:(id)arg0 ;
+(void)addDscSymDir:(id)arg0 ;
+(void)clearCaches;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)matchesUUID:(unsigned char)arg0 slide:(NSUInteger)arg1 ;
-(BOOL)matchesUUID:(unsigned char)arg0 slide:(NSUInteger)arg1 slidBaseAddress:(NSUInteger)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif