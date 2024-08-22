// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTMAGNIFIERTIMEWEIGHTEDPOINT_H
#define UITEXTMAGNIFIERTIMEWEIGHTEDPOINT_H


#import <Foundation/Foundation.h>


@interface UITextMagnifierTimeWeightedPoint : NSObject {
    int m_index;
    ? m_points;
}


@property (readonly, nonatomic) CGPoint weightedPoint;


-(BOOL)historyCovers:(CGFloat)arg0 ;
-(BOOL)isPlacedCarefully;
-(float)distanceCoveredInInterval:(CGFloat)arg0 ;
-(float)distanceCoveredInInterval:(CGFloat)arg0 priorTo:(CGFloat)arg1 ;
-(struct CGPoint )diffFromLastPoint;
-(struct CGSize )displacementInInterval:(CGFloat)arg0 ;
-(struct CGSize )displacementInInterval:(CGFloat)arg0 priorTo:(CGFloat)arg1 ;
-(void)addPoint:(struct CGPoint )arg0 ;
-(void)clearHistory;


@end


#endif