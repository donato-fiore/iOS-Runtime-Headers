// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SABINARY_H
#define SABINARY_H

@class NSString, NSMutableArray, NSArray, NSUUID;
@protocol SAJSONSerialization, SASerializable;

#import <Foundation/Foundation.h>

#import "SACSSymbolOwnerWrapper.h"
#import "SASegment.h"

@interface SABinary : NSObject <SAJSONSerialization, SASerializable>

 {
    SACSSymbolOwnerWrapper *_symbolOwnerWrapper;
    NSUInteger _alreadyAttempted;
    NSString *_name;
    NSUInteger _optionsWhenLastSymbolicated;
    NSUInteger _length;
    SASegment *_fakeEntireBinarySegment;
    NSMutableArray *_segments;
    BOOL _attemptedToGetBundleInfo;
    BOOL _attemptedToGetCodeSignInfo;
    BOOL _hadSymbolOwnerWhenLastSymbolicated;
    BOOL _symbolOwnerWasDsymWhenLastSymbolicated;
    BOOL _haveMoreInstructionsToSymbolicate;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
}


@property (readonly) NSString *binaryVersion;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *codesigningID; // ivar: _codesigningID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasTextExecSegment;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger length;
@property (readonly) NSString *name;
@property (readonly) NSString *path;
@property (readonly) NSArray *segments;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSString *teamID; // ivar: _teamID
@property (readonly) NSUInteger textSegmentLength;
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(id)binaryWithUUID:(id)arg0 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(void)addDsymPaths:(id)arg0 ;
+(void)addPath:(id)arg0 forBinaryWithUUID:(id)arg1 ;
+(void)addSymbolsFromTailspin:(id)arg0 ;
+(void)clearCaches;
+(void)clearCoreSymbolicationCaches;
+(void)clearSymbolCaches;
+(void)enableImmediateCleanupOfCSSymbolOwners;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)cacheSymbolOwnerWithOptions:(NSUInteger)arg0 pid:(int)arg1 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)initWithUUID:(id)arg0 ;
-(id)instructionAtOffsetIntoBinary:(NSInteger)arg0 ;
-(id)instructionAtOffsetIntoTextSegment:(NSUInteger)arg0 ;
-(id)segmentWithName:(id)arg0 ;
-(void)addPath:(id)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)clearCoreSymbolicationCache;
-(void)clearSymbolCache;
-(void)gatherInfoWithDataGatheringOptions:(NSUInteger)arg0 pid:(int)arg1 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)symbolicateAllInstructionsWithOptions:(NSUInteger)arg0 pid:(int)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif