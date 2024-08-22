// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DDEFAULTNORMALDIRECTIONMAPPER_H
#define TSCH3DDEFAULTNORMALDIRECTIONMAPPER_H



#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    tvec3<float> _normalBias;
}




+(id)mapperWithNormalBias:(*void)arg0 ;
-(id)initWithNormalBias:(*void)arg0 ;
-(void)mapFromVertexArray:(*void)arg0 normalArray:(*void)arg1 normalMatrix:(*void)arg2 numVertices:(NSInteger)arg3 destination:(*void)arg4 ;


@end


#endif