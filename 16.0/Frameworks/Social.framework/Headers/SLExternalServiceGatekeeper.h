// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLEXTERNALSERVICEGATEKEEPER_H
#define SLEXTERNALSERVICEGATEKEEPER_H

@class NSString, NSURL;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface SLExternalServiceGatekeeper : NSObject <NSURLSessionTaskDelegate>

 {
    NSString *_redirectHost;
    NSURL *_url;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_gatekeepingIsNotAvailable;
-(id)initForPermissionToAccessURL:(id)arg0 fromURLString:(id)arg1 completion:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_completeWithURLToLoad:(id)arg0 error:(id)arg1 ;


@end


#endif