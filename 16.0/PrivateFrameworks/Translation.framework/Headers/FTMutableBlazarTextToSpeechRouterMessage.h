// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBLAZARTEXTTOSPEECHROUTERMESSAGE_H
#define FTMUTABLEBLAZARTEXTTOSPEECHROUTERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarTextToSpeechRouterMessage.h"
#import "FTTextToSpeechRequest.h"
#import "FTTextToSpeechResponse.h"

@interface FTMutableBlazarTextToSpeechRouterMessage : FTBlazarTextToSpeechRouterMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property (copy, nonatomic) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif