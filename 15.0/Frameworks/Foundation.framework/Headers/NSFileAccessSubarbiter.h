// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEACCESSSUBARBITER_H
#define NSFILEACCESSSUBARBITER_H

@protocol NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSFileAccessArbiter.h"
#import "NSString.h"

@interface NSFileAccessSubarbiter : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSFileAccessArbiter *_realSubarbiter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)grantAccessClaim:(id)arg0 synchronouslyIfPossible:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg0 listener:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg0 ;
-(void)dealloc;
-(void)grantSubarbitrationClaim:(id)arg0 withServer:(id)arg1 ;
-(void)revokeAccessClaimForID:(id)arg0 ;
-(void)revokeSubarbitrationClaimForID:(id)arg0 ;
-(void)stopArbitrating;
-(void)tiePresenterForID:(id)arg0 toItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeSharingOfItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeUbiquityAttributes:(id)arg1 ofItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg0 didChangeUbiquityOfItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didDisconnectItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didMakeItemDisappearAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didMoveItemAtURL:(id)arg1 toURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg0 didReconnectItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4 ;


@end


#endif