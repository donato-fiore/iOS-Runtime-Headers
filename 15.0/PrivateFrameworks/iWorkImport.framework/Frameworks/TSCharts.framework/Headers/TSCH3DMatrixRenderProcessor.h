// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DMATRIXRENDERPROCESSOR_H
#define TSCH3DMATRIXRENDERPROCESSOR_H



#import "TSCH3DRetargetRenderProcessor.h"

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {
    StateStack<glm::detail::tmat4x4<float>, 8> _transformStack;
    tmat4x4<float> _projection;
}


@property (readonly, nonatomic) *void current;
@property (readonly, nonatomic) *void projection;
@property (readonly, nonatomic) BOOL projectionChanged; // ivar: _projectionChanged
@property (readonly, nonatomic) BOOL transformChanged; // ivar: _transformChanged


-(id)normalizedViewAll;
-(void)copyProjectionInto:(*void)arg0 ;
-(void)copyTransformInto:(*void)arg0 ;
-(void)multiply:(*void)arg0 ;
-(void)popMatrix;
-(void)projection:(*void)arg0 ;
-(void)pushMatrix;
-(void)replace:(*void)arg0 ;
-(void)resetChangeFlags;
-(void)scale:(*void)arg0 ;
-(void)translate:(*void)arg0 ;


@end


#endif