// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENELAYOUTORIENTATIONCOORDINATESPACE_H
#define SBSCENELAYOUTORIENTATIONCOORDINATESPACE_H



#import "SBSceneLayoutCoordinateSpace.h"

@interface SBSceneLayoutOrientationCoordinateSpace : SBSceneLayoutCoordinateSpace {
    NSInteger _referenceOrientation;
    NSInteger _orientation;
}




-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithInterfaceOrientation:(NSInteger)arg0 withReferenceCoordinateSpace:(id)arg1 inOrientation:(NSInteger)arg2 ;
-(struct CGRect )bounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif