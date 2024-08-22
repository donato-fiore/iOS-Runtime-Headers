// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEMULTIUSERSTREAMINGREQUEST_H
#define FTMUTABLEMULTIUSERSTREAMINGREQUEST_H



#import "FTMultiUserStreamingRequest.h"
#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTMultiUserStartSpeechRequest.h"
#import "FTResetServerEndpointer.h"
#import "FTSetAlternateRecognitionSausage.h"
#import "FTSetEndpointerState.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTUpdateAudioInfo.h"

@interface FTMutableMultiUserStreamingRequest : FTMultiUserStreamingRequest

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property (copy, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif