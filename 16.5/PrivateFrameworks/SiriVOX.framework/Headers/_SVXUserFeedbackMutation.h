// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXUSERFEEDBACKMUTATION_H
#define _SVXUSERFEEDBACKMUTATION_H

@class NSString;
@protocol SVXUserFeedbackMutating;

#import <Foundation/Foundation.h>

#import "SVXUserFeedback.h"
#import "SVXUserFeedbackAudioContent.h"
#import "SVXUserFeedbackVoiceContent.h"

@interface _SVXUserFeedbackMutation : NSObject <SVXUserFeedbackMutating>

 {
    SVXUserFeedback *_baseModel;
    NSString *_identifier;
    NSInteger _contentType;
    SVXUserFeedbackAudioContent *_audioContent;
    SVXUserFeedbackVoiceContent *_voiceContent;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAudioContent:(id)arg0 ;
-(void)setContentType:(NSInteger)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setVoiceContent:(id)arg0 ;


@end


#endif