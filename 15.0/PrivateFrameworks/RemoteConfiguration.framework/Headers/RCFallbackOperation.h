// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCFALLBACKOPERATION_H
#define RCFALLBACKOPERATION_H

@class NSURL, NSString;
@protocol OS_dispatch_queue;


#import "RCOperation.h"
#import "RCConfigurationResource.h"

@interface RCFallbackOperation : RCOperation

@property (retain, nonatomic) RCConfigurationResource *cachedConfigurationResource; // ivar: _cachedConfigurationResource
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) id *configurationCompletionHandler; // ivar: _configurationCompletionHandler
@property (retain, nonatomic) RCConfigurationResource *configurationResource; // ivar: _configurationResource
@property (nonatomic) BOOL enableExtraLogs; // ivar: _enableExtraLogs
@property (nonatomic) NSUInteger environment; // ivar: _environment
@property (retain, nonatomic) NSURL *fallbackURL; // ivar: _fallbackURL
@property (retain, nonatomic) NSString *requestKey; // ivar: _requestKey


-(BOOL)validateOperation;
-(void)_fetchConfigurationWithURL:(id)arg0 requestKey:(id)arg1 enableExtraLogs:(BOOL)arg2 ;
-(void)_parseFallbackResponse:(id)arg0 fallbackURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(BOOL)arg3 maxAge:(id)arg4 etag:(id)arg5 lastModifiedString:(id)arg6 completion:(id)arg7 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif