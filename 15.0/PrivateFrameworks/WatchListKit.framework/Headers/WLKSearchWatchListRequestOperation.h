// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSEARCHWATCHLISTREQUESTOPERATION_H
#define WLKSEARCHWATCHLISTREQUESTOPERATION_H

@class NSDictionary;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKSearchWatchListResponse.h"

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSDictionary *query; // ivar: _query
@property (readonly, nonatomic) WLKSearchWatchListResponse *response; // ivar: _response


-(id)initWithQuery:(id)arg0 caller:(id)arg1 ;
-(void)processResponse;


@end


#endif