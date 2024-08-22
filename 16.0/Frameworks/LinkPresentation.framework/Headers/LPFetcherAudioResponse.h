// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPFETCHERAUDIORESPONSE_H
#define LPFETCHERAUDIORESPONSE_H



#import "LPFetcherResponse.h"
#import "LPAudio.h"

@interface LPFetcherAudioResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) LPAudio *audio; // ivar: _audio


+(id)audioPropertiesForFetcher:(id)arg0 ;
-(id)initWithAudio:(id)arg0 fetcher:(id)arg1 ;


@end


#endif