// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PACURLSESSIONDELEGATE_H
#define PACURLSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface PACURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

 {
    NSString *_username;
    NSString *_password;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;


@end


#endif