// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNLAUNCHSERVICESREMOTEADAPTER_H
#define CNLAUNCHSERVICESREMOTEADAPTER_H

@protocol CNLaunchServicesAdapter;

#import <Foundation/Foundation.h>


@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>





+(id)createConnectionWithInterface:(id)arg0 ;
+(id)launchServicesAdapterInterface;
+(id)os_log;
-(void)applicationForBundleIdentifier:(id)arg0 withReply:(id)arg1 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg0 withReply:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg0 withReply:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg0 withOptions:(id)arg1 withReply:(id)arg2 ;
-(void)openUserActivityData:(id)arg0 inApplication:(id)arg1 withReply:(id)arg2 ;


@end


#endif