// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPHOMEKITANALYSISSESSION_H
#define VCPHOMEKITANALYSISSESSION_H

@class NSXPCConnection;
@protocol VCPHomeKitAnalysisSessionClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CF<const opaqueCMFormatDescription *> _formatDescription;
    id *_resultsHandler;
    id *_interruptionHander;
}




+(id)sessionWithProperties:(id)arg0 andResultsHandler:(id)arg1 ;
// +(id)sessionWithProperties:(id)arg0 withResultsHandler:(id)arg1 andInterruptionHandler:(unk)arg2  ;
-(id)connection;
// -(id)initWithProperties:(id)arg0 withResultsHandler:(id)arg1 andInterruptionHandler:(unk)arg2  ;
-(void)invalidate;
-(void)processMessageWithOptions:(id)arg0 andCompletionHandler:(id)arg1 ;
-(void)processResults:(id)arg0 withReply:(id)arg1 ;
-(void)processVideoFragmentAssetData:(id)arg0 withOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
-(void)processVideoFragmentAssetData:(id)arg0 withOptions:(id)arg1 andErrorHandler:(id)arg2 ;


@end


#endif