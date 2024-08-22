// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADCUSTOMSHAPEGEOMETRY_H
#define OADCUSTOMSHAPEGEOMETRY_H

@class NSMutableArray;


#import "OADShapeGeometry.h"

@interface OADCustomShapeGeometry : OADShapeGeometry {
    *void mGeometryCoordSpace;
    *void mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}




-(NSUInteger)formulaCount;
-(NSUInteger)pathCount;
-(NSUInteger)textBodyRectCount;
-(id)description;
-(id)equivalentCustomGeometry;
-(id)formulaAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)pathAtIndex:(NSUInteger)arg0 ;
-(id)textBodyRectAtIndex:(NSUInteger)arg0 ;
-(int)type;
-(struct CsPoint<int> )limo;
-(struct CsRect<int> )geometryCoordSpace;
-(void)addFormula:(id)arg0 ;
-(void)addPath:(id)arg0 ;
-(void)addTextBodyRect:(id)arg0 ;
-(void)dealloc;
-(void)setGeometryCoordSpace:(struct CsRect<int> )arg0 ;
-(void)setLimo:(struct CsPoint<int> )arg0 ;


@end


#endif