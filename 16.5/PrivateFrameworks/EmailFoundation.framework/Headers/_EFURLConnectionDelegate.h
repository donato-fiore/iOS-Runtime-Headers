// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFURLCONNECTIONDELEGATE_H
#define _EFURLCONNECTIONDELEGATE_H

@class NSMutableData, NSString, NSURLResponse;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "EFPromise.h"
#import "EFFuture.h"

@interface _EFURLConnectionDelegate : NSObject <NSURLSessionDelegate>

 {
    NSMutableData *_responseBody;
    EFPromise *_promise;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFFuture *future;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif