// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSFPMOUNTCLIENT_H
#define LIVEFSFPMOUNTCLIENT_H

@class LiveFSMountClient;



@interface LiveFSFPMountClient : LiveFSMountClient



+(id)locallyBuildFPDomain:(id)arg0 displayName:(id)arg1 provider:(id)arg2 how:(int)arg3 ;
+(id)locallyBuiltDomainStorageSuffix;
+(id)locallyDestroyFPDomain:(id)arg0 provider:(id)arg1 ;
+(id)newClientForProvider:(id)arg0 ;
-(id)fixupConnectionFor:(id)arg0 ;


@end


#endif