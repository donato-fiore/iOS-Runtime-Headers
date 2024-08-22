// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRECORDFIELDURLPROTOCOL_H
#define FCRECORDFIELDURLPROTOCOL_H

@class NSURLProtocol;


#import "FCCKContentFetchOperation.h"

@interface FCRecordFieldURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation; // ivar: _fetchOperation


+(BOOL)canHandleURL:(id)arg0 ;
+(BOOL)canHandleURLWithComponents:(id)arg0 ;
+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)URLForRecordID:(id)arg0 fieldName:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(void)setupWithArticleDatabase:(id)arg0 ;
+(void)unregister;
-(void)startLoading;
-(void)stopLoading;


@end


#endif