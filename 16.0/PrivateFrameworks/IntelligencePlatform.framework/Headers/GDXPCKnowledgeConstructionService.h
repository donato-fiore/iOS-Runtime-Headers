// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCKNOWLEDGECONSTRUCTIONSERVICE_H
#define GDXPCKNOWLEDGECONSTRUCTIONSERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(BOOL)checkInWithError:(*id)arg0 ;
-(BOOL)runFullPipelineWithReason:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)stopPipelineWithError:(*id)arg0 ;
-(id)init;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)locked_establishConnection;


@end


#endif