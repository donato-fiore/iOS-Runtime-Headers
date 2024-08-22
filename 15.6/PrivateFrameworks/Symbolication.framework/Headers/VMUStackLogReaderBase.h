// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUSTACKLOGREADERBASE_H
#define VMUSTACKLOGREADERBASE_H

@class NSMapTable, NSMutableDictionary, NSString, NSSet;
@protocol VMUStackLogReader;

#import <Foundation/Foundation.h>

#import "VMUVMRegionTracker.h"

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader>

 {
    NSMapTable *_addressToSymbolicationMap;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
}


@property (readonly) BOOL coldestFrameIsNotThreadId; // ivar: _coldestFrameIsNotThreadId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *excludedFrames; // ivar: _excludedFrames
@property (readonly) NSUInteger hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) NSUInteger nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker; // ivar: _regionTracker
@property (readonly) Class superclass;
@property (readonly) _CSTypeRef symbolicator; // ivar: _symbolicator
@property (readonly) unsigned int task; // ivar: _task
@property (readonly) BOOL usesLiteMode; // ivar: _usesLiteMode


-(NSInteger)getFramesForAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(*NSUInteger)arg3 ;
-(NSInteger)getFramesForNode:(unsigned int)arg0 inLiteZone:(BOOL)arg1 stackFramesBuffer:(*NSUInteger)arg2 ;
-(NSInteger)getFramesForStackID:(NSUInteger)arg0 stackFramesBuffer:(*NSUInteger)arg1 ;
-(id)binaryImagePathForPCaddress:(NSUInteger)arg0 ;
-(id)functionNameForPCaddress:(NSUInteger)arg0 ;
-(id)identifierForBinaryImagePath:(id)arg0 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(NSUInteger)arg0 fullPath:(BOOL)arg1 ;
-(id)sourceFileNameForPCaddress:(NSUInteger)arg0 ;
-(id)sourcePathForPCaddress:(NSUInteger)arg0 ;
-(id)symbolicatedBacktraceForFrames:(*NSUInteger)arg0 frameCount:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)symbolicatedBacktraceForNode:(unsigned int)arg0 nodeDetails:(struct ? )arg1 isLiteZone:(BOOL)arg2 options:(NSUInteger)arg3 ;
-(id)symbolicatedBacktraceForStackID:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)vmuVMRegionForAddress:(NSUInteger)arg0 ;
-(int)enumerateMSLRecordsAndPayloads:(id)arg0 ;
-(int)enumerateRecords:(id)arg0 ;
-(struct _VMURange )binaryImageRangeForPCaddress:(NSUInteger)arg0 ;
-(struct _VMURange )functionRangeContainingPCaddress:(NSUInteger)arg0 ;
-(unsigned int)sourceLineNumberForPCaddress:(NSUInteger)arg0 ;


@end


#endif