// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIBOXSCORER_H
#define VIBOXSCORER_H


#import <Foundation/Foundation.h>

#import "_TtC18VisualIntelligence19BoxScorerCompatible.h"

@interface VIBoxScorer : NSObject {
    _TtC18VisualIntelligence19BoxScorerCompatible *_boxScorer;
}




-(CGFloat)scoreWithBoundingBox:(struct CGRect )arg0 ;
-(CGFloat)scoreWithXTopLeft:(CGFloat)arg0 yTopLeft:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(id)initWithGranularity:(NSInteger)arg0 xMean:(CGFloat)arg1 yMean:(CGFloat)arg2 std:(CGFloat)arg3 ;


@end


#endif