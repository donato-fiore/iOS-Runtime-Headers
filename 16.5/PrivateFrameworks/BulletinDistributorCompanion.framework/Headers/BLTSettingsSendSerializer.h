// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSETTINGSSENDSERIALIZER_H
#define BLTSETTINGSSENDSERIALIZER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "BLTSettingsSendSerializerPassthrough.h"
#import "BLTSendQueueSerializer.h"

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough {
    NSObject<OS_dispatch_queue> *_queue;
    BLTSendQueueSerializer *_queueSerializer;
    NSMutableArray *_completionHandlers;
    NSMutableDictionary *_ackHandlers;
    id *_acknowledgementBlock;
    NSUInteger _ackHandlerCount;
    NSUInteger _responseCount;
}




-(id)init;
-(void)handleFileURL:(id)arg0 ;
// -(void)sendNowWithSent:(id)arg0 withAcknowledgement:(unk)arg1 withTimeout:(id)arg2  ;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 withDescription:(id)arg3 onlyOneFor:(id)arg4 didSend:(id)arg5 andResponse:(unk)arg6 spoolToFile:(id)arg7  ;


@end


#endif