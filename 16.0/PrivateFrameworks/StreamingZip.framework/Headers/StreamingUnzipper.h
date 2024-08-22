// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STREAMINGUNZIPPER_H
#define STREAMINGUNZIPPER_H

@class NSXPCConnection;
@protocol StreamingUnzipProtocol, OS_os_transaction, OS_dispatch_queue, StreamingUnzipDelegateProtocol;

#import <Foundation/Foundation.h>

#import "StreamingUnzipState.h"

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>

 {
    NSInteger _sandboxToken;
    *void _decompressionOutputBuffer;
    StreamingUnzipState *_currentState;
    NSObject<OS_os_transaction> *_sessionTransaction;
    int _activeDelegateMethods;
    CGFloat _lastExtractionProgressSent;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue; // ivar: inProcessDelegateQueue
@property (weak, nonatomic) NSObject<StreamingUnzipDelegateProtocol> *inProcessExtractorDelegate; // ivar: inProcessExtractorDelegate
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: xpcConnection


-(id)_beginNonStreamablePassthroughWithRemainingBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initForClient:(id)arg0 ;
-(void)_extractionEnteredPassThroughMode;
-(void)_sendExtractionCompleteAtArchivePath:(id)arg0 ;
-(void)_sendExtractionProgress:(CGFloat)arg0 ;
-(void)_setErrorState;
-(void)_supplyBytes:(char *)arg0 length:(NSUInteger)arg1 withReply:(id)arg2 ;
-(void)dealloc;
-(void)finishStreamWithReply:(id)arg0 ;
-(void)setActiveDelegateMethods:(int)arg0 ;
-(void)setupUnzipperWithOutputPath:(id)arg0 sandboxExtensionToken:(char *)arg1 options:(id)arg2 withReply:(id)arg3 ;
-(void)supplyBytes:(id)arg0 withReply:(id)arg1 ;
-(void)suspendStreamWithReply:(id)arg0 ;
-(void)terminateStreamWithReply:(id)arg0 ;


@end


#endif