// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEECHSYNTHESISUTTERANCEINFOMUTATION_H
#define _SVXSPEECHSYNTHESISUTTERANCEINFOMUTATION_H

@class NSString, NSArray;
@protocol SVXSpeechSynthesisUtteranceInfoMutating;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisUtteranceInfo.h"

@interface _SVXSpeechSynthesisUtteranceInfoMutation : NSObject <SVXSpeechSynthesisUtteranceInfoMutating>

 {
    SVXSpeechSynthesisUtteranceInfo *_baseModel;
    NSString *_utterance;
    NSArray *_wordTimings;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setUtterance:(id)arg0 ;
-(void)setWordTimings:(id)arg0 ;


@end


#endif