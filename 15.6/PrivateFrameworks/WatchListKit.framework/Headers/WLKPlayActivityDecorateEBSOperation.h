// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKPLAYACTIVITYDECORATEEBSOPERATION_H
#define WLKPLAYACTIVITYDECORATEEBSOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, copy, nonatomic) NSString *externalContentID; // ivar: _externalContentID


-(id)initWithChannelID:(id)arg0 externalContentID:(id)arg1 ;


@end


#endif