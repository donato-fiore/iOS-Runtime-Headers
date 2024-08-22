// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPROVIDERXPCMESSENGER_H
#define NSFILEPROVIDERXPCMESSENGER_H

@protocol NSFileProviderXPCInterface, NSFileProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSFileProviderProxy.h"
#import "NSString.h"

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface>

 {
    id<NSFileProvider> *_fileProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderProxy *_fileProviderProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFileProvider:(id)arg0 queue:(id)arg1 ;
-(id)initWithFileProviderProxy:(id)arg0 ;
-(void)_makeProvider:(id)arg0 provideItemAtURL:(id)arg1 options:(NSUInteger)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4 kernelInfo:(id)arg5 completionHandler:(id)arg6 ;
-(void)cancelProvidingItemAtURL:(id)arg0 forClaimWithID:(id)arg1 ;
-(void)checkInProviderWithReply:(id)arg0 ;
-(void)collectDebuggingInformationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeEndOfWriteAtURL:(id)arg0 forClaimWithID:(id)arg1 fromProcessWithIdentifier:(int)arg2 ;
-(void)observePresentationChangeOfKind:(id)arg0 forPresenterWithID:(id)arg1 fromProcessWithIdentifier:(int)arg2 observedUbiquityAttributes:(id)arg3 url:(id)arg4 newURL:(id)arg5 ;
-(void)provideItemAtURL:(id)arg0 forClaimWithID:(id)arg1 madeByClientWithProcessIdentifier:(int)arg2 options:(NSUInteger)arg3 kernelInfo:(id)arg4 completionHandler:(id)arg5 ;
-(void)providePhysicalItemForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif