// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCANONICALPLAYABLESREQUEST_H
#define WLKCANONICALPLAYABLESREQUEST_H

@class NSString;


#import "WLKRequest.h"

@interface WLKCanonicalPlayablesRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) NSString *statsID; // ivar: _statsID


-(id)initWithCanonicalID:(id)arg0 ;
-(id)initWithStatsID:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;
// -(void)makeRequestWithCompletion:(id)arg0 canonicalType:(unk)arg1  ;


@end


#endif