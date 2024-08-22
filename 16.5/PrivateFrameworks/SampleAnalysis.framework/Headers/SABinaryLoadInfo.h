// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABINARYLOADINFO_H
#define SABINARYLOADINFO_H

@class NSString;
@protocol SAJSONSerialization, SASerializable;

#import <Foundation/Foundation.h>

#import "SABinary.h"
#import "SASegment.h"

@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable>

 {
    NSUInteger _loadAddress;
}


@property (readonly) SABinary *binary; // ivar: _binary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isInKernelAddressSpace;
@property (readonly) NSUInteger length;
@property (readonly) NSUInteger loadAddress;
@property (readonly) SASegment *segment; // ivar: _segment
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSUInteger textSegmentLoadAddress;


+(id)binaryLoadInfoForAddress:(NSUInteger)arg0 inBinaryLoadInfos:(id)arg1 ;
+(id)binaryLoadInfoForAddress:(NSUInteger)arg0 inBinaryLoadInfos:(id)arg1 libraryCache:(id)arg2 ;
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg0 ;
+(id)binaryLoadInfoForLiveProcessWithPid:(int)arg0 dataGatheringOptions:(NSUInteger)arg1 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithBinary:(id)arg0 segment:(id)arg1 loadAddress:(NSUInteger)arg2 ;
-(id)instructionAtOffsetIntoLoadInfo:(NSUInteger)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif