// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SSBDATABASEUPDATEFETCHDATASESSIONHANDLER_H
#define _SSBDATABASEUPDATEFETCHDATASESSIONHANDLER_H

@class NSURLResponse, NSError, NSMutableData, NSURL, NSFileHandle, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface _SSBDatabaseUpdateFetchDataSessionHandler : NSObject <NSURLSessionDataDelegate>

 {
    NSURLResponse *_response;
    NSError *_error;
    NSMutableData *_data;
    NSURL *_tempFileURL;
    NSFileHandle *_tempFileHandle;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionHandler:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)dealloc;


@end


#endif