// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCHANNELSREQUESTOPERATION_H
#define WLKCHANNELSREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKChannelsResponse.h"

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation

@property (copy, nonatomic) NSString *caller; // ivar: _caller
@property (retain, nonatomic) WLKChannelsResponse *channelsResponse; // ivar: _channelsResponse
@property (nonatomic) BOOL filtered; // ivar: _filtered


-(id)initWithCaller:(id)arg0 ;
-(id)initWithCaller:(id)arg0 isFilteredByUserChannels:(BOOL)arg1 ;
-(void)processResponse;


@end


#endif