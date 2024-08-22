// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESLSLANGUAGEDETECTIONMESSAGE_H
#define FTMUTABLESLSLANGUAGEDETECTIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTSlsLanguageDetectionMessage.h"
#import "FTAudioPacket.h"
#import "FTFinishAudio.h"
#import "FTLanguageDetectionResponse.h"
#import "FTStartLanguageDetectionRequest.h"

@interface FTMutableSlsLanguageDetectionMessage : FTSlsLanguageDetectionMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetectionResponse *session_messageAsFTLanguageDetectionResponse;
@property (copy, nonatomic) FTStartLanguageDetectionRequest *session_messageAsFTStartLanguageDetectionRequest;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif