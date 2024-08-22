// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFETCHERSTRINGRESPONSE_H
#define LPFETCHERSTRINGRESPONSE_H

@class NSString;


#import "LPFetcherResponse.h"

@interface LPFetcherStringResponse : LPFetcherResponse

@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


-(id)initWithString:(id)arg0 fetcher:(id)arg1 ;


@end


#endif