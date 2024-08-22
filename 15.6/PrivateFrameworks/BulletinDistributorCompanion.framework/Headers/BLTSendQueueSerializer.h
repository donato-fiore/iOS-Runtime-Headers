// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSENDQUEUESERIALIZER_H
#define BLTSENDQUEUESERIALIZER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface BLTSendQueueSerializer : NSObject

@property (copy, nonatomic) NSURL *sendFileURL; // ivar: _sendFileURL
@property (readonly, nonatomic) BOOL usesMessageIdentifiers; // ivar: _usesMessageIdentifiers


-(BOOL)handleFileURL:(id)arg0 protobufHandler:(id)arg1 ;
-(id)initWithUsesMessageIdentifiers:(BOOL)arg0 ;
-(void)add:(id)arg0 type:(unsigned short)arg1 ;
-(void)add:(id)arg0 type:(unsigned short)arg1 messageIdentifier:(*id)arg2 ;
-(void)cleanup;
// -(void)sendWithSender:(id)arg0 timeout:(id)arg1 responseHandlers:(id)arg2 didSend:(id)arg3 didQueue:(unk)arg4  ;


@end


#endif