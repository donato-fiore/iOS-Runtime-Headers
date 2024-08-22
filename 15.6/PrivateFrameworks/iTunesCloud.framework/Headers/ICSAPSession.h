// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSAPSESSION_H
#define ICSAPSESSION_H

@class NSOperationQueue, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"
#import "ICFPSAPContext.h"

@interface ICSAPSession : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}


@property (readonly, copy, nonatomic) NSURL *_certificateURL; // ivar: _certificateURL
@property (readonly, nonatomic) NSOperationQueue *_prepareFairPlayContextOperationQueue; // ivar: _prepareFairPlayContextOperationQueue
@property (readonly, copy, nonatomic) ICStoreRequestContext *_requestContext; // ivar: _requestContext
@property (retain, nonatomic, setter=_setSAPContext:) ICFPSAPContext *_sapContext; // ivar: _sapContext
@property (readonly, copy, nonatomic) NSURL *_setupURL; // ivar: _setupURL
@property (readonly, nonatomic) unsigned int sapVersion; // ivar: _sapVersion


+(id)sharedSAPSessionWithVersion:(unsigned int)arg0 URLBag:(id)arg1 requestContext:(id)arg2 ;
-(id)_initWithVersion:(unsigned int)arg0 certificateURL:(id)arg1 setupURL:(id)arg2 requestContext:(id)arg3 ;
-(void)signData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)verifySignatureData:(id)arg0 forData:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif