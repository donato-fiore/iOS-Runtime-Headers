// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDLONGLIVEDOPERATIONPERSISTEDCALLBACKPROXY_H
#define CKDLONGLIVEDOPERATIONPERSISTEDCALLBACKPROXY_H

@class Protocol, NSString;
@protocol CKOperationCallbacks;

#import <Foundation/Foundation.h>

#import "CKDOperationInfoCache.h"

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks>



@property (retain, nonatomic) Protocol *callbackProtocol; // ivar: _callbackProtocol
@property (nonatomic) SEL completionSelector; // ivar: _completionSelector
@property (copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache; // ivar: _operationInfoCache


-(id)initWithOperationID:(id)arg0 callbackProtocol:(id)arg1 completionSelector:(SEL)arg2 operationInfoCache:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif