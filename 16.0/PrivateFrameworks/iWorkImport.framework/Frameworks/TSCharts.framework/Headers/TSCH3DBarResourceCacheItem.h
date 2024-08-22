// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DBARRESOURCECACHEITEM_H
#define TSCH3DBARRESOURCECACHEITEM_H


#import <Foundation/Foundation.h>

#import "TSCH3DBarExtrusionGeometry.h"
#import "TSCH3DBarNormalResource.h"
#import "TSCH3DBarTexCoordResource.h"
#import "TSCH3DBarVertexResource.h"

@interface TSCH3DBarResourceCacheItem : NSObject {
    TSCH3DBarExtrusionGeometry *_barGeometry;
}


@property (readonly, nonatomic) TSCH3DBarNormalResource *normalResource; // ivar: _normalResource
@property (readonly, nonatomic) TSCH3DBarTexCoordResource *texCoordResource; // ivar: _texCoordResource
@property (readonly, nonatomic) TSCH3DBarVertexResource *vertexResource; // ivar: _vertexResource


+(id)itemWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;
-(id)initWithExtrusionSetting:(struct BarExtrusionSetting *)arg0 ;


@end


#endif