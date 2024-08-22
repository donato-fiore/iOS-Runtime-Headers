// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPMESSAGE_H
#define MFIMAPMESSAGE_H

@protocol MFIMAPMessage;


#import "MFMailMessage.h"

@interface MFIMAPMessage : MFMailMessage <MFIMAPMessage>

 {
    NSUInteger _size;
    unsigned int _uid;
    NSUInteger _uniqueRemoteId;
}


@property (nonatomic) BOOL hasTemporaryUid;
@property (nonatomic) BOOL isPartial;
@property (nonatomic) unsigned int uid;
@property (nonatomic) NSUInteger uniqueRemoteId;


-(BOOL)isMessageContentsLocallyAvailable;
-(NSInteger)compareByNumberWithMessage:(id)arg0 ;
-(NSUInteger)messageSize;
-(id)_privacySafeDescription;
-(id)initWithFlags:(NSUInteger)arg0 size:(NSUInteger)arg1 uid:(unsigned int)arg2 ;
-(id)messageID;
-(id)originalMailboxURL;
-(id)remoteID;
-(id)remoteMailboxURL;
-(void)setPreferredEncoding:(unsigned int)arg0 ;


@end


#endif