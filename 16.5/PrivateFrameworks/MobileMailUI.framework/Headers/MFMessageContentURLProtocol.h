// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGECONTENTURLPROTOCOL_H
#define MFMESSAGECONTENTURLPROTOCOL_H

@class NSURLProtocol, MFMessageLoadingContext, EFPromise, EFCancelationToken;



@interface MFMessageContentURLProtocol : NSURLProtocol

@property (readonly) MFMessageLoadingContext *loadingContext; // ivar: _loadingContext
@property (retain, nonatomic) EFPromise *promise; // ivar: _promise
@property (readonly) EFCancelationToken *token; // ivar: _token


+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)URLForLoadingContext:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)loadingContextForURL:(id)arg0 ;
+(id)registry;
+(id)scheme;
+(void)initialize;
+(void)setRegistry:(id)arg0 ;
-(id)_cachedResponseWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)_didLoadContentEvent:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif