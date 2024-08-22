// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOADTRENDINGSEARCHPAGEOPERATION_H
#define SKUILOADTRENDINGSEARCHPAGEOPERATION_H

@class NSOperation, NSURL;


#import "SKUIClientContext.h"

@interface SKUILoadTrendingSearchPageOperation : NSOperation

@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy, nonatomic) id *outputBlock; // ivar: _outputBlock
@property (readonly, nonatomic) NSURL *pageURL; // ivar: _pageURL


-(id)initWithClientContext:(id)arg0 pageURL:(id)arg1 outputBlock:(id)arg2 ;
-(void)main;


@end


#endif