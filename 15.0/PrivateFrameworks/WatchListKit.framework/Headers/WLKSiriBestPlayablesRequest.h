// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSIRIBESTPLAYABLESREQUEST_H
#define WLKSIRIBESTPLAYABLESREQUEST_H

@class NSArray;


#import "WLKRequest.h"

@interface WLKSiriBestPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSArray *statsIDs; // ivar: _statsIDs


-(id)init;
-(id)initWithStatsIDs:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif