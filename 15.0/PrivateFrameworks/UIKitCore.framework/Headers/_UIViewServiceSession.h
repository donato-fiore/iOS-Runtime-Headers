// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICESESSION_H
#define _UIVIEWSERVICESESSION_H

@class NSXPCConnection, NSString;
@protocol NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIViewServiceDeputyManager.h"
#import "_UIAsyncInvocation.h"
#import "_UIViewServiceSessionManager.h"

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) _UIViewServiceSessionManager *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (copy, nonatomic) id *terminationHandler; // ivar: _terminationHandler


+(id)sessionWithConnection:(id)arg0 manager:(id)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isExtensionServiceViewControllerOperator:(id)arg0 ;
-(BOOL)requiresExtensionContextForViewControllerOperator:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)containingViewControllerClassNameForViewControllerOperator:(id)arg0 ;
-(id)mainStoryboardNameForViewControllerOperator:(id)arg0 ;
-(id)retain;
-(id)viewControllerClassNameForViewControllerOperator:(id)arg0 ;
-(int)__automatic_invalidation_logic;
-(void)_invalidateUnconditionallyThen:(id)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)deputy:(id)arg0 didFailWithError:(id)arg1 ;
-(void)deputyManager:(id)arg0 didUpdateExportedInterface:(id)arg1 ;
-(void)registerDeputyClass:(Class)arg0 withConnectionHandler:(id)arg1 ;
-(void)release;
-(void)unregisterDeputyClass:(Class)arg0 ;
-(void)viewControllerOperator:(id)arg0 didCreateServiceViewController:(id)arg1 contextToken:(id)arg2 ;
-(void)viewControllerOperator:(id)arg0 didCreateServiceViewControllerOfClass:(Class)arg1 ;


@end


#endif