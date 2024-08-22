// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCEXCERPTURLPROTOCOL_H
#define FCEXCERPTURLPROTOCOL_H

@class NSURLProtocol;


#import "FCCKContentFetchOperation.h"

@interface FCExcerptURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation; // ivar: _fetchOperation


+(BOOL)canHandleURL:(id)arg0 ;
+(BOOL)canHandleURLWithComponents:(id)arg0 ;
+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)excerptURLForArticleID:(id)arg0 changeTag:(id)arg1 ;
+(void)initialize;
+(void)setupWithArticleDatabase:(id)arg0 ;
+(void)unregister;
-(void)startLoading;
-(void)stopLoading;


@end


#endif