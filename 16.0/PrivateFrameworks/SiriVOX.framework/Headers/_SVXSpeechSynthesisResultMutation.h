// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEECHSYNTHESISRESULTMUTATION_H
#define _SVXSPEECHSYNTHESISRESULTMUTATION_H

@class NSError, NSString;
@protocol SVXSpeechSynthesisResultMutating;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisResult.h"
#import "SVXSpeechSynthesisUtteranceInfo.h"

@interface _SVXSpeechSynthesisResultMutation : NSObject <SVXSpeechSynthesisResultMutating>

 {
    SVXSpeechSynthesisResult *_baseModel;
    NSInteger _type;
    SVXSpeechSynthesisUtteranceInfo *_utteranceInfo;
    NSError *_error;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setUtteranceInfo:(id)arg0 ;


@end


#endif