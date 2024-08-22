// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUOBJECTIDENTIFIER_H
#define VMUOBJECTIDENTIFIER_H

@class NSMutableDictionary, NSMutableArray, NSHashTable, NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "VMUTaskMemoryScanner.h"
#import "VMUClassInfoMap.h"
#import "VMUClassInfo.h"
#import "VMUNonOverlappingRangeArray.h"
#import "VMURangeArray.h"
#import "VMUSwiftRuntimeInfo.h"

@interface VMUObjectIdentifier : NSObject {
    unsigned int _task;
    VMUTaskMemoryScanner *_scanner;
    _VMUSwiftRemoteMirrorReaderContext _swiftMirrorReaderContext;
    NSMutableDictionary *_libSwiftRemoteMirrors;
    BOOL _debugSwiftRemoteMirror;
    VMUClassInfoMap *_unrealizedClassInfos;
    VMUClassInfoMap *_cfTypeIDToClassInfo;
    NSMutableDictionary *_nonobjectClassInfosDict;
    NSMutableArray *_objCClassStructureClassInfoIndexes;
    NSUInteger _coreFoundationCFTypeIsa;
    NSUInteger _objCClassCount;
    NSUInteger _swiftClassCount;
    NSUInteger _cfClassCount;
    id *_isaTranslator;
    BOOL _fragileNonPointerIsas;
    NSUInteger _lastCPlusPlusIsa;
    VMUClassInfo *_lastCPlusPlusClassInfo;
    NSHashTable *_nonObjectIsaHash;
    NSMapTable *_isaToObjectLabelHandlerMap;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    *id _labelStringUniquingMaps;
    *id _stringTypeDescriptions;
    NSMutableSet *_stringUniquingSet;
    NSMutableDictionary *_pidToProcessNameDict;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    BOOL _targetProcessContainsMallocStackLoggingLiteZone;
    NSUInteger _cfBooleanTrueAddress;
    NSUInteger _cfBooleanFalseAddress;
    unsigned int _osDispatchMachOffsetInOSXPCConnection;
    NSUInteger _taggedPointerObfuscator;
    unsigned char _taggedPointerPermutations;
}


@property (readonly, nonatomic) *VMUAutoreleasePoolPageLayout autoreleasePoolPageLayout; // ivar: _autoreleasePoolPageLayout
@property (readonly) BOOL hasSwiftContent;
@property (readonly) BOOL hasSwiftReflection;
@property (readonly, nonatomic) _CSTypeRef libobjcSymbolOwner; // ivar: _libobjcSymbolOwner
@property (readonly, nonatomic) id *memoryReader; // ivar: _memoryReader
@property (readonly) NSMutableDictionary *moduleNameToBinaryPathDict; // ivar: _moduleNameToBinaryPathDict
@property (readonly) unsigned int objcABI; // ivar: _objcABI
@property (nonatomic) unsigned int objectContentLevel; // ivar: _objectContentLevel
@property (retain, nonatomic) VMURangeArray *readonlyRegionRanges; // ivar: _readonlyRegionRanges
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses; // ivar: _realizedIsaToClassInfo
@property (readonly, nonatomic) *libSwiftRemoteMirrorWrapper swiftMirror; // ivar: _swiftMirror
@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI; // ivar: _swiftRuntimeInfoPreABI
@property (readonly, nonatomic) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI; // ivar: _swiftRuntimeInfoStableABI
@property (readonly, nonatomic) _CSTypeRef symbolicator; // ivar: _symbolicator
@property (readonly, nonatomic) NSUInteger taggedPointerMask; // ivar: _taggedPointerMask


-(BOOL)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg0 ;
-(BOOL)_dlopenLibSwiftRemoteMirrorNearExecutable;
-(BOOL)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef )arg0 avoidSystem:(BOOL)arg1 ;
-(BOOL)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef )arg0 ;
-(BOOL)_isValidInstanceLength:(NSUInteger)arg0 expectedLength:(NSUInteger)arg1 ;
-(BOOL)_remoteAddressIsOKtoRead:(NSUInteger)arg0 ;
-(BOOL)isTaggedPointer:(*void)arg0 ;
-(NSUInteger)CFTypeCount;
-(NSUInteger)ObjCclassCount;
-(NSUInteger)SwiftClassCount;
-(NSUInteger)addressOfSymbol:(char *)arg0 inLibrary:(char *)arg1 ;
-(NSUInteger)translateIsaPointer:(NSUInteger)arg0 ;
-(id)_classInfoWithNonobjectType:(id)arg0 binaryPath:(id)arg1 ;
-(id)_classInfoWithPthreadType:(id)arg0 ;
-(id)_returnFaultedClass:(NSUInteger)arg0 ofType:(unsigned int)arg1 ;
-(id)_scanner;
-(id)classInfoForMemory:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)classInfoForMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)classInfoForNonobjectMemory:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)classInfoForObjCClassStructurePointerType:(unsigned int)arg0 ;
-(id)classInfoForObjectWithRange:(struct _VMURange )arg0 ;
-(id)classNameForTaggedPointer:(*void)arg0 ;
-(id)formattedDateLabel:(id)arg0 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef )arg1 ;
-(id)initWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef )arg1 scanner:(id)arg2 ;
-(id)labelForCFBundle:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForClassDataExtRW:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForClassDataRO:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForClassDataRW:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForClassStructure:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForItemCount:(NSInteger)arg0 ;
-(id)labelForMallocBlock:(struct _VMURange )arg0 ;
-(id)labelForMallocBlock:(struct _VMURange )arg0 usingHandlerBlock:(id)arg1 ;
-(id)labelForMemory:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)labelForMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 classInfo:(id)arg3 ;
-(id)labelForMemory:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 classInfo:(id)arg3 usingHandlerBlock:(id)arg4 ;
-(id)labelForNSArray:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSBundle:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSCFDictionary:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSCFSet:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSCFStringAtRemoteAddress:(NSUInteger)arg0 printDetail:(BOOL)arg1 ;
-(id)labelForNSConcreteAttributedString:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSConcreteData:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSConcreteHashTable:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSConcreteMutableData:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSData:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSDate:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSDictionary:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSInlineData:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSNumber:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSPathStore2:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSSet:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSString:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSString:(*void)arg0 mappedSize:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 printDetail:(BOOL)arg3 ;
-(id)labelForNSTaggedPointerStringCStringContainer:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSURL:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSXPCConnection:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForNSXPCInterface:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSDispatchMach:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSDispatchQueue:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSLog:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSTransaction:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSXPCActivity:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSXPCConnection:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForOSXPCObject:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForObjectOfClass:(id)arg0 atOffset:(unsigned int)arg1 ofObject:(*void)arg2 ;
-(id)labelForProtocol:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelForTaggedPointer:(*void)arg0 ;
-(id)labelFor_NSActivityAssertion:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)labelFor__NSMallocBlock__:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)noLabelForOSXPCObject:(*void)arg0 length:(NSUInteger)arg1 remoteAddress:(NSUInteger)arg2 ;
-(id)objectLabelHandlerForRemoteIsa:(NSUInteger)arg0 ;
-(id)osMajorMinorVersionString;
-(id)uniquifyStringLabel:(id)arg0 stringType:(int)arg1 printDetail:(BOOL)arg2 ;
-(int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext *)arg0 ;
-(struct VMUAutoreleasePoolPageLayout *)createAutoreleasePoolPageLayout;
-(struct _CSTypeRef )symbolForAddress:(NSUInteger)arg0 ;
-(struct _VMURange )vmRegionRangeForAddress:(NSUInteger)arg0 ;
-(unsigned int)classInfoIndexForObjCClassStructurePointerType:(unsigned int)arg0 ;
-(void)_faultClass:(NSUInteger)arg0 ofType:(unsigned int)arg1 ;
-(void)_findObjCAndSwiftClassesFromClass:(NSUInteger)arg0 recursionDepth:(unsigned int)arg1 ;
-(void)_findOffsetsInOSXPCConnection:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)_generateClassInfosForObjCClassStructurePointerTypes;
-(void)_populateSwiftABIVariables;
-(void)buildIsaToObjectLabelHandlerMap;
-(void)dealloc;
-(void)destroy_libSwiftRemoteMirror;
-(void)enumerateAllClassInfosWithBlock:(id)arg0 ;
-(void)enumerateRealizedClassInfosWithBlock:(id)arg0 ;
-(void)findCFTypes;
-(void)findObjCAndSwiftClasses;
-(void)flushMemoryCache;
-(void)loadSwiftReflectionLibraries;
-(void)setupIsaTranslator;


@end


#endif