// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLKSUBMESH_H
#define GLKSUBMESH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GLKMeshBuffer.h"
#import "GLKMesh.h"

@interface GLKSubmesh : NSObject

@property (readonly, nonatomic) GLKMeshBuffer *elementBuffer; // ivar: _elementBuffer
@property (readonly, nonatomic) int elementCount; // ivar: _elementCount
@property (readonly, weak, nonatomic) GLKMesh *mesh; // ivar: _mesh
@property (readonly, nonatomic) unsigned int mode; // ivar: _mode
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int type; // ivar: _type


-(id)initWithMesh:(id)arg0 submesh:(id)arg1 error:(*id)arg2 ;


@end


#endif