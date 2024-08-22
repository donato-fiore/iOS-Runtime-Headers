// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFOUTGOINGMESSAGE_H
#define MFOUTGOINGMESSAGE_H

@class MFMessageBody, MFMutableMessageHeaders;


#import "MFMailMessage.h"

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}




-(BOOL)messageData:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)messageDataHolder:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(NSUInteger)messageSize;
-(id)headers;
-(id)headersIfAvailable;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageData;
-(id)messageDataHolder;
-(id)messageStore;
-(id)mutableHeaders;
-(void)dealloc;
-(void)setMessageBody:(id)arg0 ;
-(void)setMutableHeaders:(id)arg0 ;


@end


#endif