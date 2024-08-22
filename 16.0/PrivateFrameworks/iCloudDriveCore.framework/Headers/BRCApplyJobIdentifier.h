// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCAPPLYJOBIDENTIFIER_H
#define BRCAPPLYJOBIDENTIFIER_H



#import "BRCIntAndZoneJobIdentifier.h"

@interface BRCApplyJobIdentifier : BRCIntAndZoneJobIdentifier



-(NSInteger)rank;
-(NSInteger)rejectedRowID;
-(NSInteger)serverItemRank;
-(id)initWithRank:(NSInteger)arg0 zoneRowID:(id)arg1 ;


@end


#endif