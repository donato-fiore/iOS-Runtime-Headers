// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSPEECHRECOGNITIONMETADATA_H
#define SFSPEECHRECOGNITIONMETADATA_H

@class NSString;
@protocol SRSampling, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFVoiceAnalytics.h"

@interface SFSpeechRecognitionMetadata : NSObject <SRSampling, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat averagePauseDuration; // ivar: _averagePauseDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat speakingRate; // ivar: _speakingRate
@property (readonly, nonatomic) CGFloat speechDuration; // ivar: _speechDuration
@property (readonly, nonatomic) CGFloat speechStartTimestamp; // ivar: _speechStartTimestamp
@property (readonly) Class superclass;
@property (readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics; // ivar: _voiceAnalytics


+(BOOL)supportsSecureCoding;
-(id)_initWithSpeechStartTimestamp:(CGFloat)arg0 speechDuration:(CGFloat)arg1 voiceAnalytics:(id)arg2 speakingRate:(CGFloat)arg3 averagePauseDuration:(CGFloat)arg4 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif