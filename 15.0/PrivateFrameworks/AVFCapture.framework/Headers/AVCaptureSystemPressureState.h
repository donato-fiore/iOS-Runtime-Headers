// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURESYSTEMPRESSURESTATE_H
#define AVCAPTURESYSTEMPRESSURESTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureSystemPressureStateInternal.h"

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}


@property (readonly) NSUInteger factors;
@property (readonly) NSString *level;


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithFigLevel:(int)arg0 factors:(NSUInteger)arg1 recommendedFrameRateRangeForPortrait:(id)arg2 ;
-(id)recommendedFrameRateRangeForPortrait;
-(id)spiDebugDescription;
-(int)figLevel;
-(void)dealloc;


@end


#endif