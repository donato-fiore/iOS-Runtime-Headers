// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISAPPLICATIONSUPPORTCLIENT_H
#define UISAPPLICATIONSUPPORTCLIENT_H

@class BSServiceConnection, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UISApplicationSupportClient : NSObject <BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_invalidated;
    BSServiceConnection *_queue_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_applicationSupportServiceEndpoint;
-(id)_remoteTarget;
-(id)applicationInitializationContextWithParameters:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg0 animationType:(NSUInteger)arg1 destroySessions:(BOOL)arg2 completion:(id)arg3 ;
-(void)invalidate;
-(void)requestPasscodeUnlockUIWithCompletion:(id)arg0 ;


@end


#endif