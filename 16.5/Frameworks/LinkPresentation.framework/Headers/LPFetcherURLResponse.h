// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPFETCHERURLRESPONSE_H
#define LPFETCHERURLRESPONSE_H

@class NSURL;


#import "LPFetcherResponse.h"

@interface LPFetcherURLResponse : LPFetcherResponse

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL


-(id)initWithURL:(id)arg0 fetcher:(id)arg1 ;


@end


#endif