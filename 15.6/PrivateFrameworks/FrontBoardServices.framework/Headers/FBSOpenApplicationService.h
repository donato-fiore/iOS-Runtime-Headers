// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSOPENAPPLICATIONSERVICE_H
#define FBSOPENAPPLICATIONSERVICE_H

@class BSServiceConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBSOpenApplicationService : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}




+(BOOL)currentProcessServicesDefaultShellEndpoint;
+(id)new;
+(id)serviceName;
+(id)serviceWithDefaultShellEndpoint;
+(id)serviceWithEndpoint:(id)arg0 ;
-(BOOL)canOpenApplication:(id)arg0 reason:(*NSInteger)arg1 ;
-(id)_initWithEndpoint:(id)arg0 ;
-(id)_remoteTarget;
-(id)init;
-(void)_openApplication:(id)arg0 withOptions:(id)arg1 clientHandle:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)openApplication:(id)arg0 withOptions:(id)arg1 clientHandle:(id)arg2 completion:(id)arg3 ;
-(void)openApplication:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;


@end


#endif