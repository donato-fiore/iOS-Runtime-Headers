// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCK2XPCCLIENT_H
#define DCK2XPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface DCK2XPCClient : NSObject {
    NSXPCConnection *connection;
}




+(id)sharedClient;
-(id)connectToService;
-(id)enableSMB:(id)arg0 error:(*id)arg1 ;
-(id)getROP:(*id)arg0 ;
-(id)passThrough:(id)arg0 keyIdentifier:(id)arg1 ;
-(id)requestBTPairing:(id)arg0 ;
-(id)setUWBConfigData:(id)arg0 ;
-(id)setUWBDebugOptions:(NSUInteger)arg0 ;
-(id)setUWBStartTimeOffsetMS:(NSUInteger)arg0 ;
-(id)suspendRanging:(id)arg0 ;
-(void)connectionResetHandler;


@end


#endif