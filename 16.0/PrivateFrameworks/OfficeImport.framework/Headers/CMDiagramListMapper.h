// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMLISTMAPPER_H
#define CMDIAGRAMLISTMAPPER_H



#import "CMDiagramShapeMapper.h"

@interface CMDiagramListMapper : CMDiagramShapeMapper {
    float mMaxLineCount;
}




-(float)setFonSizeForChildNode:(id)arg0 atIndex:(NSUInteger)arg1 level:(int)arg2 ;
-(id)suggestedBoundsForHListItemWithIndex:(NSUInteger)arg0 ;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGSize )textSize;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)mapListItemAt:(id)arg0 index:(NSUInteger)arg1 withState:(id)arg2 ;
-(void)setDefaultFonSize;


@end


#endif