// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SSBDATABASEUPDATEFETCHDATASESSIONHANDLER_H
#define _SSBDATABASEUPDATEFETCHDATASESSIONHANDLER_H

@class NSError, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface _SSBDatabaseUpdateFetchDataSessionHandler : NSObject <NSURLSessionDataDelegate>

 {
    unique_ptr<Backend::Google::FetchThreatListUpdatesResponseParser, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> _parser;
    shared_ptr<ByteProvider> _byteProvider;
    NSUInteger _receivedBytes;
    NSError *_error;
    int _provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionHandler:(*void)arg0 provider:(int)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif