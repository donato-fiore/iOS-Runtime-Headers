// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLELANGUAGEDETECTIONSTREAMINGREQUEST_H
#define FTMUTABLELANGUAGEDETECTIONSTREAMINGREQUEST_H



#import "FTLanguageDetectionStreamingRequest.h"
#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTStartLanguageDetectionRequest.h"

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif