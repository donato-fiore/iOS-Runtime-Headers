// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKPLAYHISTORYREMOVEREQUESTOPERATION_H
#define WLKPLAYHISTORYREMOVEREQUESTOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKContinueWatchingResponse.h"

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKContinueWatchingResponse *response; // ivar: _response


-(id)initWithChannelID:(id)arg0 externalID:(id)arg1 caller:(id)arg2 ;
-(void)processResponse;


@end


#endif