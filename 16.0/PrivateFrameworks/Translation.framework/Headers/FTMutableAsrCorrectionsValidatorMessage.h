// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEASRCORRECTIONSVALIDATORMESSAGE_H
#define FTMUTABLEASRCORRECTIONSVALIDATORMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTAsrCorrectionsValidatorMessage.h"
#import "FTCorrectionsValidatorRequest.h"
#import "FTCorrectionsValidatorResponse.h"

@interface FTMutableAsrCorrectionsValidatorMessage : FTAsrCorrectionsValidatorMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTCorrectionsValidatorRequest *session_messageAsFTCorrectionsValidatorRequest;
@property (copy, nonatomic) FTCorrectionsValidatorResponse *session_messageAsFTCorrectionsValidatorResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif