// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSEACTIVITYHANDOFFOPERATION_H
#define MFCOMPOSEACTIVITYHANDOFFOPERATION_H

@class NSOperation, NSInputStream, NSOutputStream, NSString, NSData;
@protocol NSStreamDelegate, OS_dispatch_queue, MFComposeActivityHandoffOperationDelegate;



@interface MFComposeActivityHandoffOperation : NSOperation <NSStreamDelegate>

 {
    BOOL _finished;
    BOOL _executing;
    NSObject<OS_dispatch_queue> *_streamHandlerQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSUInteger _draftDataByteIndex;
    BOOL _doneWithInputStream;
    BOOL _doneWithOutputStream;
}


@property (readonly, nonatomic) NSUInteger bytesExpected; // ivar: _draftExpectedSize
@property (readonly, nonatomic) NSUInteger bytesReceived; // ivar: _draftBytesReceived
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFComposeActivityHandoffOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *draftData; // ivar: _draftData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transmissionType; // ivar: _transmissionType


+(id)receivingOperationWithInputStream:(id)arg0 outputStream:(id)arg1 ;
+(id)sendingOperationWithDraftData:(id)arg0 inputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)_checkInHandoffStream:(id)arg0 ;
-(void)_commonHandoffStreamInitializationWithStream:(id)arg0 ;
-(void)_complete;
-(void)_didFinishTransferringHandoffPayload;
-(void)_failedToTransferHandoffPayload;
-(void)_finishReceivingHandoffDataAndCloseStream;
-(void)_handleErrorCode:(NSUInteger)arg0 logString:(id)arg1 ;
-(void)_receivingDataStream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)_receivingMessageStream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)_sendingDataStream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)_sendingMessageStream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)_setExecuting:(BOOL)arg0 ;
-(void)_setFinished:(BOOL)arg0 ;
-(void)_startHandoffStreams;
-(void)dealloc;
-(void)start;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif