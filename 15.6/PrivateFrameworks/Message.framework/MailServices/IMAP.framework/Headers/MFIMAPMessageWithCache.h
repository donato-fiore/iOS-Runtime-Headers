// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFIMAPMESSAGEWITHCACHE_H
#define MFIMAPMESSAGEWITHCACHE_H

@class NSData, MFMessageHeaders;


#import "MFIMAPMessage.h"

@interface MFIMAPMessageWithCache : MFIMAPMessage {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}




-(BOOL)isMessageContentsLocallyAvailable;
-(id)headerData;
-(id)headers;
-(id)headersIfAvailable;
-(id)messageData;
-(void)setHeaders:(id)arg0 ;
-(void)setMessageData:(id)arg0 isPartial:(BOOL)arg1 ;


@end


#endif