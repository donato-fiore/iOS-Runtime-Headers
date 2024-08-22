// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGALTERNATEOBJCVIDEOATTRIBUTES_H
#define FIGALTERNATEOBJCVIDEOATTRIBUTES_H

@class NSArray, NSString;


#import "FigKVCInspectable.h"

@interface FigAlternateObjCVideoAttributes : FigKVCInspectable {
    *OpaqueFigAlternate _alternate;
    NSArray *_videoCodecTypes;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) CGFloat nominalFrameRate; // ivar: _nominalFrameRate
@property (readonly, nonatomic) CGSize presentationSize; // ivar: _presentationSize
@property (readonly, nonatomic) NSString *videoRange;


-(id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg0 ;
-(void)dealloc;


@end


#endif