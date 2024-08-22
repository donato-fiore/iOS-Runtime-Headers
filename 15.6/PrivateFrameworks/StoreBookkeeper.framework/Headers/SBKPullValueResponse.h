// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKPULLVALUERESPONSE_H
#define SBKPULLVALUERESPONSE_H

@class NSString, NSData;


#import "SBKResponse.h"

@interface SBKPullValueResponse : SBKResponse

@property (readonly, nonatomic) NSString *domainVersion; // ivar: _domainVersion
@property (readonly, nonatomic) NSString *itemKey; // ivar: _itemKey
@property (readonly, nonatomic) NSData *itemValuePayload; // ivar: _itemValuePayload
@property (readonly, nonatomic) NSString *itemVersion; // ivar: _itemVersion


+(id)responseWithResponse:(id)arg0 transaction:(id)arg1 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg0 ;


@end


#endif