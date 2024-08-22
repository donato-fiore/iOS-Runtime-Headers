// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMOVIELAYOUT_H
#define TSDMOVIELAYOUT_H



#import "TSDMediaLayout.h"
#import "TSDInfoGeometry.h"
#import "TSDMovieInfo.h"

@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry *_dynamicInfoGeometry;
}


@property (readonly, nonatomic) TSDMovieInfo *movieInfo;


-(BOOL)supportsRotation;
-(CGFloat)scaleForInlineClampingUnrotatedSize:(struct CGSize )arg0 withTransform:(struct CGAffineTransform )arg1 ;
-(id)computeLayoutGeometry;
-(id)i_computeWrapPath;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)processChangedProperty:(int)arg0 ;


@end


#endif