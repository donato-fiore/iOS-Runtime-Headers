// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUGRAPHSTACKLOGREADER_H
#define VMUGRAPHSTACKLOGREADER_H

@class NSString, NSData, NSSet;
@protocol NSSecureCoding, VMUStackLogReader;


#import "VMUStackLogReaderBase.h"
#import "VMUDebugTimer.h"
#import "VMURangeToStringMap.h"
#import "VMUProcessObjectGraph.h"
#import "VMUVMRegionTracker.h"

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader>

 {
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    *unsigned int _nodeToStackIndexTable;
    *NSUInteger _nodeToMSLPayloadTable;
    *vmu_backtrace_uniquing_table_t _backtraceUniquingTable;
    *backtrace_uniquing_table _originalUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}


@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *diskLogs; // ivar: _diskLogs
@property (retain, nonatomic) NSSet *excludedFrames;
@property (weak, nonatomic) VMUProcessObjectGraph *graph; // ivar: _graph
@property (readonly) NSUInteger hash;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL is64bit;
@property (readonly) NSUInteger nodesInUniquingTable;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) Class superclass;
@property (readonly) _CSTypeRef symbolicator;
@property (readonly) unsigned int task;
@property (readonly) BOOL usesLiteMode;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)copyOriginalUniquingTable:(id)arg0 ;
-(NSInteger)getFramesForAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(*NSUInteger)arg3 ;
-(NSInteger)getFramesForNode:(unsigned int)arg0 inLiteZone:(BOOL)arg1 stackFramesBuffer:(*NSUInteger)arg2 ;
-(NSInteger)getFramesForStackID:(NSUInteger)arg0 stackFramesBuffer:(*NSUInteger)arg1 ;
-(NSUInteger)stackIDForNode:(unsigned int)arg0 ;
-(id)binaryImagePathForPCaddress:(NSUInteger)arg0 ;
-(id)functionNameForPCaddress:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef )arg1 graph:(id)arg2 debugTimer:(id)arg3 collectDisklogs:(BOOL)arg4 ;
-(id)sourceFileNameAndLineNumberForPCaddress:(NSUInteger)arg0 fullPath:(BOOL)arg1 ;
-(id)sourceFileNameForPCaddress:(NSUInteger)arg0 ;
-(id)sourcePathForPCaddress:(NSUInteger)arg0 ;
-(id)vmuVMRegionForAddress:(NSUInteger)arg0 ;
-(int)enumerateMSLRecordsAndPayloads:(id)arg0 ;
-(struct _VMURange )binaryImageRangeForPCaddress:(NSUInteger)arg0 ;
-(struct _VMURange )functionRangeContainingPCaddress:(NSUInteger)arg0 ;
-(struct _VMURange )sourceLineRangeContainingPCaddress:(NSUInteger)arg0 ;
-(unsigned int)sourceLineNumberForPCaddress:(NSUInteger)arg0 ;
-(void)_parseSourceInfoString:(id)arg0 intoComponents:(*unsigned int)arg1 ;
-(void)_setFunctionName:(id)arg0 forPCAddressRange:(struct _VMURange )arg1 ;
-(void)_setSourcePath:(id)arg0 lineNumber:(unsigned int)arg1 forPCAddressRange:(struct _VMURange )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateUniquingTable:(id)arg0 ;
-(void)populateBacktraceUniquingTableWithStackLogs:(id)arg0 ;
-(void)streamFullStackLogsToBlock:(id)arg0 ;
-(void)symbolicateBacktraceUniquingTable;


@end


#endif