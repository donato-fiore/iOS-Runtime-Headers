// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKSEARCHWATCHLISTREQUEST_H
#define WLKSEARCHWATCHLISTREQUEST_H

@class NSDictionary;


#import "WLKRequest.h"

@interface WLKSearchWatchListRequest : WLKRequest

@property (readonly, copy, nonatomic) NSDictionary *query; // ivar: _query


-(id)initWithQuery:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif