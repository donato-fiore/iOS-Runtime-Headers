// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSIRIBESTPLAYABLEFORSTATSIDSOPERATION_H
#define WLKSIRIBESTPLAYABLEFORSTATSIDSOPERATION_H

@class NSArray;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKSiriBestPlayablesResponse.h"

@interface WLKSiriBestPlayableForStatsIDsOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKSiriBestPlayablesResponse *response; // ivar: _response
@property (readonly, copy, nonatomic) NSArray *statsIDs; // ivar: _statsIDs


-(id)initWithStatsIDs:(id)arg0 caller:(id)arg1 ;
-(void)processResponse;


@end


#endif