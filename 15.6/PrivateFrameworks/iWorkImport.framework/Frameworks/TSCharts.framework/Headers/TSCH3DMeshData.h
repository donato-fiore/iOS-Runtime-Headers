// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DMESHDATA_H
#define TSCH3DMESHDATA_H


#import <Foundation/Foundation.h>

#import "TSCH3DGeometry.h"
#import "TSCH3DTexCoordGeneration.h"

@interface TSCH3DMeshData : NSObject

@property (readonly, retain, nonatomic) TSCH3DGeometry *geometry; // ivar: _geometry
@property (readonly, retain, nonatomic) TSCH3DTexCoordGeneration *texcoordGenerator; // ivar: _texcoordGenerator


+(id)dataWithGeometry:(id)arg0 texcoordGenerator:(id)arg1 ;
-(id)initWithGeometry:(id)arg0 texcoordGenerator:(id)arg1 ;


@end


#endif