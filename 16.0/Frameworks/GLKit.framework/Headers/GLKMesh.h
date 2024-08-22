// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKMESH_H
#define GLKMESH_H

@class NSString, NSArray, MDLVertexDescriptor;

#import <Foundation/Foundation.h>


@interface GLKMesh : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *submeshes; // ivar: _submeshes
@property (readonly, nonatomic) NSArray *vertexBuffers; // ivar: _vertexBuffers
@property (readonly, nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property (readonly, nonatomic) MDLVertexDescriptor *vertexDescriptor; // ivar: _vertexDescriptor


+(id)newMeshesFromAsset:(id)arg0 sourceMeshes:(*id)arg1 error:(*id)arg2 ;
+(void)_createMeshesFromObject:(id)arg0 newMeshes:(id)arg1 sourceMeshes:(id)arg2 error:(*id)arg3 ;
-(id)initWithMesh:(id)arg0 error:(*id)arg1 ;


@end


#endif