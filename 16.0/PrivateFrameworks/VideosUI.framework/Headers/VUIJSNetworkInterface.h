// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIJSNETWORKINTERFACE_H
#define VUIJSNETWORKINTERFACE_H

@protocol VUIJSNetworkInterface;


#import "VUIJSObject.h"

@interface VUIJSNetworkInterface : VUIJSObject <VUIJSNetworkInterface>

 {
    int _playbackReportToken;
}


@property BOOL suppressServerConfigNotifications; // ivar: _suppressServerConfigNotifications


-(NSInteger)_requestOptionsFromJSOptions:(id)arg0 ;
-(id)_createURLRequestFromJSOptionsDictionary:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 ;
-(id)makeMediaApiRequest:(id)arg0 ;
-(id)makeRequest:(id)arg0 ;
-(id)makeStoreRequest:(id)arg0 ;
-(id)makeUpNextRequest:(id)arg0 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)_enqueueNetworkOp:(id)arg0 withJSCallback:(id)arg1 ;
-(void)_handleAppLibChange:(id)arg0 ;
-(void)_handleServerConfigChange:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)dealloc;
-(void)fetchConfiguration:(BOOL)arg0 ;
-(void)invalidateConfiguration;
-(void)upNextItemsReceived:(id)arg0 ;


@end


#endif