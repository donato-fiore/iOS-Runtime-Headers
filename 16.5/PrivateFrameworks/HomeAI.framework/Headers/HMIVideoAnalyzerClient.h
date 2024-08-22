// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERCLIENT_H
#define HMIVIDEOANALYZERCLIENT_H

@class VCPHomeKitAnalysisSession;
@protocol OS_dispatch_queue;


#import "HMIVideoAnalyzer.h"

@interface HMIVideoAnalyzerClient : HMIVideoAnalyzer {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property BOOL hasFailed; // ivar: _hasFailed
@property (retain) VCPHomeKitAnalysisSession *session; // ivar: _session
@property BOOL sessionCreationAttempted; // ivar: _sessionCreationAttempted


-(id)ensureSession;
-(id)initWithConfiguration:(id)arg0 identifier:(id)arg1 ;
-(void)_didFailWithError:(id)arg0 ;
-(void)_sendMessage:(SEL)arg0 arguments:(id)arg1 asynchronous:(BOOL)arg2 ;
-(void)_sendMessage:(SEL)arg0 arguments:(id)arg1 asynchronous:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_sendMessageWithOptions:(id)arg0 asynchronous:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushAsync;
-(void)handleAssetData:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleMessageWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)setAnalysisFPS:(CGFloat)arg0 ;
-(void)setEncode:(BOOL)arg0 ;
-(void)setMonitored:(BOOL)arg0 ;


@end


#endif