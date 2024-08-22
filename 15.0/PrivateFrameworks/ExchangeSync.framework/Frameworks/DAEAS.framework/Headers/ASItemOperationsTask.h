// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASITEMOPERATIONSTASK_H
#define ASITEMOPERATIONSTASK_H

@class NSArray;


#import "ASTask.h"
#import "ASMailMessage.h"

@interface ASItemOperationsTask : ASTask {
    NSArray *_commands;
    int _numReplacedItems;
    int _bodyTruncationBytes;
    int _mimeSupport;
    ASMailMessage *_streamingMailMessage;
}




-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)handleStreamOperation:(int)arg0 forCodePage:(int)arg1 tag:(int)arg2 withParentItem:(id)arg3 withData:(char *)arg4 dataLength:(int)arg5 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)commands;
-(id)init;
-(id)replacementObjectForEmailItem:(id)arg0 ;
-(id)requestBody;
-(id)streamingMailMessage;
-(int)_mimeSupportCode;
-(int)bodyType;
-(int)commandCode;
-(int)mimeSupport;
-(void)finishWithError:(id)arg0 ;
-(void)setBodyTruncationBytes:(int)arg0 ;
-(void)setCommands:(id)arg0 ;
-(void)setMIMESupport:(int)arg0 ;
-(void)setStreamingMailMessage:(id)arg0 ;


@end


#endif