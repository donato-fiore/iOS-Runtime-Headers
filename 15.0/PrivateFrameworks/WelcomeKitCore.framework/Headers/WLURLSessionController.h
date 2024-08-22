// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLURLSESSIONCONTROLLER_H
#define WLURLSESSIONCONTROLLER_H

@class NSOperationQueue, NSString, NSURLSession;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "WLDeviceAuthentication.h"

@interface WLURLSessionController : NSObject <NSURLSessionDelegate>

 {
    WLDeviceAuthentication *_auth;
    NSOperationQueue *_delegateOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


-(id)initWithAuthentication:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif