// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSOSPREYSTREAMINGBEGINRESPONSE_H
#define SIRITTSOSPREYSTREAMINGBEGINRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSOspreyStreamingBeginResponse : NSObject

@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) CGFloat bufferDuration; // ivar: _bufferDuration
@property (readonly, nonatomic) NSString *resourceLanguage; // ivar: _resourceLanguage
@property (readonly, nonatomic) NSInteger resourceVersion; // ivar: _resourceVersion
@property (readonly, nonatomic) NSString *voiceFootprint; // ivar: _voiceFootprint
@property (readonly, nonatomic) NSString *voiceGender; // ivar: _voiceGender
@property (readonly, nonatomic) NSString *voiceLanguage; // ivar: _voiceLanguage
@property (readonly, nonatomic) NSString *voiceName; // ivar: _voiceName
@property (readonly, nonatomic) NSString *voiceType; // ivar: _voiceType
@property (readonly, nonatomic) NSInteger voiceVersion; // ivar: _voiceVersion


-(id)initWithOspreyBeginResponse:(id)arg0 ;


@end


#endif