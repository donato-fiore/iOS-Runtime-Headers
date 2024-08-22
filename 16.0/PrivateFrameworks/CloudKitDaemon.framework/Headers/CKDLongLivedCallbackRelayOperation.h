// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDLONGLIVEDCALLBACKRELAYOPERATION_H
#define CKDLONGLIVEDCALLBACKRELAYOPERATION_H

@class NSString;
@protocol CKDOperationInfoDelegate;


#import "CKDOperation.h"

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(BOOL)isLongLivedCallbackRelayOperation;
-(BOOL)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)operationWithID:(id)arg0 receivedCallback:(id)arg1 ;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg0 ;


@end


#endif