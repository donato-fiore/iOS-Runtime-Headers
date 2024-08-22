// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTUVRENDERINGSERVICE_H
#define DTUVRENDERINGSERVICE_H

@class DTXService, DTXConnection;



@interface DTUVRenderingService : DTXService {
    DTXConnection *_connection;
}




+(void)registerCapabilities:(id)arg0 ;
-(BOOL)_launchCLIFromPath:(id)arg0 message:(id)arg1 arguments:(id)arg2 environment:(id)arg3 error:(*id)arg4 ;
-(BOOL)processCommand:(id)arg0 fromMessage:(id)arg1 error:(*id)arg2 ;
-(BOOL)processConnectToPreviewHostFromMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)processForwardMessageFromMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)processMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)processStartCLIFromMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithChannel:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;


@end


#endif