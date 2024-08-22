// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMCHEVRONMAPPER_H
#define CMDIAGRAMCHEVRONMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
    BOOL mHChevron;
}




-(id)_suggestedBoundsForNodeAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)setIsHChevron:(BOOL)arg0 ;


@end


#endif