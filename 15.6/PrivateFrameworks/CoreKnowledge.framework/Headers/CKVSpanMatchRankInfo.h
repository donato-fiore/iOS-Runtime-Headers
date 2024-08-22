// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSPANMATCHRANKINFO_H
#define CKVSPANMATCHRANKINFO_H


#import <Foundation/Foundation.h>

#import "CKVItemInfo.h"
#import "CKVPriorInfo.h"
#import "CKVSpanMatch.h"

@interface CKVSpanMatchRankInfo : NSObject

@property (readonly, nonatomic) CKVItemInfo *itemInfo; // ivar: _itemInfo
@property (readonly, nonatomic) CKVPriorInfo *priorInfo; // ivar: _priorInfo
@property (readonly, nonatomic) float rankScore; // ivar: _rankScore
@property (readonly, nonatomic) CKVSpanMatch *spanMatch; // ivar: _spanMatch


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchRankInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCandidate:(id)arg0 priorInfo:(id)arg1 rankScore:(float)arg2 ;


@end


#endif