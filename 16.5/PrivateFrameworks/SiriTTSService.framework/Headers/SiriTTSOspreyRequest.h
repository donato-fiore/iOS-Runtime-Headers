// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSOSPREYREQUEST_H
#define SIRITTSOSPREYREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSOspreyRequest : NSObject

@property (copy, nonatomic) NSString *appId; // ivar: _appId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) float neuralSentenceDuration; // ivar: _neuralSentenceDuration
@property (nonatomic) float neuralSentenceEnergy; // ivar: _neuralSentenceEnergy
@property (nonatomic) float neuralSentencePitch; // ivar: _neuralSentencePitch
@property (nonatomic) float neuralSentencePitchRange; // ivar: _neuralSentencePitchRange
@property (nonatomic) float neuralSentenceTilt; // ivar: _neuralSentenceTilt
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (nonatomic) NSUInteger requestCreatedTime; // ivar: _requestCreatedTime
@property (nonatomic) BOOL serverLogs; // ivar: _serverLogs
@property (copy, nonatomic) NSString *speechId; // ivar: _speechId
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *voiceName; // ivar: _voiceName
@property (nonatomic) float volume; // ivar: _volume


-(id)underlyingRequest;


@end


#endif