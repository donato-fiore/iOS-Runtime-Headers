// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMPOINTARROWMAPPER_H
#define CMDIAGRAMPOINTARROWMAPPER_H



#import "CMDiagramPointMapper.h"

@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
    int mArrowType;
}




-(id)getTextBoundsForBounds:(id)arg0 ;
-(id)initWithPoint:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 parent:(id)arg3 ;
-(id)transformPresentationName;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif