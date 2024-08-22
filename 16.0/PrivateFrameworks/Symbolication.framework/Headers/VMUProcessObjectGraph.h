// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUPROCESSOBJECTGRAPH_H
#define VMUPROCESSOBJECTGRAPH_H

@class NSArray, NSString, NSDictionary;
@protocol VMUCommonGraphInterface, VMUStackLogReader;


#import "VMUObjectGraph.h"
#import "VMURangeToStringMap.h"
#import "VMUDebugTimer.h"
#import "VMUNodeToStringMap.h"
#import "VMUClassInfoMap.h"
#import "VMUTaskMemoryScanner.h"
#import "VMUSymbolStore.h"

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface>

 {
    NSArray *_regions;
    NSArray *_zoneNames;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_binaryImagesDescription;
    VMURangeToStringMap *_threadNameRanges;
    VMURangeToStringMap *_binarySectionNameRanges;
    VMURangeToStringMap *_regionSymbolNameRanges;
    BOOL _gotObjcClassStructureRanges;
    NSDictionary *_pthreadOffsets;
    *void _userMarked;
}


@property (copy, nonatomic) NSArray *backtraces; // ivar: _backtraces
@property (readonly, nonatomic) NSString *binaryImagesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VMUDebugTimer *debugTimer; // ivar: _debugTimer
@property (readonly, copy) NSString *description;
@property (nonatomic) _VMURange dyldSharedCacheRange; // ivar: _dyldSharedCacheRange
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces; // ivar: _hasClassInfosDerivedFromStackBacktraces
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int idleExitStatus; // ivar: _idleExitStatus
@property (readonly, nonatomic) BOOL is64bit;
@property (nonatomic) BOOL isTranslatedByRosetta; // ivar: _isTranslatedByRosetta
@property (readonly, nonatomic) unsigned int kernelPageSize; // ivar: _kernelPageSize
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) VMUNodeToStringMap *nodeLabels; // ivar: _nodeLabels
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (nonatomic) unsigned int objectContentLevel; // ivar: _objectContentLevel
@property (nonatomic) unsigned int objectContentLevelForNodeLabels; // ivar: _objectContentLevelForNodeLabels
@property (nonatomic) NSUInteger physicalFootprint; // ivar: _physicalFootprint
@property (nonatomic) NSUInteger physicalFootprintPeak; // ivar: _physicalFootprintPeak
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processDescriptionString;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned int regionCount; // ivar: _regionCount
@property (weak, nonatomic) VMUTaskMemoryScanner *scanner; // ivar: _scanner
@property (nonatomic) NSUInteger serializationOptions; // ivar: _serializationOptions
@property (nonatomic) BOOL showRawClassNames; // ivar: _showRawClassNames
@property (nonatomic) BOOL showsPhysFootprint; // ivar: _showsPhysFootprint
@property (nonatomic) NSUInteger snapshotMachTime; // ivar: _machAbsolute
@property (retain, nonatomic) NSDictionary *srcAddressToExtraAutoreleaseCountDict; // ivar: _srcAddressToExtraAutoreleaseCountDict
@property (retain, nonatomic) NSObject<VMUStackLogReader> *stackLogReader; // ivar: _stackLogReader
@property (readonly) Class superclass;
@property (retain, nonatomic) VMUSymbolStore *symbolStore; // ivar: _symbolStore
@property (readonly, nonatomic) unsigned int vmPageSize; // ivar: _vmPageSize
@property (readonly, nonatomic) unsigned int zoneCount;


-(*void)contentForNode:(unsigned int)arg0 ;
-(*void)copyUserMarked;
-(BOOL)hasLabelsForNodes;
-(BOOL)nodeDetailIsAutoreleasePoolContentPage:(struct ? )arg0 ;
-(BOOL)nodeIsAutoreleasePoolContentPage:(unsigned int)arg0 ;
-(BOOL)resymbolicateWithDsymPath:(id)arg0 libraryNames:(id)arg1 all:(BOOL)arg2 progress:(id)arg3 showDebugInfo:(BOOL)arg4 error:(*id)arg5 ;
-(id)_descriptionForRegionAddress:(NSUInteger)arg0 withOffset:(NSUInteger)arg1 showSegment:(BOOL)arg2 ;
-(id)binarySectionNameForAddress:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchived:(id)arg0 version:(NSInteger)arg1 options:(NSUInteger)arg2 diskLogs:(id)arg3 error:(*id)arg4 ;
-(id)initWithPid:(int)arg0 nodes:(struct _VMUBlockNode *)arg1 nodeCount:(unsigned int)arg2 zoneNames:(id)arg3 classInfoMap:(id)arg4 regions:(id)arg5 pthreadOffsets:(id)arg6 userMarked:(*void)arg7 ;
-(id)labelForNode:(unsigned int)arg0 ;
-(id)nodeDescription:(unsigned int)arg0 ;
-(id)nodeDescription:(unsigned int)arg0 withDestinationNode:(unsigned int)arg1 referenceInfo:(struct ? )arg2 ;
-(id)nodeDescription:(unsigned int)arg0 withOffset:(NSUInteger)arg1 ;
-(id)nodeDescription:(unsigned int)arg0 withOffset:(NSUInteger)arg1 showLabel:(BOOL)arg2 ;
-(id)referenceDescription:(struct ? )arg0 withSourceNode:(unsigned int)arg1 destinationNode:(unsigned int)arg2 alignmentSpacing:(unsigned int)arg3 ;
-(id)regionSymbolNameForAddress:(NSUInteger)arg0 ;
-(id)sampleBacktracesString;
-(id)shortLabelForNode:(unsigned int)arg0 ;
-(id)shortNodeDescription:(unsigned int)arg0 ;
-(id)threadNameForAddress:(NSUInteger)arg0 ;
-(id)vmuVMRegionForAddress:(NSUInteger)arg0 ;
-(id)vmuVMRegionForNode:(unsigned int)arg0 ;
-(id)zoneNameForIndex:(unsigned int)arg0 ;
-(struct _CSArchitecture )parseMacOSArchitectureFromProcessDescription;
-(struct _VMURange )binarySectionRangeContainingAddress:(NSUInteger)arg0 ;
-(struct _VMURange )rangeForSymbolName:(id)arg0 inRegion:(id)arg1 ;
-(struct _VMURange )regionSymbolRangeContainingAddress:(NSUInteger)arg0 ;
-(unsigned int)enumerateReferencesFromDataRegion:(id)arg0 atGlobalSymbol:(id)arg1 withBlock:(id)arg2 ;
-(unsigned int)enumerateRegionsWithBlock:(id)arg0 ;
-(unsigned int)nodeReferencedFromDataRegion:(id)arg0 byGlobalSymbol:(id)arg1 ;
-(void)_deriveObjcClassStructureRanges;
-(void)_generateSymbolStoreFromExistingGraph;
-(void)_renameWithNodeMap:(*unsigned int)arg0 nodeNamespace:(unsigned int)arg1 edgeMap:(*unsigned int)arg2 edgeNamespace:(unsigned int)arg3 ;
-(void)_reorderLabelsWithNodeNameMap:(*unsigned int)arg0 ;
-(void)archiveDictionaryRepresentation:(id)arg0 options:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)markLeafNodes:(*void)arg0 ;
-(void)markReachableNodesFromRoots:(*void)arg0 inMap:(*void)arg1 ;
-(void)markReachableNodesFromRoots:(*void)arg0 inMap:(*void)arg1 options:(unsigned int)arg2 ;
-(void)markRootNodes:(*void)arg0 ;
-(void)refineEdges:(unsigned int)arg0 withOptions:(unsigned int)arg1 markingInvalid:(*void)arg2 ;
-(void)refineTypesWithOverlay:(id)arg0 ;
-(void)removeWeakEdges;
-(void)resymbolicateNonObjectsUsingStackBacktrace;
-(void)resymbolicatePrivateMaps;
-(void)setBinarySectionName:(id)arg0 forRange:(struct _VMURange )arg1 ;
-(void)setLabel:(id)arg0 forNode:(unsigned int)arg1 ;
-(void)setRegionSymbolName:(id)arg0 forRange:(struct _VMURange )arg1 ;
-(void)setThreadName:(id)arg0 forRange:(struct _VMURange )arg1 ;
-(void)setUserMarked:(*void)arg0 ;


@end


#endif