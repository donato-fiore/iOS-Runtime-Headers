// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBNETWORKREMOTEFETCHRESPONSE_H
#define TBNETWORKREMOTEFETCHRESPONSE_H

@class GEOWiFiQualityNetworkSearchResult;


#import "TBRemoteFetchResponse.h"

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse

@property (retain, nonatomic) GEOWiFiQualityNetworkSearchResult *networkSearchResult; // ivar: _networkSearchResult


+(id)responseWithNetworkSearchResults:(id)arg0 ;
-(id)initWithNetworkSearchResults:(id)arg0 ;


@end


#endif