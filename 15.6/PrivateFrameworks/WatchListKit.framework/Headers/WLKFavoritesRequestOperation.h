// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKFAVORITESREQUESTOPERATION_H
#define WLKFAVORITESREQUESTOPERATION_H

@class NSArray;


#import "WLKUTSNetworkRequestOperation.h"

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *favorites; // ivar: _favorites


-(id)initWithCaller:(id)arg0 ;
-(void)prepareURLRequest:(id)arg0 ;
-(void)processResponse;


@end


#endif