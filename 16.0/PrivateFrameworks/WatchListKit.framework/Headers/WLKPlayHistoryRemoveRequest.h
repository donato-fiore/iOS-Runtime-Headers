// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPLAYHISTORYREMOVEREQUEST_H
#define WLKPLAYHISTORYREMOVEREQUEST_H

@class NSString;


#import "WLKRequest.h"

@interface WLKPlayHistoryRemoveRequest : WLKRequest {
    NSString *_channelID;
}


@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID


-(id)initWithBundleID:(id)arg0 externalID:(id)arg1 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif