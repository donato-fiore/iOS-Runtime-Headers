// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEMULTILINGUALSTREAMINGREQUEST_H
#define QSSMUTABLEMULTILINGUALSTREAMINGREQUEST_H



#import "QSSMultilingualStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSLanguageDetected.h"
#import "QSSSetRequestOrigin.h"
#import "QSSSetSpeechContext.h"
#import "QSSSetSpeechProfile.h"
#import "QSSStartMultilingualSpeechRequest.h"
#import "QSSUpdateAudioInfo.h"

@interface QSSMutableMultilingualStreamingRequest : QSSMultilingualStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSStartMultilingualSpeechRequest *contentAsQSSStartMultilingualSpeechRequest;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif