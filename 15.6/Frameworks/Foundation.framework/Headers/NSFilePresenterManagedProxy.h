// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPRESENTERMANAGEDPROXY_H
#define NSFILEPRESENTERMANAGEDPROXY_H

@protocol NSXPCProxyCreating, NSFilePresenterXPCInterface><NSXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "NSFileAccessProcessManager.h"

@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating>

 {
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_xpcProxy;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_nonboostingXPCProxy;
}


@property (copy) id *errorHandler; // ivar: _errorHandler
@property NSUInteger filePresenterResponses; // ivar: _filePresenterResponses
@property (retain) NSFileAccessProcessManager *processManager; // ivar: _processManager


-(BOOL)_presenterRespondsToSelector:(SEL)arg0 ;
-(id)initWithXPCProxy:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
// -(void)_safelySendMessageWithSelector:(SEL)arg0 withErrorCompletionHandler:(id)arg1 sender:(unk)arg2  ;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)reacquireFromWritingClaimForID:(id)arg0 completionHandler:(id)arg1 ;
-(void)relinquishToReadingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 completionHandler:(id)arg3 ;
-(void)relinquishToWritingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 subitemURL:(id)arg3 completionHandler:(id)arg4 ;
-(void)saveChangesWithCompletionHandler:(id)arg0 ;


@end


#endif