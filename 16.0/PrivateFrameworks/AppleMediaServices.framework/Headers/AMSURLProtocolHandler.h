// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSURLPROTOCOLHANDLER_H
#define AMSURLPROTOCOLHANDLER_H

@class NSString;
@protocol AMSURLHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"
#import "AMSSigningSecurityService.h"

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // ivar: _metricsQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue; // ivar: _responsePingQueue
@property (weak, nonatomic) AMSURLSession *session; // ivar: session
@property (readonly, nonatomic) AMSSigningSecurityService *signingService; // ivar: _signingService
@property (readonly) Class superclass;


+(CGFloat)_randomDouble;
+(CGFloat)reversePushSamplingPercentageForTask:(id)arg0 ;
-(BOOL)_URLIsTrustedFromRequest:(id)arg0 bag:(id)arg1 ;
-(BOOL)_shouldEnableReversePushForTask:(id)arg0 ;
-(id)decodeData:(id)arg0 task:(id)arg1 error:(*id)arg2 ;
-(id)decodeMutableData:(id)arg0 task:(id)arg1 error:(*id)arg2 ;
-(id)handleCompletionWithTask:(id)arg0 metrics:(id)arg1 decodedObject:(id)arg2 ;
-(id)handleResponse:(id)arg0 task:(id)arg1 ;
-(id)init;
-(void)_pingURL:(id)arg0 session:(id)arg1 bag:(id)arg2 ;
-(void)_setResponseCookiesFromResponse:(id)arg0 taskInfo:(id)arg1 ;
-(void)didCreateTask:(id)arg0 fromRequest:(id)arg1 error:(*id)arg2 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;
-(void)reportMetricsForContext:(id)arg0 ;


@end


#endif