// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)_makeProvider:(id)arg0 provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancelProvidingItemAtURL:(id)arg0 forClaimWithID:(id)arg1 ;
-(void)checkInProviderWithReply:(id)arg0 ;
-(void)collectDebuggingInformationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeEndOfWriteAtURL:(id)arg0 forClaimWithID:(id)arg1 fromProcessWithIdentifier:(int)arg2 ;
-(void)observePresentationChangeOfKind:(id)arg0 forPresenterOfURL:(id)arg1 withInfo:(id)arg2 ;
-(void)provideItemAtURL:(id)arg0 withInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)providePhysicalItemForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif