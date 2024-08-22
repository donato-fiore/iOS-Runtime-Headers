// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDIAGRAMSHAPEMAPPER_H
#define CMDIAGRAMSHAPEMAPPER_H

@class NSString;


#import "CMDiagramMapper.h"
#import "OADOrientedBounds.h"

@interface CMDiagramShapeMapper : CMDiagramMapper {
    NSUInteger mChildCount;
    OADOrientedBounds *mDiagramShapeBounds;
    NSString *mIdentifier;
    float mDefaultFontSize;
    int mMaxMappableTreeDepth;
    float mDefaultScale;
}




-(float)defaultFontSize;
-(float)setFonSizeForChildNode:(id)arg0 atIndex:(NSUInteger)arg1 level:(int)arg2 ;
-(id)initWithOddDiagram:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 identifier:(id)arg3 parent:(id)arg4 ;
-(struct CGRect )circumscribedBounds;
-(struct CGSize )sizeForNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGSize )textSizeForShapeSize:(struct CGSize )arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenAt:(id)arg0 withState:(id)arg1 ;
-(void)setDefaultFonSize;
-(void)setFonSizeForChildNode:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif