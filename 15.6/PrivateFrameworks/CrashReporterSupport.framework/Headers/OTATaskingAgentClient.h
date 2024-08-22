// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTATASKINGAGENTCLIENT_H
#define OTATASKINGAGENTCLIENT_H

@class NSXPCConnection;
@protocol OTATaskingAgent;

#import <Foundation/Foundation.h>


@interface OTATaskingAgentClient : NSObject {
    NSXPCConnection *_connection;
    id<OTATaskingAgent> *_synchRemoteObjectProxy;
}




+(id)sharedClient;
-(BOOL)deletePreference:(id)arg0 forUser:(id)arg1 inDomain:(id)arg2 ;
-(BOOL)setPreference:(id)arg0 forUser:(id)arg1 inDomain:(id)arg2 toValue:(*void)arg3 ;
-(id)awdKey;
-(id)crashreporterKey;
-(id)init;
-(unsigned int)uidForUser:(id)arg0 ;


@end


#endif