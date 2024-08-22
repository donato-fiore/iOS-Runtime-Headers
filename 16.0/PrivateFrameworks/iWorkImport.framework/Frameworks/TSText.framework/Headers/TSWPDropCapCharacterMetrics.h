// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPDROPCAPCHARACTERMETRICS_H
#define TSWPDROPCAPCHARACTERMETRICS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSWPDropCapCharacterMetrics : NSObject {
    NSMutableArray *_metricData;
}


@property (readonly, nonatomic) CGFloat baseline; // ivar: _baseline
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) BOOL isRightToLeft; // ivar: _isRightToLeft
@property (readonly, nonatomic) BOOL isVertical; // ivar: _isVertical


-(id)description;
-(id)initWithCharacterCount:(NSUInteger)arg0 isRightToLeft:(BOOL)arg1 isVertical:(BOOL)arg2 baseline:(CGFloat)arg3 ;
-(id)metricsForCharIndex:(NSUInteger)arg0 ;
-(void)adjustMetricsForWidth:(CGFloat)arg0 ;
-(void)applyTransform:(struct CGAffineTransform )arg0 ;


@end


#endif