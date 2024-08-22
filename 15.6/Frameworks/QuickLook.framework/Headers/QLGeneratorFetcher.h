// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLGENERATORFETCHER_H
#define QLGENERATORFETCHER_H

@class NSString, NSURL;


#import "QLItemFetcher.h"

@interface QLGeneratorFetcher : QLItemFetcher

@property (retain) NSString *contentType; // ivar: _contentType
@property BOOL fetchCompleted; // ivar: _fetchCompleted
@property (retain) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 contentType:(id)arg1 ;
// -(void)_callCompletionBlockIfNecessary:(id)arg0 withReply:(unk)arg1 error:(id)arg2  ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;


@end


#endif