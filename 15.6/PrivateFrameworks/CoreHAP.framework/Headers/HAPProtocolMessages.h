// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPPROTOCOLMESSAGES_H
#define HAPPROTOCOLMESSAGES_H

@class HMFObject;



@interface HAPProtocolMessages : HMFObject



+(BOOL)_parseEmptyResponse:(id)arg0 expectedTID:(unsigned char)arg1 withHeader:(BOOL)arg2 ;
+(BOOL)parseAuthChallengeResponse:(id)arg0 expectedTID:(unsigned char)arg1 outChallengeResponse:(*id)arg2 outMFICert:(*id)arg3 withHeader:(BOOL)arg4 ;
+(BOOL)parseTokenResponse:(id)arg0 expectedTID:(unsigned char)arg1 withHeader:(BOOL)arg2 outToken:(*id)arg3 outUUID:(*id)arg4 ;
+(BOOL)parseTokenUpdateResponse:(id)arg0 expectedTID:(unsigned char)arg1 withHeader:(BOOL)arg2 ;
+(id)constructAuthChallengeRequest:(id)arg0 nonce:(id)arg1 outTID:(char *)arg2 ;
+(id)constructInfoRequest:(id)arg0 outTID:(char *)arg1 ;
+(id)constructInfoRequest:(id)arg0 serviceUUID:(id)arg1 outTID:(char *)arg2 ;
+(id)constructRequestHeaderFor:(NSUInteger)arg0 instanceID:(id)arg1 outTID:(char *)arg2 ;
+(id)constructTokenRequest:(id)arg0 outTID:(char *)arg1 ;
+(id)constructTokenUpdateRequest:(id)arg0 token:(id)arg1 outTID:(char *)arg2 ;
+(id)logCategory;
+(id)parseInfoResponse:(id)arg0 expectedTID:(unsigned char)arg1 withHeader:(BOOL)arg2 ;


@end


#endif