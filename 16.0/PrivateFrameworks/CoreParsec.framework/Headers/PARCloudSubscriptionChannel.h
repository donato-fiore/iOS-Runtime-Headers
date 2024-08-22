// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARCLOUDSUBSCRIPTIONCHANNEL_H
#define PARCLOUDSUBSCRIPTIONCHANNEL_H

@class SFCloudChannelsRequestItem;


#import "PARSubscriptionChannel.h"

@interface PARCloudSubscriptionChannel : PARSubscriptionChannel

@property (retain, nonatomic) SFCloudChannelsRequestItem *channelItem; // ivar: channelItem


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChannelItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif