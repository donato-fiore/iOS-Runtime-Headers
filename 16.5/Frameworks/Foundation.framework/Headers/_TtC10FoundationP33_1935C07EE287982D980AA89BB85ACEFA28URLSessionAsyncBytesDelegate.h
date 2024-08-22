// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FOUNDATIONP33_1935C07EE287982D980AA89BB85ACEFA28URLSESSIONASYNCBYTESDELEGATE_H
#define _TTC10FOUNDATIONP33_1935C07EE287982D980AA89BB85ACEFA28URLSESSIONASYNCBYTESDELEGATE_H

@protocol NSURLSessionDataDelegatePrivate;

#import <Foundation/Foundation.h>


@interface _TtC10FoundationP33_1935C07EE287982D980AA89BB85ACEFA28URLSessionAsyncBytesDelegate : NSObject <NSURLSessionDataDelegatePrivate>

 {
    ? lock;
    ? state;
}




-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 _didReceiveData:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)dealloc;


@end


#endif