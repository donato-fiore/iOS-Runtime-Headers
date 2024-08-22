// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPREALTIMEANALYSISSERVICE_H
#define VCPREALTIMEANALYSISSERVICE_H

@class NSLock, NSXPCConnection;
@protocol VCPRealTimeAnalysisClientProtocol;

#import <Foundation/Foundation.h>


@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol>

 {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}




+(id)analysisService;
+(id)errorWithStatus:(int)arg0 andDescription:(id)arg1 ;
-(id)connection;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)requestAnalysis:(NSUInteger)arg0 ofPixelBuffer:(struct __CVBuffer *)arg1 withProperties:(id)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif