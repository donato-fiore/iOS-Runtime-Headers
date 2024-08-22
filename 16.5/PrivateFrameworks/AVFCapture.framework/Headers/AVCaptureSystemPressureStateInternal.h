// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESYSTEMPRESSURESTATEINTERNAL_H
#define AVCAPTURESYSTEMPRESSURESTATEINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVFrameRateRange.h"

@interface AVCaptureSystemPressureStateInternal : NSObject {
    int _figLevel;
    NSUInteger _factors;
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;
}


@property (readonly) NSUInteger factors;
@property (readonly) int figLevel;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;


-(id)initWithFigLevel:(int)arg0 factors:(NSUInteger)arg1 recommendedFrameRateRangeForPortrait:(id)arg2 ;
-(void)dealloc;


@end


#endif