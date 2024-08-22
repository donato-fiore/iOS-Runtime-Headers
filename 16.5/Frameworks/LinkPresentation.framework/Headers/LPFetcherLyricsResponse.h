// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPFETCHERLYRICSRESPONSE_H
#define LPFETCHERLYRICSRESPONSE_H



#import "LPFetcherResponse.h"
#import "LPLyricExcerptMetadata.h"

@interface LPFetcherLyricsResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPLyricExcerptMetadata *lyrics; // ivar: _lyrics


-(id)initWithLyrics:(id)arg0 fetcher:(id)arg1 ;


@end


#endif