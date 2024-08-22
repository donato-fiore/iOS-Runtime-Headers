// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVURLAUTHENTICATIONCHALLENGE_H
#define AVURLAUTHENTICATIONCHALLENGE_H

@class NSURLAuthenticationChallenge, NSString;
@protocol AVAssetResourceLoaderRequest;


#import "AVWeakReference.h"

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest>

 {
    AVWeakReference *_weakReference;
    NSUInteger _requestID;
}


@property (readonly, nonatomic) NSUInteger _requestID;
@property (readonly, nonatomic) *__CFDictionary _requestInfo; // ivar: _requestInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(id)_weakReference;
-(id)init;
-(id)initWithAuthenticationChallenge:(id)arg0 sender:(id)arg1 ;
-(id)initWithAuthenticationChallenge:(id)arg0 sender:(id)arg1 requestInfo:(struct __CFDictionary *)arg2 requestID:(NSUInteger)arg3 ;
-(id)initWithProtectionSpace:(id)arg0 proposedCredential:(id)arg1 previousFailureCount:(NSInteger)arg2 failureResponse:(id)arg3 error:(id)arg4 sender:(id)arg5 ;
-(void)_performCancellationByClient;
-(void)dealloc;


@end


#endif