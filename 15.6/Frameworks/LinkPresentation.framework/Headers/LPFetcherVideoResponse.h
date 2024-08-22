// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPFETCHERVIDEORESPONSE_H
#define LPFETCHERVIDEORESPONSE_H



#import "LPFetcherResponse.h"
#import "LPVideo.h"

@interface LPFetcherVideoResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPVideo *video; // ivar: _video


+(id)videoPropertiesForFetcher:(id)arg0 ;
-(id)initWithVideo:(id)arg0 fetcher:(id)arg1 ;


@end


#endif