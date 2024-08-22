// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTEXTOBJECT_H
#define CPTEXTOBJECT_H



#import "CPChunk.h"

@interface CPTextObject : CPChunk {
    CGPoint anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    CGFloat maxFontLineHeight;
}




-(CGFloat)maxFontLineHeight;
-(float)maxFontSize;
-(void)calculateMetrics;
-(void)clearCachedInfo;
-(void)translateObjectYBy:(CGFloat)arg0 ;


@end


#endif