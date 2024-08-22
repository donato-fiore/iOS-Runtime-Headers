// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFIMAPMESSAGE_H
#define MFIMAPMESSAGE_H

@class MFMailMessage, NSArray;



@interface MFIMAPMessage : MFMailMessage {
    NSUInteger _size;
    NSArray *_customFlags;
    unsigned int _uid;
    NSUInteger _uniqueRemoteId;
}




-(BOOL)hasTemporaryUid;
-(BOOL)isMessageContentsLocallyAvailable;
-(BOOL)isPartial;
-(NSInteger)compareByNumberWithMessage:(id)arg0 ;
-(NSUInteger)messageSize;
-(NSUInteger)uniqueRemoteId;
-(id)_privacySafeDescription;
-(id)customFlags;
-(id)initWithFlags:(NSUInteger)arg0 customFlags:(id)arg1 size:(NSUInteger)arg2 uid:(unsigned int)arg3 ;
-(id)mailboxName;
-(id)messageID;
-(id)originalMailboxURL;
-(id)remoteID;
-(id)remoteMailboxURL;
-(unsigned int)uid;
-(void)setHasTemporaryUid:(BOOL)arg0 ;
-(void)setIsPartial:(BOOL)arg0 ;
-(void)setPreferredEncoding:(unsigned int)arg0 ;
-(void)setUid:(unsigned int)arg0 ;
-(void)setUniqueRemoteId:(NSUInteger)arg0 ;


@end


#endif