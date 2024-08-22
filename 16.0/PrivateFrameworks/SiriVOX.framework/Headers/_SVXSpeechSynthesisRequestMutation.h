// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEECHSYNTHESISREQUESTMUTATION_H
#define _SVXSPEECHSYNTHESISREQUESTMUTATION_H

@class NSString, NSDictionary;
@protocol SVXSpeechSynthesisRequestMutating;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisRequest.h"
#import "SVXSpeechSynthesisAudio.h"

@interface _SVXSpeechSynthesisRequestMutation : NSObject <SVXSpeechSynthesisRequestMutating>

 {
    SVXSpeechSynthesisRequest *_baseModel;
    NSInteger _priority;
    NSUInteger _options;
    NSString *_speakableText;
    NSDictionary *_speakableContext;
    NSString *_localizationKey;
    SVXSpeechSynthesisAudio *_presynthesizedAudio;
    NSString *_streamID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setLocalizationKey:(id)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)setPresynthesizedAudio:(id)arg0 ;
-(void)setPriority:(NSInteger)arg0 ;
-(void)setSpeakableContext:(id)arg0 ;
-(void)setSpeakableText:(id)arg0 ;
-(void)setStreamID:(id)arg0 ;


@end


#endif