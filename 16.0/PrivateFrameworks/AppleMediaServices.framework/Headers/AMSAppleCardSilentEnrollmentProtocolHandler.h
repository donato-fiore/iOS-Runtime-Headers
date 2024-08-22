// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSAPPLECARDSILENTENROLLMENTPROTOCOLHANDLER_H
#define AMSAPPLECARDSILENTENROLLMENTPROTOCOLHANDLER_H

@class NSString;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate;


#import "AMSURLProtocolHandler.h"

@interface AMSAppleCardSilentEnrollmentProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif