// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLCONNECTIONINTERNAL_H
#define NSURLCONNECTIONINTERNAL_H

@class NSOperationQueue, NSURL, NSDictionary, NSString;
@protocol NSURLConnectionRequired, NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>

#import "NSURLConnection.h"
#import "NSURLRequest.h"

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender>

 {
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id *_delegate;
    NSDictionary *_connectionProperties;
    BOOL _connectionActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_timingData;
-(id)initWithInfo:(struct InternalInit *)arg0 ;
-(void)_invalidate;
-(void)_setDelegateQueue:(id)arg0 ;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)invokeForDelegate:(id)arg0 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif