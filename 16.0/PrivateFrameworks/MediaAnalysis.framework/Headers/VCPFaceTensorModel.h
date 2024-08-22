// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFACETENSORMODEL_H
#define VCPFACETENSORMODEL_H


#import <Foundation/Foundation.h>


@interface VCPFaceTensorModel : NSObject {
    int _numBlendshapePlusOne;
    int _numComponents;
    int _numIdentities;
    *float _transformedCoeff;
    *float _blendShapeDelta;
}


@property (readonly) *int blendshapeComponentIndex; // ivar: _blendshapeComponentIndex
@property (readonly) *float componentsBlendshape; // ivar: _componentsBlendshape
@property (readonly) *float meanBlendshape; // ivar: _meanBlendshape
@property (readonly) int numVertices; // ivar: _numVertices
@property (readonly) *float tensorCoeff; // ivar: _tensorCoeff


-(id)initWithModelFile:(struct __sFILE *)arg0 ;
-(void)calculateMesh:(*float)arg0 numVertices:(int)arg1 blendshapes:(*float)arg2 outputMesh:(*float)arg3 ;
-(void)calculateModelBlendshapes:(*float)arg0 outputBlendshapes:(*float)arg1 ;
-(void)dealloc;


@end


#endif