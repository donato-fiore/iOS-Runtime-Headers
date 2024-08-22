// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECURECHANNELSERVICEPROXY_H
#define SECURECHANNELSERVICEPROXY_H

@class NSXPCConnection;
@protocol SecureChannelService;

#import <Foundation/Foundation.h>


@interface SecureChannelServiceProxy : NSObject <SecureChannelService>

 {
    NSXPCConnection *_connectionToService;
    NSObject<SecureChannelService> *_remoteObject;
}




+(id)sharedInstance;
-(id)init;
-(void)actionForURL:(id)arg0 completion:(id)arg1 ;
-(void)runApproverFlowForURL:(id)arg0 completion:(id)arg1 ;


@end


#endif