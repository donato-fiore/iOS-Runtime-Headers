// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMPOINTSEGMENTEDPIEMAPPER_H
#define CMDIAGRAMPOINTSEGMENTEDPIEMAPPER_H



#import "CMDiagramPointMapper.h"

@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
    CGFloat mStartAngle;
    CGFloat mStopAngle;
    BOOL mDrawArrows;
    NSUInteger mSegmentIndex;
    NSUInteger mSegmentCount;
}




-(id)_arrowFillWithState:(id)arg0 ;
-(id)transformPresentationName;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)setDrawArrows:(BOOL)arg0 ;
-(void)setSegmentCount:(NSUInteger)arg0 ;
-(void)setSegmentIndex:(NSUInteger)arg0 ;
-(void)setStartAngle:(CGFloat)arg0 ;
-(void)setStopAngle:(CGFloat)arg0 ;


@end


#endif