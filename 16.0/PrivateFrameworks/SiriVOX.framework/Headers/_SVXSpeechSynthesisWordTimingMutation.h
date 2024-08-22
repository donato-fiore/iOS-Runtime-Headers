// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEECHSYNTHESISWORDTIMINGMUTATION_H
#define _SVXSPEECHSYNTHESISWORDTIMINGMUTATION_H

@class NSString;
@protocol SVXSpeechSynthesisWordTimingMutating;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisWordTiming.h"

@interface _SVXSpeechSynthesisWordTimingMutation : NSObject <SVXSpeechSynthesisWordTimingMutating>

 {
    SVXSpeechSynthesisWordTiming *_baseModel;
    _NSRange _range;
    CGFloat _timeInterval;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setRange:(struct _NSRange )arg0 ;
-(void)setTimeInterval:(CGFloat)arg0 ;


@end


#endif