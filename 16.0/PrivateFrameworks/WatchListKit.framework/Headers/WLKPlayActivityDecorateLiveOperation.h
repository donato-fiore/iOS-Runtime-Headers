// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPLAYACTIVITYDECORATELIVEOPERATION_H
#define WLKPLAYACTIVITYDECORATELIVEOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, copy, nonatomic) NSString *serviceID; // ivar: _serviceID


-(id)initWithChannelID:(id)arg0 serviceID:(id)arg1 ;


@end


#endif