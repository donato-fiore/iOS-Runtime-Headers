// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSASYNCHRONOUSREQUESTHELPER_H
#define WBSASYNCHRONOUSREQUESTHELPER_H

@class NSOperationQueue, NSURLConnection, NSURLResponse, NSMutableData, NSString;
@protocol NSURLConnectionDelegate, WBSAsynchronousRequest;

#import <Foundation/Foundation.h>


@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest>

 {
    NSOperationQueue *_queue;
    id *_handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
    id *_lifetimeExtender;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)sendRequest;


@end


#endif