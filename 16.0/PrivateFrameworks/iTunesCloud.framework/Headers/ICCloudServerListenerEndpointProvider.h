// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDSERVERLISTENERENDPOINTPROVIDER_H
#define ICCLOUDSERVERLISTENERENDPOINTPROVIDER_H

@class NSXPCConnection, NSString;
@protocol ICCloudServerListenerEndpointProviding;

#import <Foundation/Foundation.h>


@interface ICCloudServerListenerEndpointProvider : NSObject <ICCloudServerListenerEndpointProviding>

 {
    NSXPCConnection *_listenerEndpointProviderConnection;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_listenerEndpointProviderConnection;
-(id)init;
-(id)listenerEndpointForService:(NSInteger)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)notifyDeviceSetupFinishedWithCompletion:(id)arg0 ;


@end


#endif