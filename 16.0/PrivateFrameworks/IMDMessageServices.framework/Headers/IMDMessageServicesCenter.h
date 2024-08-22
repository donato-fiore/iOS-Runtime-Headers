// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMESSAGESERVICESCENTER_H
#define IMDMESSAGESERVICESCENTER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> *_connection;
}




+(id)sharedInstance;
-(BOOL)_connect;
-(BOOL)_disconnect;
-(id)init;
-(void)_disconnected;
-(void)_requestExpireStateWithGUID:(id)arg0 handler:(id)arg1 ;
-(void)_requestRoutingWithGUID:(id)arg0 chatGUID:(id)arg1 error:(unsigned int)arg2 handler:(id)arg3 ;
-(void)_requestWatchdogWithGUID:(id)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)requestExpireStateForMessageGuid:(id)arg0 completionBlock:(id)arg1 ;
-(void)requestExpireStateWithCompletion:(id)arg0 ;
-(void)requestRoutingForMessageGuid:(id)arg0 inChat:(id)arg1 error:(unsigned int)arg2 completionBlock:(id)arg3 ;
-(void)requestRoutingWithCompletion:(id)arg0 ;
-(void)requestWatchdogForMessageGuid:(id)arg0 completionBlock:(id)arg1 ;
-(void)requestWatchdogWithCompletion:(id)arg0 ;


@end


#endif