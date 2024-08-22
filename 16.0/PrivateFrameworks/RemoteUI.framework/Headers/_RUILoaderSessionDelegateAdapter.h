// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RUILOADERSESSIONDELEGATEADAPTER_H
#define _RUILOADERSESSIONDELEGATEADAPTER_H

@class NSString;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSURLSessionTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif