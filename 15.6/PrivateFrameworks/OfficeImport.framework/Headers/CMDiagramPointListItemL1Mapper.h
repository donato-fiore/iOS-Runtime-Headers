// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDIAGRAMPOINTLISTITEML1MAPPER_H
#define CMDIAGRAMPOINTLISTITEML1MAPPER_H



#import "CMDiagramPointMapper.h"

@interface CMDiagramPointListItemL1Mapper : CMDiagramPointMapper {
    NSUInteger mListIndex;
}




-(id)initWithPoint:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 listIndex:(NSUInteger)arg3 parent:(id)arg4 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif