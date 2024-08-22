// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMUTABLEC2ANIMATIONPARAMETERS_H
#define CCUIMUTABLEC2ANIMATIONPARAMETERS_H



#import "CCUIC2AnimationParameters.h"

@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic) CAFrameRateRange frameRateRange;
@property (nonatomic) CGFloat friction;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic) CGFloat tension;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif