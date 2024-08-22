// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUCLASSINFO_H
#define VMUCLASSINFO_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "VMUClassInfo.h"

@interface VMUClassInfo : NSObject {
    unsigned int _superclassOffset;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    unsigned int _defaultScanType;
    unsigned int _remoteType;
    *id _localIvarList;
    NSString *_displayName;
    VMUClassInfo *_genericLayout;
    NSMutableArray *_variantEvaluators;
    NSMutableArray *_variantActions;
    NSMutableArray *_complexVariantEvaluators;
    NSMutableArray *_complexVariantActions;
    char * _weakLayout;
    char * _strongLayout;
    char _hasSpecificLayout;
    char _hasVariantLayout;
}


@property (readonly, nonatomic) NSString *binaryName;
@property (readonly, nonatomic) NSString *binaryPath; // ivar: _remoteBinaryPath
@property (readonly, nonatomic) NSString *className; // ivar: _remoteClassName
@property (readonly, nonatomic) unsigned int defaultScanType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *fullIvarDescription;
@property (readonly, nonatomic) VMUClassInfo *genericInfo;
@property (readonly) BOOL hasCppConstructorOrDestructor;
@property (readonly, nonatomic) BOOL hasSpecificLayout;
@property (readonly, nonatomic) BOOL hasVariantLayout;
@property (readonly) unsigned int infoType;
@property (readonly) unsigned int instanceSize; // ivar: _instanceSize
@property (readonly) BOOL isARR;
@property (readonly) BOOL isCoreMediaFigObject; // ivar: _isCoreMediaFigObject
@property (nonatomic) BOOL isDerivedFromStackBacktrace; // ivar: _isDerivedFromStackBacktrace
@property (readonly) BOOL isMetaClass;
@property (readonly) BOOL isRealized;
@property (readonly) BOOL isRootClass;
@property (readonly, nonatomic) unsigned int ivarCount; // ivar: _ivarCount
@property (readonly, nonatomic) unsigned int pointerSize; // ivar: _remotePointerSize
@property (readonly) NSUInteger remoteIsa; // ivar: _remoteIsa
@property (readonly, nonatomic) NSString *shortIvarDescription;
@property (readonly, nonatomic) VMUClassInfo *superclassInfo; // ivar: _superclassLayout
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) BOOL usesSwiftRefcounting; // ivar: _usesSwiftRefcounting


+(NSUInteger)sizeofClassStructure;
+(id)_genericBlockByrefInfo;
+(id)classInfoWithClassName:(id)arg0 binaryPath:(id)arg1 type:(unsigned int)arg2 ;
+(id)descriptionForTypeEncoding:(char *)arg0 ivarName:(char *)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copyWithInstanceSize:(unsigned int)arg0 superclassOffset:(unsigned int)arg1 asVariant:(BOOL)arg2 mutable:(BOOL)arg3 ;
-(id)_initWithClass:(NSUInteger)arg0 type:(unsigned int)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(id)arg5 ;
-(id)debugDescription;
-(id)description;
-(id)fieldAtOrBeforeOffset:(unsigned int)arg0 ;
-(id)firstFieldWithName:(id)arg0 ;
-(id)initSwiftClassWithName:(id)arg0 classInfoType:(unsigned int)arg1 size:(NSUInteger)arg2 ;
-(id)initWithClass:(NSUInteger)arg0 type:(unsigned int)arg1 infoMap:(id)arg2 objectIdentifier:(id)arg3 reader:(id)arg4 ;
-(id)initWithClassName:(id)arg0 binaryPath:(id)arg1 type:(unsigned int)arg2 ;
-(id)initWithClosureContext:(NSUInteger)arg0 typeInfo:(struct swift_typeinfo )arg1 infoMap:(id)arg2 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper *)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRealizedClass:(NSUInteger)arg0 type:(unsigned int)arg1 infoMap:(id)arg2 objectIdentifier:(id)arg3 reader:(id)arg4 ;
-(id)initWithSerializer:(id)arg0 classMap:(id)arg1 version:(unsigned int)arg2 error:(*id)arg3 ;
-(id)instanceSpecificInfoForObject:(NSUInteger)arg0 ofSize:(unsigned int)arg1 memoryReader:(id)arg2 ;
-(id)instanceSpecificInfoForObject:(NSUInteger)arg0 ofSize:(unsigned int)arg1 withScanner:(id)arg2 memoryReader:(id)arg3 ;
-(id)mutableCopy;
-(id)scanDescriptionWithSize:(unsigned int)arg0 ;
-(id)type;
-(unsigned int)_objcABIFromObjectIdentifier:(id)arg0 ;
-(unsigned int)_totalIvarCount;
// -(void)_addComplexAction:(id)arg0 withEvaluator:(unk)arg1  ;
-(void)_addFields:(id)arg0 ;
// -(void)_addVariantAction:(id)arg0 withEvaluator:(unk)arg1  ;
-(void)_adjustInstanceSize;
-(void)_applyExtendedLayout:(char *)arg0 withSize:(unsigned int)arg1 ;
-(void)_demangleClassName;
-(void)_determineBinaryPathUsingObjectIdentifier:(id)arg0 remoteClassNameLoc:(NSUInteger)arg1 ;
-(void)_freeLocalIvarList;
-(void)_identifyObjCClassStructureBlocksForIsa:(NSUInteger)arg0 isMetaclass:(BOOL)arg1 withScanner:(id)arg2 addressIdentifierBlock:(id)arg3 ;
-(void)_logDescriptionWithSuperclasses:(BOOL)arg0 indentation:(int)arg1 toLogger:(id)arg2 ;
-(void)_parseIvarsAndLayouts;
-(void)_processARRLayout:(char *)arg0 scanType:(unsigned int)arg1 ;
-(void)_replaceField:(id)arg0 withFields:(id)arg1 ;
-(void)_replaceFieldRecursively:(id)arg0 withField:(id)arg1 ;
-(void)_setFields:(id)arg0 ;
-(void)_setIsa:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAllFieldsWithBlock:(id)arg0 ;
-(void)enumerateAllPointerFieldsWithBlock:(id)arg0 ;
-(void)enumerateClassHierarchyWithBlock:(id)arg0 ;
-(void)enumerateExternalValuesFromObject:(NSUInteger)arg0 withSize:(unsigned int)arg1 block:(id)arg2 ;
-(void)enumeratePointerTypeFieldsWithBlock:(id)arg0 ;
-(void)enumerateScanningLocationsForSize:(unsigned int)arg0 withBlock:(id)arg1 ;
-(void)enumerateStoredEntriesForObject:(NSUInteger)arg0 ofSize:(unsigned int)arg1 externalValues:(id)arg2 block:(id)arg3 ;
-(void)enumerateSublayoutsForSize:(unsigned int)arg0 withBlock:(id)arg1 ;
-(void)enumerateTypeFieldsWithBlock:(id)arg0 ;
-(void)identifyObjCClassStructureBlocksWithScanner:(id)arg0 addressIdentifierBlock:(id)arg1 ;
-(void)serializeWithClassMap:(id)arg0 simpleSerializer:(id)arg1 version:(unsigned int)arg2 ;


@end


#endif