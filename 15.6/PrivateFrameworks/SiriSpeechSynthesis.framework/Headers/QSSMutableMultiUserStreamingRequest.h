// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEMULTIUSERSTREAMINGREQUEST_H
#define QSSMUTABLEMULTIUSERSTREAMINGREQUEST_H



#import "QSSMultiUserStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSFinishAudio.h"
#import "QSSMultiUserStartSpeechRequest.h"
#import "QSSResetServerEndpointer.h"
#import "QSSSetAlternateRecognitionSausage.h"
#import "QSSSetEndpointerState.h"
#import "QSSSetRequestOrigin.h"
#import "QSSSetSpeechContext.h"
#import "QSSSetSpeechProfile.h"
#import "QSSUpdateAudioInfo.h"

@interface QSSMutableMultiUserStreamingRequest : QSSMultiUserStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSMultiUserStartSpeechRequest *contentAsQSSMultiUserStartSpeechRequest;
@property (copy, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (copy, nonatomic) QSSSetAlternateRecognitionSausage *contentAsQSSSetAlternateRecognitionSausage;
@property (copy, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (copy, nonatomic) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (copy, nonatomic) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (copy, nonatomic) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (copy, nonatomic) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif