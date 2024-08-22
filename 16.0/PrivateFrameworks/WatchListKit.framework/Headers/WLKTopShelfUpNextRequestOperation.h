// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKTOPSHELFUPNEXTREQUESTOPERATION_H
#define WLKTOPSHELFUPNEXTREQUESTOPERATION_H



#import "WLKUTSNetworkRequestOperation.h"
#import "WLKContinueWatchingResponse.h"

@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response; // ivar: _response


-(id)init;
-(id)initWithQueryParameters:(id)arg0 options:(NSInteger)arg1 ;
-(void)processResponse;


@end


#endif