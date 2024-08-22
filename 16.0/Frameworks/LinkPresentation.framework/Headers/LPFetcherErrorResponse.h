// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPFETCHERERRORRESPONSE_H
#define LPFETCHERERRORRESPONSE_H

@class NSError;


#import "LPFetcherResponse.h"

@interface LPFetcherErrorResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithError:(id)arg0 fetcher:(id)arg1 ;


@end


#endif