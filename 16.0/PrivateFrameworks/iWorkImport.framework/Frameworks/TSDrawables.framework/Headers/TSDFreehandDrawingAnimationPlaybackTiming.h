// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFREEHANDDRAWINGANIMATIONPLAYBACKTIMING_H
#define TSDFREEHANDDRAWINGANIMATIONPLAYBACKTIMING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSDFreehandDrawingInfo.h"

@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject {
    TSDFreehandDrawingInfo *_freehandDrawingInfo;
    NSArray *_fillShapes;
    NSArray *_strokeShapes;
}




-(BOOL)shouldParameterizeStrokesWithDuration:(CGFloat)arg0 framesPerSecond:(CGFloat)arg1 ;
-(CGFloat)visibilityOfChild:(id)arg0 atPercent:(CGFloat)arg1 ;
-(id)initWithFreehandDrawingInfo:(id)arg0 ;
-(id)p_fillTimingCurve;


@end


#endif