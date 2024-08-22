// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSASERVICESCLIENT_H
#define OSASERVICESCLIENT_H

@class NSXPCConnection;
@protocol OTAAgentServices;

#import <Foundation/Foundation.h>


@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> *_synchRemoteObjectProxy;
}




+(id)sharedClient;
-(BOOL)deletePreference:(id)arg0 forUser:(id)arg1 inDomain:(id)arg2 ;
-(BOOL)setPreference:(id)arg0 forUser:(id)arg1 inDomain:(id)arg2 toValue:(*void)arg3 ;
-(id)awdKey;
-(id)crashreporterKey;
-(id)init;
-(id)queryKey:(struct __CFString *)arg0 ;
-(unsigned int)uidForUser:(id)arg0 ;
-(void)dealloc;


@end


#endif