// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCANONICALPLAYABLESSIRIREQUESTOPERATION_H
#define WLKCANONICALPLAYABLESSIRIREQUESTOPERATION_H

@class NSString;


#import "WLKUTSNetworkRequestOperation.h"
#import "WLKCanonicalPlayablesResponse.h"

@interface WLKCanonicalPlayablesSiriRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response; // ivar: _response
@property (readonly, nonatomic) NSString *statsID; // ivar: _statsID


-(id)initWithStatsID:(id)arg0 caller:(id)arg1 ;
-(void)processResponse;


@end


#endif