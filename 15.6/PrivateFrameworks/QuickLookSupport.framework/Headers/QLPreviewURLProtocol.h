// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWURLPROTOCOL_H
#define QLPREVIEWURLPROTOCOL_H

@class NSURLProtocol;



@interface QLPreviewURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)isSafeRequest:(id)arg0 ;
+(BOOL)isSafeURL:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)_errorForAbort;
+(id)_errorForCancel;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)errorForURL:(id)arg0 ;
+(id)mimeTypeForAttachmentURL:(id)arg0 ;
+(id)newURLWithContentID:(id)arg0 baseURL:(id)arg1 ;
+(id)newUniqueURLWithName:(id)arg0 ;
+(id)protocolScheme;
+(void)_dumpPendingProtocols;
+(void)_unregisterURL:(id)arg0 ;
+(void)appendData:(id)arg0 forURL:(id)arg1 lastChunk:(BOOL)arg2 ;
+(void)cancelLoadingProtocol:(id)arg0 ;
+(void)initialize;
+(void)registerPreview:(id)arg0 forPreviewURL:(id)arg1 ;
+(void)registerURL:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
+(void)setError:(id)arg0 forURL:(id)arg1 ;
+(void)startLoadingProtocol:(id)arg0 ;
+(void)stopLoadingProtocol:(id)arg0 ;
+(void)stopLoadingProtocol:(id)arg0 isCancel:(BOOL)arg1 ;
+(void)unregisterURLs:(id)arg0 andPreviewURL:(id)arg1 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif