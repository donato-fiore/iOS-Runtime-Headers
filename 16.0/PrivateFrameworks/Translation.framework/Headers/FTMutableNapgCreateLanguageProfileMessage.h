// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLENAPGCREATELANGUAGEPROFILEMESSAGE_H
#define FTMUTABLENAPGCREATELANGUAGEPROFILEMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTNapgCreateLanguageProfileMessage.h"
#import "FTCreateLanguageProfileRequest.h"
#import "FTCreateLanguageProfileResponse.h"

@interface FTMutableNapgCreateLanguageProfileMessage : FTNapgCreateLanguageProfileMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property (copy, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif