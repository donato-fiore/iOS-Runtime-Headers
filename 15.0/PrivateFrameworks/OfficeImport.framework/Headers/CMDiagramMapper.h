// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDIAGRAMMAPPER_H
#define CMDIAGRAMMAPPER_H



#import "CMDrawableMapper.h"
#import "ODDDiagram.h"
#import "CMDrawingContext.h"

@interface CMDiagramMapper : CMDrawableMapper {
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}




+(int)diagramTypeFromString:(id)arg0 ;
-(id)copyDiagramMapperForId:(id)arg0 ;
-(id)diagram;
-(id)identifierFromLayoutTypeId:(id)arg0 ;
-(id)initWithOddDiagram:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 parent:(id)arg3 ;
-(id)styleMatrix;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif