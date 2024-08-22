// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef YQLREQUEST_H
#define YQLREQUEST_H

@class NSURLSession, NSURLSessionTask, NSURLRequest, NSMutableData, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface YQLRequest : NSObject <NSURLSessionDataDelegate>

 {
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg0 ;
+(void)saveDebugString;
+(void)setShouldGenerateOfflineData:(BOOL)arg0 ;
-(BOOL)isLoading;
-(id)YQLCountryCode;
-(id)YQLLanguageCode;
-(id)_yahooDoppelganger_taskForRequest:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(id)taskForRequest:(id)arg0 delegate:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_createDefaultSession;
-(void)_loadDefaultSessionIfNeeded;
-(void)cancel;
-(void)cancelAndInvalidate;
-(void)dealloc;
-(void)didParseData;
-(void)failToParseWithData:(id)arg0 ;
-(void)failToParseWithDataSeriesDictionary:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif