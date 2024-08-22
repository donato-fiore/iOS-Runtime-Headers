// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMOCKURLPROTOCOL_H
#define FCMOCKURLPROTOCOL_H

@class NSURLProtocol;



@interface FCMockURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)URLForData:(id)arg0 mimeType:(id)arg1 ;
+(id)URLForData:(id)arg0 mimeType:(id)arg1 statusCode:(NSUInteger)arg2 ;
+(id)URLForError:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif