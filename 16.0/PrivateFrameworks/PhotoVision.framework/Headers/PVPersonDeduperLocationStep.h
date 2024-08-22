// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVPERSONDEDUPERLOCATIONSTEP_H
#define PVPERSONDEDUPERLOCATIONSTEP_H



#import "PVPersonDeduperStep.h"

@interface PVPersonDeduperLocationStep : PVPersonDeduperStep



-(BOOL)isPersonSimilar:(id)arg0 withOtherPerson:(id)arg1 withDistance:(float)arg2 minAgeType:(unsigned short)arg3 ;
-(id)metricsKey;
-(id)momentWithBestLocationForPersons:(id)arg0 andOtherPersons:(id)arg1 personsByMomentLocalIdentifiersCache:(id)arg2 ;
-(id)name;
// -(void)dedupePersons:(id)arg0 withOtherPersons:(id)arg1 updateBlock:(id)arg2 resultBlock:(unk)arg3  ;


@end


#endif