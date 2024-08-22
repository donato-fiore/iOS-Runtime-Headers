// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPHOMEKITANALYSISSERVICE_H
#define VCPHOMEKITANALYSISSERVICE_H

@class NSXPCConnection, NSMutableDictionary;
@protocol VCPHomeKitAnalysisClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPHomeKitAnalysisService : NSObject <VCPHomeKitAnalysisClientProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}




+(id)analysisService;
-(id)connection;
-(id)init;
// -(int)requestAnalysis:(NSUInteger)arg0 ofAssetData:(id)arg1 withProperties:(id)arg2 progressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
// -(int)requestAnalysis:(NSUInteger)arg0 ofAssetSurface:(id)arg1 withProperties:(id)arg2 progressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
-(int)requestIdentificationForFaceCrop:(id)arg0 withOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
-(int)requestResidentMaintenanceWithOptions:(id)arg0 andCompletionHandler:(id)arg1 ;
-(void)cancelAllRequests;
-(void)cancelRequest:(int)arg0 ;
-(void)reportProgress:(CGFloat)arg0 forRequest:(int)arg1 ;


@end


#endif