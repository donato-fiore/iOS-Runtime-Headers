// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTHIDLATENCYINTERVAL_H
#define SIGNPOSTHIDLATENCYINTERVAL_H

@protocol SignpostCARenderServerFrameMetadata;


#import "SignpostAnimationSubInterval.h"

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>



@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) unsigned int swapId; // ivar: _swapId


-(id)initWithHIDLatencyInterval:(id)arg0 ;
-(id)initWithStartMCT:(NSUInteger)arg0 endMCT:(NSUInteger)arg1 timebaseRatio:(CGFloat)arg2 swapID:(unsigned int)arg3 frameSeed:(unsigned int)arg4 ;


@end


#endif