// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSPORTSFAVORITEREQUESTOPERATION_H
#define WLKSPORTSFAVORITEREQUESTOPERATION_H

@class NSArray;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKSportsFavoriteResponse.h"

@interface WLKSportsFavoriteRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSArray *ids; // ivar: _ids
@property (retain, nonatomic) WLKSportsFavoriteResponse *response; // ivar: _response


-(id)_preparePOSTQueryOnlyWithRequest:(id)arg0 ;
-(id)initWithAction:(NSUInteger)arg0 ids:(id)arg1 ;
-(void)prepareURLRequest:(id)arg0 ;
-(void)processResponse;


@end


#endif