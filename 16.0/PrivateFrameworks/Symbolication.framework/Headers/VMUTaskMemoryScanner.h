// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUTASKMEMORYSCANNER_H
#define VMUTASKMEMORYSCANNER_H

@class NSMutableArray, NSMutableDictionary, NSMapTable, NSString;
@protocol VMUCommonGraphInterface;

#import <Foundation/Foundation.h>

#import "VMUVMRegionIdentifier.h"
#import "VMURangeArray.h"
#import "VMUTaskThreadStates.h"
#import "VMUClassInfoMap.h"
#import "VMUProcessObjectGraph.h"
#import "VMUDebugTimer.h"
#import "VMUTaskMemoryCache.h"
#import "VMUObjectIdentifier.h"

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface>

 {
    NSUInteger _suspendTime;
    unsigned int _suspensionToken;
    VMUVMRegionIdentifier *_regionIdentifier;
    *_VMUBlockNode _blocks;
    unsigned int _blocksSize;
    ? _regions;
    BOOL _initializedRegionMallocBlockCounts;
    id *_regionInfoBlock;
    VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    _VMURange _dataSegmentsRangeInSharedCache;
    _VMURange _dataSegmentsRangeOutsideSharedCache;
    VMURangeArray *_dataSegmentsRangeArrayOutsideSharedCache;
    BOOL _targetProcessHasObjCPatches;
    NSMutableDictionary *_addressToRuntimeMetadataChunkInfoDict;
    *_VMUZoneNode _zones;
    unsigned int _zonesSize;
    VMUTaskThreadStates *_threadStates;
    unsigned int _threadsCount;
    *_VMUInstanceValues _instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    *id _classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    **_VMUScanLocationCache _scanCaches;
    unsigned int _autoreleasePoolBoundaryNode;
    unsigned int _recordAutoreleasePoolBoundaries;
    NSMutableDictionary *_mappedFileNameToLengthDict;
    NSMapTable *_classStructureAddressToDestinationMapTable;
    unsigned int _objcClassStructureClassInfoIndex;
    unsigned int _classDataMethodsClassInfoIndex;
    unsigned int _swiftClassStructureClassInfoIndex;
    unsigned int _swiftMetadataClassInfoIndex;
    unsigned int _swiftHeapGenericLocalVariableClassInfoIndex;
    NSUInteger _regionDescriptionOptions;
    id *_referenceLogger;
    id *_nodeLogger;
    VMUProcessObjectGraph *_processObjectGraph;
    *void _userMarkedAbandoned;
    NSMutableDictionary *_variantCachesByIsaIndex;
    NSMutableDictionary *_srcAddressToExtraAutoreleaseCountDict;
    NSUInteger _cfPasteboardReservedBase;
}


@property (nonatomic) BOOL abandonedMarkingEnabled; // ivar: _abandonedMarkingEnabled
@property (readonly, nonatomic) NSString *binaryImagesDescription; // ivar: _binaryImagesDescription
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VMUDebugTimer *debugTimer; // ivar: _debugTimer
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exactScanningEnabled; // ivar: _exactScanningEnabled
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int idleExitStatus; // ivar: _idleExitStatus
@property (readonly, nonatomic) BOOL is64bit;
@property (readonly, nonatomic) BOOL isTranslatedByRosetta;
@property (readonly, nonatomic) unsigned int kernelPageSize;
@property (readonly, nonatomic) unsigned int mallocNodeCount;
@property (nonatomic) NSUInteger maxInteriorOffset; // ivar: _maxInteriorOffset
@property (readonly, nonatomic) VMUTaskMemoryCache *memoryCache; // ivar: _memoryCache
@property (readonly, nonatomic) unsigned int nodeCount; // ivar: _blocksCount
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (nonatomic) unsigned int objectContentLevel;
@property (readonly, nonatomic) VMUObjectIdentifier *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSUInteger physicalFootprint; // ivar: _physicalFootprint
@property (readonly, nonatomic) NSUInteger physicalFootprintPeak; // ivar: _physicalFootprintPeak
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processDescriptionString; // ivar: _processDescriptionString
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (nonatomic) BOOL recordRuntimeMetadataChunkInfo; // ivar: _recordRuntimeMetadataChunkInfo
@property (readonly, nonatomic) unsigned int regionCount; // ivar: _regionsCount
@property (readonly, nonatomic) *_VMURegionMap regionMap; // ivar: _regionMap
@property (nonatomic) unsigned int scanningMask; // ivar: _scanningMask
@property (nonatomic) BOOL showRawClassNames; // ivar: _showRawClassNames
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger suspendTimeContinuous; // ivar: _suspendTimeContinuous
@property (readonly, nonatomic) unsigned int task; // ivar: _task
@property (readonly, nonatomic) unsigned int vmPageSize;
@property (readonly, nonatomic) unsigned int zoneCount; // ivar: _zonesCount


+(void)initialize;
-(*void)contentForNode:(unsigned int)arg0 ;
-(*void)copyUserMarked;
-(?)validateAddressRangeForSwiftRemoteMirrorallowUnusedSplitLibs;
-(BOOL)_suspend;
-(BOOL)addressIsInDataSegment:(NSUInteger)arg0 ;
-(BOOL)doesTargetProcessHaveObjCPatches;
-(BOOL)hasLabelsForNodes;
-(NSUInteger)_lengthOfMappedFileOfRegion:(id)arg0 ;
-(id)_cachedVariantForGenericInfo:(id)arg0 variantKey:(NSUInteger)arg1 ;
-(id)_initWithTask:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)_readonlyRegionRanges;
-(id)_recursivelyIdentifySwiftAsyncTaskSlabs:(NSUInteger)arg0 containerRange:(struct _VMURange )arg1 remoteBlock:(NSUInteger)arg2 mappedBlock:(NSUInteger)arg3 asyncTaskSlabMetadataIsa:(NSUInteger)arg4 nestingLevel:(unsigned int)arg5 ;
-(id)classInfoForObjectAtAddress:(NSUInteger)arg0 ;
-(id)initWithSelfTaskAndOptions:(NSUInteger)arg0 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)labelForNode:(unsigned int)arg0 ;
-(id)processSnapshotGraph;
-(id)processSnapshotGraphWithOptions:(NSUInteger)arg0 ;
-(id)shortLabelForNode:(unsigned int)arg0 ;
-(id)vmuVMRegionForAddress:(NSUInteger)arg0 ;
-(id)vmuVMRegionForNode:(unsigned int)arg0 ;
-(id)zoneNameForIndex:(unsigned int)arg0 ;
-(id)zoneNameForNode:(unsigned int)arg0 ;
-(struct ? )nodeDetails:(unsigned int)arg0 ;
-(unsigned int)_indexForClassInfo:(id)arg0 ;
-(unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(*unsigned int)arg0 nodeCount:(unsigned int)arg1 recorder:(id)arg2 ;
-(unsigned int)enumerateMarkedObjects:(*void)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateNodesWithBlock:(id)arg0 ;
-(unsigned int)enumerateObjectsWithBlock:(id)arg0 ;
-(unsigned int)enumerateReferencesWithBlock:(id)arg0 ;
-(unsigned int)enumerateRegionsWithBlock:(id)arg0 ;
-(unsigned int)nodeForAddress:(NSUInteger)arg0 ;
-(void)_addSpecialNodesFromTask;
-(void)_addThreadNodesFromTask;
-(void)_buildRegionPageBlockMaps;
-(void)_callRemoteMallocEnumerators:(unsigned int)arg0 block:(id)arg1 ;
-(void)_destroyLinearClassInfos;
-(void)_findMarkedAbandonedBlocks;
-(void)_fixupBlockIsas;
-(void)_identifyNonObjectsPointedToByTypedIvars:(unsigned int)arg0 ;
-(void)_identifyNonObjectsPointingToSwiftMetadata:(unsigned int)arg0 ;
-(void)_identifyNonObjectsUsingStackBacktrace;
-(void)_identifyObjCClassStructureBlocks;
-(void)_identifySwiftAsyncTaskSlabs;
-(void)_identifySwiftTypeNameCache;
// -(void)_orderedScanWithScanner:(id)arg0 recorder:(unk)arg1 keepMapped:(id)arg2 actions:(unk)arg3  ;
-(void)_registerVariant:(id)arg0 forGenericInfo:(id)arg1 variantKey:(NSUInteger)arg2 ;
-(void)_shortenScannableRangeOfMappedFile:(unsigned int)arg0 ;
-(void)_sortAndClassifyBlocks;
-(void)_sortBlocks;
-(void)_updateLinearClassInfos;
-(void)_withMemoryReaderBlock:(id)arg0 ;
-(void)_withOrderedNodeMapper:(id)arg0 ;
-(void)_withScanningContext:(id)arg0 ;
-(void)addMallocNodes:(id)arg0 ;
-(void)addMallocNodesFromTask;
-(void)addRootNodesFromTask;
-(void)clearCrashReporterInfoForMappedFileRegion;
-(void)dealloc;
-(void)detachFromTask;
-(void)mapDyldSharedCacheFromTargetWithRegions:(id)arg0 ;
-(void)markReachableNodesFromRoots:(*void)arg0 inMap:(*void)arg1 ;
-(void)printRuntimeMetadataInfo;
-(void)refineTypesWithOverlay:(id)arg0 ;
-(void)removeRootReachableNodes;
-(void)scanNodesForReferences:(id)arg0 ;
-(void)setClassStructureFieldScanValueAtSourceAddress:(*void)arg0 toCorrectedAddress:(*void)arg1 ;
-(void)setCrashReporterInfoForMappedFileRegion:(struct _VMURegionNode *)arg0 mappedRegionStartAddress:(NSUInteger)arg1 mappedSize:(NSUInteger)arg2 reason:(id)arg3 ;
-(void)setNodeScanningLogger:(id)arg0 ;
-(void)setReferenceScanningLogger:(id)arg0 ;
-(void)unmapAllRegions;


@end


#endif