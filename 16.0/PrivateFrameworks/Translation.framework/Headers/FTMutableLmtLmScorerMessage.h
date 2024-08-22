// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLELMTLMSCORERMESSAGE_H
#define FTMUTABLELMTLMSCORERMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTLmtLmScorerMessage.h"
#import "FTLmScorerRequest.h"
#import "FTLmScorerResponse.h"

@interface FTMutableLmtLmScorerMessage : FTLmtLmScorerMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTLmScorerRequest *session_messageAsFTLmScorerRequest;
@property (copy, nonatomic) FTLmScorerResponse *session_messageAsFTLmScorerResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif