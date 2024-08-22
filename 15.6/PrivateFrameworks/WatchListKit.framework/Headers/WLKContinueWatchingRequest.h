// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCONTINUEWATCHINGREQUEST_H
#define WLKCONTINUEWATCHINGREQUEST_H



#import "WLKRequest.h"
#import "WLKContinueWatchingResponse.h"

@interface WLKContinueWatchingRequest : WLKRequest

@property (nonatomic) BOOL allowAuthentication; // ivar: _allowAuthentication
@property (readonly, nonatomic) WLKContinueWatchingResponse *response; // ivar: _response


-(id)init;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif