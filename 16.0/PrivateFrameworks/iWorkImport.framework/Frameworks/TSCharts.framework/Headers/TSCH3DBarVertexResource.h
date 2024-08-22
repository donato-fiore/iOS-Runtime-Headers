// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DBARVERTEXRESOURCE_H
#define TSCH3DBARVERTEXRESOURCE_H



#import "TSCH3DAbstractBarVertexResource.h"
#import "TSCH3DBarExtrusionGeometry.h"

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}




-(NSInteger)capOffset;
-(NSInteger)numCapVertices;
-(NSInteger)numVertices;
-(NSInteger)verticesOffset;
-(id)geometry;
-(id)get;
-(id)initWithGeometry:(id)arg0 ;


@end


#endif