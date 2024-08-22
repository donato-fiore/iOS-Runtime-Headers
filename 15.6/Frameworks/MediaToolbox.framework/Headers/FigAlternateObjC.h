// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGALTERNATEOBJC_H
#define FIGALTERNATEOBJC_H


#import <Foundation/Foundation.h>

#import "FigAlternateObjCVideoAttributes.h"
#import "FigAlternateObjCAudioAttributes.h"

@interface FigAlternateObjC : NSObject {
    FigAlternateObjCVideoAttributes *_videoAttributes;
    FigAlternateObjCAudioAttributes *_audioAttributes;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) FigAlternateObjCAudioAttributes *audioAttributes;
@property (readonly, nonatomic) CGFloat averageBitRate; // ivar: _averageBitRate
@property (readonly, nonatomic) *OpaqueFigAlternate figAlternate; // ivar: _alternate
@property (readonly, nonatomic) CGFloat peakBitRate; // ivar: _peakBitRate
@property (readonly, nonatomic) FigAlternateObjCVideoAttributes *videoAttributes;


-(id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg0 ;
-(void)dealloc;


@end


#endif