// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLASSET_H
#define MDLASSET_H

@class NSURL, NSMutableArray, NSMapTable, NSUnitLength;
@protocol NSCopying, NSFastEnumeration, MDLObjectContainerComponent, MDLMeshBufferAllocator, MDLAssetResolver;

#import <Foundation/Foundation.h>

#import "MDLAnimatedVector3Array.h"
#import "MDLVertexDescriptor.h"

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration>

 {
    NSURL *_URL;
    NSMutableArray *_objects;
    CGFloat _startTime;
    CGFloat _endTime;
    ? _upAxis;
    BOOL _isSceneKitBridged;
    NSMapTable *_components;
}


@property (readonly, retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) MDLAABB _bounds;
@property (retain, nonatomic) NSURL *_temporaryFolderURL; // ivar: _temporaryFolderURL
@property (nonatomic) CGFloat _timeCodesPerSecond; // ivar: __timeCodesPerSecond
@property (retain, nonatomic) NSObject<MDLObjectContainerComponent> *animations; // ivar: _animations
@property (readonly, nonatomic) ? boundingBox;
@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *bufferAllocator; // ivar: _bufferAllocator
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) CGFloat endTime;
@property (retain, nonatomic) MDLAnimatedVector3Array *extents; // ivar: _extents
@property (nonatomic) CGFloat frameInterval; // ivar: _frameInterval
@property (retain, nonatomic) NSObject<MDLObjectContainerComponent> *masters; // ivar: _masters
@property (nonatomic) float metersPerUnit; // ivar: _metersPerUnit
@property (retain, nonatomic) NSObject<MDLObjectContainerComponent> *originals;
@property (retain, nonatomic) NSObject<MDLAssetResolver> *resolver; // ivar: _resolver
@property (nonatomic) CGFloat startTime;
@property (retain, nonatomic) NSUnitLength *unitLength; // ivar: _unitLength
@property ? upAxis;
@property (readonly, retain, nonatomic) MDLVertexDescriptor *vertexDescriptor; // ivar: _vertexDescriptor


+(BOOL)canExportFileExtension:(id)arg0 ;
+(BOOL)canImportFileExtension:(id)arg0 ;
+(BOOL)isValidUSDZResource:(id)arg0 ;
+(id)placeLightProbesWithDensity:(float)arg0 heuristic:(NSInteger)arg1 usingIrradianceDataSource:(id)arg2 ;
+(void)convertToUSDZ:(id)arg0 writeToURL:(id)arg1 ;
+(void)convertToUSDZWithURL:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)childObjectsOfClass:(Class)arg0 ;
-(id)componentConformingToProtocol:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initThroughSCNKitBridgeWithURL:(id)arg0 preserveTopology:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithBufferAllocator:(id)arg0 ;
-(id)initWithData:(id)arg0 name:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(*id)arg5 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 bufferAllocator:(id)arg1 preserveIndexing:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 vertexDescriptor:(id)arg1 bufferAllocator:(id)arg2 ;
-(id)initWithURL:(id)arg0 vertexDescriptor:(id)arg1 bufferAllocator:(id)arg2 preserveTopology:(BOOL)arg3 error:(*id)arg4 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectAtPath:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(struct ? )boundingBoxAtTime:(CGFloat)arg0 ;
-(void)_conformVertexBuffers:(id)arg0 error:(*id)arg1 ;
-(void)addObject:(id)arg0 ;
// -(void)enumerateChildObjectsOfClass:(Class)arg0 usingBlock:(id)arg1 stopPointer:(unk)arg2  ;
-(void)removeObject:(id)arg0 ;


@end


#endif