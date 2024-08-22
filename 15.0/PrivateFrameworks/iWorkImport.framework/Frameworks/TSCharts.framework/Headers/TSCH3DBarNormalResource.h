// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DBARNORMALRESOURCE_H
#define TSCH3DBARNORMALRESOURCE_H



#import "TSCH3DAbstractBarNormalResource.h"
#import "TSCH3DBarExtrusionGeometry.h"

@interface TSCH3DBarNormalResource : TSCH3DAbstractBarNormalResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}




-(id)get;
-(id)initWithGeometry:(id)arg0 ;


@end


#endif