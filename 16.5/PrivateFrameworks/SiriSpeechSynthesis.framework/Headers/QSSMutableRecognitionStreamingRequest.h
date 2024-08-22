// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLERECOGNITIONSTREAMINGREQUEST_H
#define QSSMUTABLERECOGNITIONSTREAMINGREQUEST_H



#import "QSSRecognitionStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSCheckForSpeechRequest.h"
#import "QSSFinishAudio.h"
#import "QSSResetServerEndpointer.h"
#import "QSSSetAlternateRecognitionSausage.h"
#import "QSSSetEndpointerState.h"
#import "QSSSetRequestOrigin.h"
#import "QSSSetSpeechContext.h"
#import "QSSSetSpeechProfile.h"
#import "QSSStartSpeechRequest.h"
#import "QSSUpdateAudioInfo.h"

@interface QSSMutableRecognitionStreamingRequest : QSSRecognitionStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSCheckForSpeechRequest *contentAsQSSCheckForSpeechRequest;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSStartSpeechRequest *contentAsQSSStartSpeechRequest;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif