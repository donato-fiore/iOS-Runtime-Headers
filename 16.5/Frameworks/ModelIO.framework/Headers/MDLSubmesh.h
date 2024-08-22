// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLSUBMESH_H
#define MDLSUBMESH_H

@class NSArray, NSString;
@protocol MDLNamed, MDLMeshBufferAllocator, MDLMeshBuffer;

#import <Foundation/Foundation.h>

#import "MDLMaterial.h"
#import "MDLSubmeshTopology.h"

@interface MDLSubmesh : NSObject <MDLNamed>

 {
    id<MDLMeshBufferAllocator> *_allocator;
}


@property (retain, nonatomic) NSArray *faceIndexing; // ivar: _faceIndexing
@property (readonly, nonatomic) NSInteger geometryType; // ivar: _geometryType
@property (readonly, retain, nonatomic) NSObject<MDLMeshBuffer> *indexBuffer; // ivar: _indexBuffer
@property (readonly, nonatomic) NSUInteger indexCount; // ivar: _indexCount
@property (readonly, nonatomic) NSUInteger indexType; // ivar: _indexType
@property (retain, nonatomic) MDLMaterial *material; // ivar: _material
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) MDLSubmeshTopology *topology; // ivar: _topology


-(id)indexBufferAsIndexType:(NSUInteger)arg0 ;
-(id)initWithIndexBuffer:(id)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 geometryType:(NSInteger)arg3 material:(id)arg4 ;
-(id)initWithMDLSubmesh:(id)arg0 indexType:(NSUInteger)arg1 geometryType:(NSInteger)arg2 ;
-(id)initWithName:(id)arg0 indexBuffer:(id)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 faceIndexing:(id)arg4 geometryType:(NSInteger)arg5 material:(id)arg6 topology:(id)arg7 ;
-(id)initWithName:(id)arg0 indexBuffer:(id)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 geometryType:(NSInteger)arg4 material:(id)arg5 ;
-(id)initWithName:(id)arg0 indexBuffer:(id)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 geometryType:(NSInteger)arg4 material:(id)arg5 topology:(id)arg6 ;
-(struct MDLAABB )boundingBoxForMesh:(id)arg0 ;
-(void)debugPrintToFile:(struct __sFILE *)arg0 ;


@end


#endif