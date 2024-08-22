// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOADRESOURCEOPERATION_H
#define SKUILOADRESOURCEOPERATION_H

@class NSOperation, NSLock;


#import "SKUIClientContext.h"
#import "SKUIResourceRequest.h"

@interface SKUILoadResourceOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id *_outputBlock;
    SKUIResourceRequest *_request;
}


@property (nonatomic, setter=_setLoadReason:) NSInteger _loadReason; // ivar: __loadReason
@property (retain) SKUIClientContext *clientContext;
@property (copy) id *outputBlock;
@property (readonly, copy) SKUIResourceRequest *resourceRequest;


-(id)_initSKUILoadResourceOperation;
-(id)init;
-(id)initWithResourceRequest:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif