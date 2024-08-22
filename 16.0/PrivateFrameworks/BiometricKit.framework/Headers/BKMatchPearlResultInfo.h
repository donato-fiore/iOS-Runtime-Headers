// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKMATCHPEARLRESULTINFO_H
#define BKMATCHPEARLRESULTINFO_H



#import "BKMatchResultInfo.h"

@interface BKMatchPearlResultInfo : BKMatchResultInfo

@property (readonly, nonatomic) NSInteger feedback; // ivar: _feedback
@property (readonly, nonatomic) NSUInteger periocularMatchState; // ivar: _periocularMatchState


-(id)initWithServerIdentity:(id)arg0 details:(id)arg1 device:(id)arg2 ;


@end


#endif