// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTEXTMAGNIFIERTIMEWEIGHTEDPOINT_H
#define TSWPTEXTMAGNIFIERTIMEWEIGHTEDPOINT_H


#import <Foundation/Foundation.h>


@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {
    NSInteger m_index;
    ? m_points;
}


@property (readonly, nonatomic) CGPoint weightedPoint;


-(BOOL)historyCovers:(CGFloat)arg0 ;
-(CGFloat)distanceCoveredInInterval:(CGFloat)arg0 ;
-(CGFloat)distanceCoveredInInterval:(CGFloat)arg0 priorTo:(CGFloat)arg1 ;
-(struct CGSize )displacementInInterval:(CGFloat)arg0 ;
-(struct CGSize )displacementInInterval:(CGFloat)arg0 priorTo:(CGFloat)arg1 ;
-(void)addPoint:(struct CGPoint )arg0 ;
-(void)clearHistory;


@end


#endif