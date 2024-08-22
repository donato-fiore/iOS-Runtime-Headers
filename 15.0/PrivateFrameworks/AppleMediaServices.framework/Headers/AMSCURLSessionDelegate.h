// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCURLSESSIONDELEGATE_H
#define AMSCURLSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface AMSCURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *void provider; // ivar: _provider
@property (readonly) Class superclass;


-(id)initWithProvider:(*void)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif