// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGALTERNATEOBJCVIDEOATTRIBUTES_H
#define FIGALTERNATEOBJCVIDEOATTRIBUTES_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FigAlternateObjCVideoAttributes : NSObject {
    *OpaqueFigAlternate _alternate;
    NSArray *_videoCodecTypes;
    NSString *_videoRange;
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