// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYLOGSESSION_H
#define TRANSPARENCYLOGSESSION_H

@class NSURLSession;
@protocol OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "TransparencyAuthentication.h"
#import "TransparencyLogSessionDelegate.h"

@interface TransparencyLogSession : NSObject

@property (retain) TransparencyAuthentication *auth; // ivar: _auth
@property (retain) NSURLSession *backgroundSession; // ivar: _backgroundSession
@property (retain) NSObject<OS_dispatch_workloop> *callbackWorkloop; // ivar: _callbackWorkloop
@property (retain) TransparencyLogSessionDelegate *delegate; // ivar: _delegate
@property NSUInteger fetchCount; // ivar: _fetchCount
@property (retain) NSURLSession *foregroundSession; // ivar: _foregroundSession
@property (retain) NSObject<OS_dispatch_workloop> *networkingWorkloop; // ivar: _networkingWorkloop


+(id)createErrorFromURLResonse:(id)arg0 data:(id)arg1 allowEmptyData:(BOOL)arg2 error:(id)arg3 ;
+(void)dispatchToQueue:(id)arg0 block:(id)arg1 ;
-(BOOL)fetch:(id)arg0 completionHandler:(id)arg1 ;
-(id)createAuthenticatedBackgroundSession:(id)arg0 delegateQueue:(id)arg1 ;
-(id)createAuthenticatedForegroundSession;
-(id)initWithWorkloop:(id)arg0 sessionDelegate:(id)arg1 ;
-(void)cancelDownloadId:(id)arg0 ;
-(void)download:(id)arg0 retry:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif