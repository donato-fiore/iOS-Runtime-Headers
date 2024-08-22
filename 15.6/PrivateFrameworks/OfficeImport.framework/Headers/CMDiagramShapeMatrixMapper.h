// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDIAGRAMSHAPEMATRIXMAPPER_H
#define CMDIAGRAMSHAPEMATRIXMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
    NSUInteger mColumnCount;
    NSUInteger mRowCount;
    float mRectWidth;
    float mRectHeight;
    BOOL mHasArrows;
    BOOL mIsSnake;
    BOOL mIsHorizontal;
    BOOL mIsLinear;
}




-(CGFloat)gapRatio;
-(NSUInteger)columnCount;
-(id)initWithOddDiagram:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 identifier:(id)arg3 parent:(id)arg4 ;
-(struct CGRect )circumscribedBounds;
-(struct CGSize )gapSize;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)setColumnsAndRowsCount;


@end


#endif