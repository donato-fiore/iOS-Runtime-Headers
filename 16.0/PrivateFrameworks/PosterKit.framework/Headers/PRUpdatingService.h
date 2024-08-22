// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUPDATINGSERVICE_H
#define PRUPDATINGSERVICE_H

@class _EXExtensionIdentity, _EXHostConfiguration, _EXExtensionProcess, RBSTarget, NSXPCConnection, BSAuditToken, NSError, NSHashTable, NSString, RBSProcessIdentity;
@protocol PRUpdatingService_toExtension, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PRUpdatingService : NSObject <PRUpdatingService_toExtension, BSInvalidatable>

 {
    _EXExtensionIdentity *_extension;
    _EXHostConfiguration *_hostConfig;
    _EXExtensionProcess *_process;
    RBSTarget *_target;
    NSXPCConnection *_connection;
    BSAuditToken *_auditToken;
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
    NSError *_lock_invalidationError;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *invalidationError;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly) Class superclass;
@property (readonly, nonatomic) RBSTarget *target;


+(id)interfaceToExtension;
+(id)updatingServiceWithExtension:(id)arg0 error:(*id)arg1 ;
-(BOOL)_lock_setupConnection:(*id)arg0 error:(*id)arg1 ;
-(id)_initWithExtension:(id)arg0 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_lock_invalidate;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)updateDescriptors:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif