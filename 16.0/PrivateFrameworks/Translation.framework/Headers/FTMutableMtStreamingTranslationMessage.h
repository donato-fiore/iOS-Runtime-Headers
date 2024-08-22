// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEMTSTREAMINGTRANSLATIONMESSAGE_H
#define FTMUTABLEMTSTREAMINGTRANSLATIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTMtStreamingTranslationMessage.h"
#import "FTStreamingTranslationRequest.h"
#import "FTTranslationResponse.h"

@interface FTMutableMtStreamingTranslationMessage : FTMtStreamingTranslationMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTStreamingTranslationRequest *session_messageAsFTStreamingTranslationRequest;
@property (copy, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif