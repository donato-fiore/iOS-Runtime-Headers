// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCHANNELLOOKUPOPERATION_H
#define WLKCHANNELLOOKUPOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKChannelResponse.h"

@interface WLKChannelLookupOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKChannelResponse *channelResponse; // ivar: _channelResponse


-(id)initWithAdamId:(id)arg0 ;
-(void)processResponse;


@end


#endif