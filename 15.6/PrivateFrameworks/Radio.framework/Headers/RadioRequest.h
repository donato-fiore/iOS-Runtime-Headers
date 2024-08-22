// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RADIOREQUEST_H
#define RADIOREQUEST_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RadioRequestContext.h"

@interface RadioRequest : NSObject {
    BOOL _cachedResponse;
    NSInteger _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    CGFloat _retryInterval;
    NSInteger _status;
    NSDictionary *_unparsedResponseDictionary;
}


@property (nonatomic, getter=isAsynchronousBackgroundRequest) BOOL asynchronousBackgroundRequest; // ivar: _asynchronousBackgroundRequest
@property (readonly, nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property (readonly, nonatomic) NSInteger errorCode;
@property (copy, nonatomic) RadioRequestContext *requestContext;
@property (readonly, nonatomic) CGFloat retryInterval;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, copy, nonatomic) NSDictionary *unparsedResponseDictionary;


+(id)defaultURLCache;
+(void)loadServiceConfigurationWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)_loadRadioStoreBagWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif