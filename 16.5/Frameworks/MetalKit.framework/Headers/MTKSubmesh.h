// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTKSUBMESH_H
#define MTKSUBMESH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTKMeshBuffer.h"
#import "MTKMesh.h"

@interface MTKSubmesh : NSObject

@property (readonly, nonatomic) MTKMeshBuffer *indexBuffer; // ivar: _indexBuffer
@property (readonly, nonatomic) NSUInteger indexCount; // ivar: _indexCount
@property (readonly, nonatomic) NSUInteger indexType; // ivar: _indexType
@property (readonly, weak, nonatomic) MTKMesh *mesh; // ivar: _mesh
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger primitiveType; // ivar: _primitiveType


-(id)initWithMesh:(id)arg0 submesh:(id)arg1 device:(id)arg2 error:(*id)arg3 ;


@end


#endif