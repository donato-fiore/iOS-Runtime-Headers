// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKPUSHVALUERESPONSE_H
#define SBKPUSHVALUERESPONSE_H

@class NSString, NSData;


#import "SBKResponse.h"

@interface SBKPushValueResponse : SBKResponse

@property (readonly, nonatomic) NSString *conflictItemKey; // ivar: _conflictItemKey
@property (readonly, nonatomic) NSData *conflictItemValuePayload; // ivar: _conflictItemValuePayload
@property (readonly, nonatomic) NSString *conflictItemVersionAnchor; // ivar: _conflictItemVersionAnchor
@property (readonly, nonatomic) NSString *domainVersion; // ivar: _domainVersion


+(id)responseWithResponse:(id)arg0 transaction:(id)arg1 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg0 ;


@end


#endif