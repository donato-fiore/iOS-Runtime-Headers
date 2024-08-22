// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENELAYOUTFRAMECOORDINATESPACE_H
#define SBSCENELAYOUTFRAMECOORDINATESPACE_H

@class CALayer;


#import "SBSceneLayoutCoordinateSpace.h"

@interface SBSceneLayoutFrameCoordinateSpace : SBSceneLayoutCoordinateSpace {
    CALayer *_containerLayer;
    CALayer *_contentLayer;
}




-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 withinCoordinateSpace:(id)arg1 ;
-(struct CGRect )bounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif