// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHATDICTIONARY_H
#define GKVOICECHATDICTIONARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary *actualDictionary;
    NSUInteger type;
    unsigned int orignalCallID;
}


@property unsigned int callID;
@property NSInteger nonce;
@property (readonly) unsigned int originalCallID;


+(BOOL)validateCancel:(id)arg0 ;
+(BOOL)validateDictionary:(id)arg0 ;
+(BOOL)validateFocus:(id)arg0 ;
+(BOOL)validateInvite:(id)arg0 ;
+(BOOL)validateReply:(id)arg0 ;
+(id)dictionaryFromData:(id)arg0 ;
+(id)inviteDictionaryToParticipantID:(id)arg0 fromParticipantID:(id)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(BOOL)arg4 ;
-(BOOL)isCancelDictionary;
-(BOOL)isFocus;
-(BOOL)isFocusDictionary;
-(BOOL)isInviteDictionary;
-(BOOL)isReplyDictionary;
-(BOOL)matchesNonce:(NSInteger)arg0 ;
-(BOOL)matchesResponse:(id)arg0 ;
-(NSUInteger)response;
-(NSUInteger)type;
-(id)cancelDictionary;
-(id)connectionData;
-(id)createBlob;
-(id)description;
-(id)focusDictionary:(BOOL)arg0 ;
-(id)fromParticipantID;
-(id)initWithCoder:(id)arg0 ;
-(id)localVCPartyID;
-(id)participantID;
-(id)remoteVCPartyID;
-(id)replyDictionary:(NSUInteger)arg0 connectionData:(id)arg1 callID:(unsigned int)arg2 focus:(BOOL)arg3 ;
-(id)setLocalVCPartyID:(id)arg0 ;
-(id)setRemoteVCPartyID:(id)arg0 ;
-(id)version;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setFocus:(BOOL)arg0 ;
-(void)setFromParticipantID:(id)arg0 ;


@end


#endif