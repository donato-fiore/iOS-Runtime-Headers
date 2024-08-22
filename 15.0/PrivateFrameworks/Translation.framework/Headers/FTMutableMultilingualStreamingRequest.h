// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEMULTILINGUALSTREAMINGREQUEST_H
#define FTMUTABLEMULTILINGUALSTREAMINGREQUEST_H



#import "FTMultilingualStreamingRequest.h"
#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetected.h"
#import "FTSetRequestOrigin.h"
#import "FTSetSpeechContext.h"
#import "FTSetSpeechProfile.h"
#import "FTStartMultilingualSpeechRequest.h"
#import "FTUpdateAudioInfo.h"

@interface FTMutableMultilingualStreamingRequest : FTMultilingualStreamingRequest

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property (copy, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif