// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLELANGUAGEDETECTIONSTREAMINGREQUEST_H
#define QSSMUTABLELANGUAGEDETECTIONSTREAMINGREQUEST_H



#import "QSSLanguageDetectionStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSStartLanguageDetectionRequest.h"

@interface QSSMutableLanguageDetectionStreamingRequest : QSSLanguageDetectionStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSStartLanguageDetectionRequest *contentAsQSSStartLanguageDetectionRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif