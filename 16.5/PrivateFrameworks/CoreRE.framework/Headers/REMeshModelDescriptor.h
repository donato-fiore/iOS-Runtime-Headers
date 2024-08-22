// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMESHMODELDESCRIPTOR_H
#define REMESHMODELDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMeshBlendShapeModelDescriptor.h"
#import "REMeshSkinningModelDescriptor.h"

@interface REMeshModelDescriptor : NSObject <NSSecureCoding>

 {
    ? _boundingBoxMin;
    ? _boundingBoxMax;
}


@property (readonly, nonatomic) REMeshBlendShapeModelDescriptor *blendShapeModel; // ivar: _blendShapeModel
@property ? boundingBoxMax;
@property ? boundingBoxMin;
@property (readonly, nonatomic) NSArray *lods; // ivar: _lods
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *partIndices; // ivar: _partIndices
@property (readonly, nonatomic) unsigned int skeletonCount; // ivar: _skeletonCount
@property (readonly, nonatomic) REMeshSkinningModelDescriptor *skinningModel; // ivar: _skinningModel


-(BOOL)validateWithPartCount:(NSUInteger)arg0 payloadSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 partIndices:(id)arg1 skeletonCount:(unsigned int)arg2 skinningModel:(id)arg3 blendShapeModel:(id)arg4 lods:(id)arg5 boundingBoxMinboundingBoxMax;
-(id)initWithResourceDefinitionModel:(*void)arg0 inverseBindPoseAttributes:(id)arg1 payloadBuilder:(*void)arg2 ;
-(struct MeshModel )meshModelWithMeshModelContext:(struct MeshModelContext *)arg0 inverseBindPoseBuffers:(*void)arg1 allocator:(struct Allocator *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif